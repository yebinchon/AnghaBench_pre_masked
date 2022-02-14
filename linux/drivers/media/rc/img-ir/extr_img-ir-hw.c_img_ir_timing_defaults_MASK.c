
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_ir_timing_range {scalar_t__ max; scalar_t__ min; } ;



__attribute__((used)) static void FUNC_0(struct img_ir_timing_range *VAR_0,
       struct img_ir_timing_range *VAR_1)
{
 if (!VAR_0->min)
  VAR_0->min = VAR_1->min;
 if (!VAR_0->max)
  VAR_0->max = VAR_1->max;
}
