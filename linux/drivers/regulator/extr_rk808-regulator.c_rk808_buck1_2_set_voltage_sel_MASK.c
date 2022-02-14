
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk808_regulator_data {struct gpio_desc** dvs_gpio; } ;
struct regulator_dev {int regmap; TYPE_1__* desc; } ;
struct gpio_desc {int dummy; } ;
struct TYPE_2__ {unsigned int vsel_reg; unsigned int vsel_mask; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct gpio_desc*,int) ;
 struct rk808_regulator_data* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;
 int FUNC_5 (int ,unsigned int,unsigned int*) ;
 int FUNC_6 (int ,unsigned int,unsigned int) ;
 int FUNC_7 (struct regulator_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct regulator_dev *VAR_1,
      unsigned VAR_2)
{
 struct rk808_regulator_data *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = FUNC_4(VAR_1);
 struct gpio_desc *VAR_5 = VAR_3->dvs_gpio[VAR_4];
 unsigned int VAR_6 = VAR_1->desc->vsel_reg;
 unsigned VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_5)
  return FUNC_7(VAR_1, VAR_2);

 VAR_9 = FUNC_1(VAR_5);
 if (VAR_9 == 0) {
  VAR_6 += VAR_0;
  VAR_8 = FUNC_5(VAR_1->regmap, VAR_1->desc->vsel_reg, &VAR_7);
 } else {
  VAR_8 = FUNC_5(VAR_1->regmap,
      VAR_6 + VAR_0,
      &VAR_7);
 }

 if (VAR_8 != 0)
  return VAR_8;

 VAR_2 <<= FUNC_0(VAR_1->desc->vsel_mask) - 1;
 VAR_2 |= VAR_7 & ~VAR_1->desc->vsel_mask;

 VAR_8 = FUNC_6(VAR_1->regmap, VAR_6, VAR_2);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_5, !VAR_9);

 return VAR_8;
}
