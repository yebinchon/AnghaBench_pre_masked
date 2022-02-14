
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {unsigned int n_voltages; unsigned int linear_min_sel; int min_uV; unsigned int uV_step; } ;


 int VAR_0 ;

int FUNC_0(struct regulator_dev *VAR_1,
      unsigned int VAR_2)
{
 if (VAR_2 >= VAR_1->desc->n_voltages)
  return -VAR_0;
 if (VAR_2 < VAR_1->desc->linear_min_sel)
  return 0;

 VAR_2 -= VAR_1->desc->linear_min_sel;

 return VAR_1->desc->min_uV + (VAR_1->desc->uV_step * VAR_2);
}
