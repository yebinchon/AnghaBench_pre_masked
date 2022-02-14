
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {int vsel_mask; int apply_bit; int apply_reg; int vsel_reg; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,unsigned int) ;

int FUNC_2(struct regulator_dev *VAR_0, unsigned VAR_1)
{
 int VAR_2;

 VAR_1 <<= FUNC_0(VAR_0->desc->vsel_mask) - 1;

 VAR_2 = FUNC_1(VAR_0->regmap, VAR_0->desc->vsel_reg,
      VAR_0->desc->vsel_mask, VAR_1);
 if (VAR_2)
  return VAR_2;

 if (VAR_0->desc->apply_bit)
  VAR_2 = FUNC_1(VAR_0->regmap, VAR_0->desc->apply_reg,
      VAR_0->desc->apply_bit,
      VAR_0->desc->apply_bit);
 return VAR_2;
}
