
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct pwm_regulator_data {scalar_t__ state; } ;


 int FUNC_0 (struct regulator_dev*) ;
 struct pwm_regulator_data* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_0)
{
 struct pwm_regulator_data *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->state < 0)
  FUNC_0(VAR_0);

 return VAR_1->state;
}
