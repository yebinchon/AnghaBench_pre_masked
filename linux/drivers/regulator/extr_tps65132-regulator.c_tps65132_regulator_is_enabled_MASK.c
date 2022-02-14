
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65132_regulator {struct tps65132_reg_pdata* reg_pdata; } ;
struct tps65132_reg_pdata {int ena_gpio_state; int en_gpiod; } ;
struct regulator_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 struct tps65132_regulator* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0)
{
 struct tps65132_regulator *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = FUNC_2(VAR_0);
 struct tps65132_reg_pdata *VAR_3 = &VAR_1->reg_pdata[VAR_2];

 if (!FUNC_0(VAR_3->en_gpiod))
  return VAR_3->ena_gpio_state;

 return 1;
}
