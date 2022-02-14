
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65132_regulator {struct tps65132_reg_pdata* reg_pdata; } ;
struct tps65132_reg_pdata {int act_dis_gpiod; scalar_t__ act_dis_time_us; scalar_t__ ena_gpio_state; int en_gpiod; } ;
struct regulator_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int) ;
 struct tps65132_regulator* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_1)
{
 struct tps65132_regulator *VAR_2 = FUNC_2(VAR_1);
 int VAR_3 = FUNC_3(VAR_1);
 struct tps65132_reg_pdata *VAR_4 = &VAR_2->reg_pdata[VAR_3];

 if (!FUNC_0(VAR_4->en_gpiod)) {
  FUNC_1(VAR_4->en_gpiod, 0);
  VAR_4->ena_gpio_state = 0;
 }

 if (!FUNC_0(VAR_4->act_dis_gpiod)) {
  FUNC_1(VAR_4->act_dis_gpiod, 1);
  FUNC_4(VAR_4->act_dis_time_us, VAR_4->act_dis_time_us +
        VAR_0);
  FUNC_1(VAR_4->act_dis_gpiod, 0);
 }

 return 0;
}
