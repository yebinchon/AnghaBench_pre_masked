
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {unsigned int bypass_val_on; unsigned int bypass_mask; int bypass_reg; } ;


 int FUNC_0 (int ,int ,unsigned int*) ;

int FUNC_1(struct regulator_dev *VAR_0, bool *VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3 = VAR_0->desc->bypass_val_on;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0->regmap, VAR_0->desc->bypass_reg, &VAR_2);
 if (VAR_4 != 0)
  return VAR_4;

 if (!VAR_3)
  VAR_3 = VAR_0->desc->bypass_mask;

 *VAR_1 = (VAR_2 & VAR_0->desc->bypass_mask) == VAR_3;

 return 0;
}
