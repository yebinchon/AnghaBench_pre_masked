
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct pwm_state {int dummy; } ;
struct pwm_regulator_data {int state; TYPE_2__* duty_cycle_table; int pwm; } ;
struct TYPE_4__ {unsigned int dutycycle; } ;
struct TYPE_3__ {int n_voltages; } ;


 unsigned int FUNC_0 (struct pwm_state*,int) ;
 int FUNC_1 (int ,struct pwm_state*) ;
 struct pwm_regulator_data* FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static void FUNC_3(struct regulator_dev *VAR_0)
{
 struct pwm_regulator_data *VAR_1 = FUNC_2(VAR_0);
 struct pwm_state VAR_2;
 unsigned int VAR_3;
 int VAR_4;

 FUNC_1(VAR_1->pwm, &VAR_2);
 VAR_3 = FUNC_0(&VAR_2, 100);

 for (VAR_4 = 0; VAR_4 < VAR_0->desc->n_voltages; VAR_4++) {
  if (VAR_3 == VAR_1->duty_cycle_table[VAR_4].dutycycle) {
   VAR_1->state = VAR_4;
   return;
  }
 }
}
