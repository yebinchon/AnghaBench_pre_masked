
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct pwm_regulator_data {int pwm; scalar_t__ enb_gpio; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 struct pwm_regulator_data* FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0)
{
 struct pwm_regulator_data *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->enb_gpio && !FUNC_0(VAR_1->enb_gpio))
  return 0;

 return FUNC_1(VAR_1->pwm);
}
