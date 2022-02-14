
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_ir_timing_range {unsigned int max; unsigned int min; } ;



__attribute__((used)) static void FUNC_0(struct img_ir_timing_range *VAR_0,
         unsigned int VAR_1)
{
 if (VAR_0->max < VAR_0->min)
  VAR_0->max = VAR_0->min;
 if (VAR_1) {

  VAR_0->min = (VAR_0->min*VAR_1)/1000;
  VAR_0->max = (VAR_0->max*VAR_1 + 999)/1000;
 }
}
