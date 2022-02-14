
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501_clock {unsigned int m; unsigned int n; unsigned int k; unsigned long mclk; unsigned long divider; unsigned long shift; } ;


 scalar_t__ FUNC_0 (unsigned long,struct sm501_clock*,int,unsigned long,long*) ;

__attribute__((used)) static unsigned long FUNC_1(unsigned long VAR_0,
     struct sm501_clock *VAR_1,
     int VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4, VAR_5, VAR_6;
 long VAR_7 = 999999999;





 for (VAR_4 = 2; VAR_4 <= 255; VAR_4++) {
  for (VAR_5 = 2; VAR_5 <= 127; VAR_5++) {
   for (VAR_6 = 0; VAR_6 <= 1; VAR_6++) {
    VAR_3 = (24000000UL * VAR_4 / VAR_5) >> VAR_6;

    if (FUNC_0(VAR_0, VAR_1, VAR_2,
           VAR_3, &VAR_7)) {
     VAR_1->m = VAR_4;
     VAR_1->n = VAR_5;
     VAR_1->k = VAR_6;
    }
   }
  }
 }


 return VAR_1->mclk / (VAR_1->divider << VAR_1->shift);
}
