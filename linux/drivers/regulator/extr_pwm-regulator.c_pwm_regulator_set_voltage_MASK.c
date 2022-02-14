
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u64 ;
struct regulator_dev {int dev; TYPE_2__* constraints; } ;
struct pwm_state {int dummy; } ;
struct TYPE_3__ {unsigned int min_uV_dutycycle; unsigned int max_uV_dutycycle; unsigned int dutycycle_unit; } ;
struct pwm_regulator_data {int pwm; TYPE_1__ continuous; } ;
struct TYPE_4__ {int min_uV; int max_uV; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,struct pwm_state*) ;
 int FUNC_3 (int ,struct pwm_state*) ;
 int FUNC_4 (struct pwm_state*,unsigned int,unsigned int) ;
 struct pwm_regulator_data* FUNC_5 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_0,
         int VAR_1, int VAR_2,
         unsigned int *VAR_3)
{
 struct pwm_regulator_data *VAR_4 = FUNC_5(VAR_0);
 unsigned int VAR_5 = VAR_4->continuous.min_uV_dutycycle;
 unsigned int VAR_6 = VAR_4->continuous.max_uV_dutycycle;
 unsigned int VAR_7 = VAR_4->continuous.dutycycle_unit;
 int VAR_8 = VAR_0->constraints->min_uV;
 int VAR_9 = VAR_0->constraints->max_uV;
 int VAR_10 = VAR_9 - VAR_8;
 struct pwm_state VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 int VAR_14;

 FUNC_3(VAR_4->pwm, &VAR_11);






 if (VAR_6 < VAR_5)
  VAR_12 = VAR_5 - VAR_6;
 else
  VAR_12 = VAR_6 - VAR_5;

 VAR_13 = FUNC_0((u64)(VAR_1 - VAR_8) *
       VAR_12,
       VAR_10);

 if (VAR_6 < VAR_5)
  VAR_13 = VAR_5 - VAR_13;
 else
  VAR_13 = VAR_5 + VAR_13;

 FUNC_4(&VAR_11, VAR_13, VAR_7);

 VAR_14 = FUNC_2(VAR_4->pwm, &VAR_11);
 if (VAR_14) {
  FUNC_1(&VAR_0->dev, "Failed to configure PWM: %d\n", VAR_14);
  return VAR_14;
 }

 return 0;
}
