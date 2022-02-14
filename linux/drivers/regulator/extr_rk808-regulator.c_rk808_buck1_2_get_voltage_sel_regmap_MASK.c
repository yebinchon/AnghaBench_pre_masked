
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk808_regulator_data {struct gpio_desc** dvs_gpio; } ;
struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct gpio_desc {int dummy; } ;
struct TYPE_2__ {unsigned int vsel_mask; scalar_t__ vsel_reg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 struct rk808_regulator_data* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (int ,scalar_t__,unsigned int*) ;
 int FUNC_5 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_1)
{
 struct rk808_regulator_data *VAR_2 = FUNC_2(VAR_1);
 int VAR_3 = FUNC_3(VAR_1);
 struct gpio_desc *VAR_4 = VAR_2->dvs_gpio[VAR_3];
 unsigned int VAR_5;
 int VAR_6;

 if (!VAR_4 || FUNC_1(VAR_4) == 0)
  return FUNC_5(VAR_1);

 VAR_6 = FUNC_4(VAR_1->regmap,
     VAR_1->desc->vsel_reg + VAR_0,
     &VAR_5);
 if (VAR_6 != 0)
  return VAR_6;

 VAR_5 &= VAR_1->desc->vsel_mask;
 VAR_5 >>= FUNC_0(VAR_1->desc->vsel_mask) - 1;

 return VAR_5;
}
