
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk808_regulator_data {struct gpio_desc** dvs_gpio; } ;
struct regulator_dev {int dummy; } ;
struct gpio_desc {int dummy; } ;


 struct rk808_regulator_data* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0,
           unsigned int VAR_1,
           unsigned int VAR_2)
{
 struct rk808_regulator_data *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = FUNC_1(VAR_0);
 struct gpio_desc *VAR_5 = VAR_3->dvs_gpio[VAR_4];


 if (!VAR_5)
  return 0;

 return FUNC_2(VAR_0, VAR_1, VAR_2);
}
