
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_ir_timing_range {unsigned int min; unsigned int max; } ;



__attribute__((used)) static void FUNC_0(struct img_ir_timing_range *VAR_0,
     const struct img_ir_timing_range *VAR_1,
     unsigned int VAR_2,
     unsigned long VAR_3,
     unsigned int VAR_4)
{
 unsigned int VAR_5 = VAR_1->min;
 unsigned int VAR_6 = VAR_1->max;

 VAR_5 = VAR_5 - (VAR_5*VAR_2 >> 7);
 VAR_6 = VAR_6 + (VAR_6*VAR_2 >> 7);

 VAR_5 = VAR_5*VAR_3 / 1000000;
 VAR_6 = (VAR_6*VAR_3 + 999999) / 1000000;

 VAR_0->min = VAR_5 >> VAR_4;
 VAR_0->max = (VAR_6 + ((1 << VAR_4) - 1)) >> VAR_4;
}
