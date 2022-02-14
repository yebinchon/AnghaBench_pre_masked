
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {unsigned int soft_start_val_on; unsigned int soft_start_mask; int soft_start_reg; } ;


 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;

int FUNC_1(struct regulator_dev *VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = VAR_0->desc->soft_start_val_on;
 if (!VAR_1)
  VAR_1 = VAR_0->desc->soft_start_mask;

 return FUNC_0(VAR_0->regmap, VAR_0->desc->soft_start_reg,
      VAR_0->desc->soft_start_mask, VAR_1);
}
