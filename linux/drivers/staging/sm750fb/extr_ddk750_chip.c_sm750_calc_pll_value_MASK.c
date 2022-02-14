
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_value {int inputFreq; scalar_t__ clockType; int M; int N; int POD; int OD; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 () ;

unsigned int FUNC_3(unsigned int VAR_2,
      struct pll_value *VAR_3)
{




 int VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
 unsigned int VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16;
 const int VAR_17 = 3;
 int VAR_18 = 6;

 if (FUNC_2() == VAR_1) {





  return VAR_2;
 }

 VAR_16 = 0;
 VAR_8 = ~0;
 VAR_14 = VAR_2 / 1000;
 VAR_13 = VAR_3->inputFreq / 1000;





 if (VAR_3->clockType == VAR_0)
  VAR_18 = 3;

 for (VAR_4 = 15; VAR_4 > 1; VAR_4--) {




  VAR_9 = VAR_4 * VAR_14;
  VAR_10 = VAR_9 / VAR_13;
  VAR_11 = VAR_9 % VAR_13;
  VAR_12 = VAR_11 * 10000 / VAR_13;

  for (VAR_7 = VAR_18; VAR_7 >= 0; VAR_7--) {
   VAR_6 = FUNC_0(VAR_7);
   VAR_5 = VAR_10 * VAR_6;
   VAR_5 += VAR_12 * VAR_6 / 10000;

   VAR_5 += (VAR_12 * VAR_6 % 10000) > 5000 ? 1 : 0;
   if (VAR_5 < 256 && VAR_5 > 0) {
    unsigned int VAR_19;

    VAR_15 = VAR_3->inputFreq * VAR_5 / VAR_4 / VAR_6;
    VAR_19 = FUNC_1(VAR_15 - VAR_2);
    if (VAR_19 < VAR_8) {
     VAR_3->M = VAR_5;
     VAR_3->N = VAR_4;
     VAR_3->POD = 0;
     if (VAR_7 > VAR_17)
      VAR_3->POD = VAR_7 - VAR_17;
     VAR_3->OD = VAR_7 - VAR_3->POD;
     VAR_8 = VAR_19;
     VAR_16 = VAR_15;
    }
   }
  }
 }
 return VAR_16;
}
