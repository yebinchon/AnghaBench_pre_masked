
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats {int min; int max; int sigma; int samples; } ;
typedef int s8 ;
typedef int s16 ;


 int FUNC_0 (int,int *) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline
void FUNC_3(struct stats *VAR_0, s8 VAR_1)
{
 s8 VAR_2, VAR_3;
 s16 VAR_4;
 unsigned VAR_5 = FUNC_1(&VAR_0->samples);
 if (VAR_5 == 0) {
  VAR_2 = 127;
  VAR_3 = -128;
  VAR_4 = 0;
 } else {
  VAR_2 = VAR_0->min;
  VAR_3 = VAR_0->max;
  VAR_4 = VAR_0->sigma;
 }

 if (VAR_1 < VAR_2)
  VAR_2 = VAR_1;
 else if (VAR_1 > VAR_3)
  VAR_3 = VAR_1;
 VAR_4 += VAR_1;

 VAR_0->min = VAR_2;
 VAR_0->max = VAR_3;
 VAR_0->sigma = VAR_4;
 if (FUNC_0(1, &VAR_0->samples) > 255) {

  VAR_0->sigma = VAR_4 / 256;
  FUNC_2(&VAR_0->samples, 1);
 }
}
