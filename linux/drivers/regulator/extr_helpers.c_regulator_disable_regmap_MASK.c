
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {unsigned int enable_val; unsigned int enable_mask; unsigned int disable_val; int enable_reg; scalar_t__ enable_is_inverted; } ;


 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;

int FUNC_1(struct regulator_dev *VAR_0)
{
 unsigned int VAR_1;

 if (VAR_0->desc->enable_is_inverted) {
  VAR_1 = VAR_0->desc->enable_val;
  if (!VAR_1)
   VAR_1 = VAR_0->desc->enable_mask;
 } else {
  VAR_1 = VAR_0->desc->disable_val;
 }

 return FUNC_0(VAR_0->regmap, VAR_0->desc->enable_reg,
      VAR_0->desc->enable_mask, VAR_1);
}
