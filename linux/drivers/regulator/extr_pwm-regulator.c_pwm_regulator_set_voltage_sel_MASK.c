
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dev; } ;
struct pwm_state {int dummy; } ;
struct pwm_regulator_data {unsigned int state; int pwm; TYPE_1__* duty_cycle_table; } ;
struct TYPE_2__ {int dutycycle; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,struct pwm_state*) ;
 int FUNC_2 (int ,struct pwm_state*) ;
 int FUNC_3 (struct pwm_state*,int ,int) ;
 struct pwm_regulator_data* FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_0,
      unsigned VAR_1)
{
 struct pwm_regulator_data *VAR_2 = FUNC_4(VAR_0);
 struct pwm_state VAR_3;
 int VAR_4;

 FUNC_2(VAR_2->pwm, &VAR_3);
 FUNC_3(&VAR_3,
   VAR_2->duty_cycle_table[VAR_1].dutycycle, 100);

 VAR_4 = FUNC_1(VAR_2->pwm, &VAR_3);
 if (VAR_4) {
  FUNC_0(&VAR_0->dev, "Failed to configure PWM: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_2->state = VAR_1;

 return 0;
}
