
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {unsigned int enable_mask; int enable_val; scalar_t__ enable_is_inverted; int enable_reg; } ;


 int FUNC_0 (int ,int ,unsigned int*) ;

int FUNC_1(struct regulator_dev *VAR_0)
{
 unsigned int VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->regmap, VAR_0->desc->enable_reg, &VAR_1);
 if (VAR_2 != 0)
  return VAR_2;

 VAR_1 &= VAR_0->desc->enable_mask;

 if (VAR_0->desc->enable_is_inverted) {
  if (VAR_0->desc->enable_val)
   return VAR_1 != VAR_0->desc->enable_val;
  return VAR_1 == 0;
 } else {
  if (VAR_0->desc->enable_val)
   return VAR_1 == VAR_0->desc->enable_val;
  return VAR_1 != 0;
 }
}
