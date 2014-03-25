#include "Std_includes.h"

//! Функция main
/** 
 СОздание массивов
*/ 

#define N 120
void main()
{
	srand(time(NULL));
	int *a=new int[N];
	int *b=new int[N];
	for (int i=0;i<N;i++) {
		a[i]=-50+rand()%101;
		b[i]=-50+rand()%101;
	}

	sort1(a,N);
	sort2(b,0,N-1);


	std::cout << "mass A:" << std::endl;
	for (int i=0;i<N;i++) {
		std::cout.width(4);
		std::cout << a[i];
		if (!((i+1)%10)) std::cout << std::endl;
	}

	std::cout << std::endl << "mass B:" << std::endl;
	for (int i=0;i<N;i++) {
		std::cout.width(4);
		std::cout << b[i];
		if (!((i+1)%10)) std::cout << std::endl;
	}
	delete a;
	delete b;
}