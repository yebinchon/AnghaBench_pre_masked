
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct pwm_regulator_data {TYPE_2__* duty_cycle_table; } ;
struct TYPE_4__ {int uV; } ;
struct TYPE_3__ {unsigned int n_voltages; } ;


 int VAR_0 ;
 struct pwm_regulator_data* FUNC_0 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_1,
          unsigned VAR_2)
{
 struct pwm_regulator_data *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 >= VAR_1->desc->n_voltages)
  return -VAR_0;

 return VAR_3->duty_cycle_table[VAR_2].uV;
}
