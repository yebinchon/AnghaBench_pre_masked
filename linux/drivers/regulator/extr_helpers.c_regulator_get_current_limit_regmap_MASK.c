
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {unsigned int csel_mask; int* curr_table; unsigned int n_current_limits; int csel_reg; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

int FUNC_2(struct regulator_dev *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->regmap, VAR_1->desc->csel_reg, &VAR_2);
 if (VAR_3 != 0)
  return VAR_3;

 VAR_2 &= VAR_1->desc->csel_mask;
 VAR_2 >>= FUNC_0(VAR_1->desc->csel_mask) - 1;

 if (VAR_1->desc->curr_table) {
  if (VAR_2 >= VAR_1->desc->n_current_limits)
   return -VAR_0;

  return VAR_1->desc->curr_table[VAR_2];
 }

 return -VAR_0;
}
