
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct regulator_dev {TYPE_2__* constraints; } ;
struct pwm_state {int dummy; } ;
struct TYPE_3__ {unsigned int min_uV_dutycycle; unsigned int max_uV_dutycycle; unsigned int dutycycle_unit; } ;
struct pwm_regulator_data {int pwm; TYPE_1__ continuous; } ;
struct TYPE_4__ {int min_uV; int max_uV; } ;


 unsigned int FUNC_0 (int,unsigned int) ;
 unsigned int FUNC_1 (struct pwm_state*,unsigned int) ;
 int FUNC_2 (int ,struct pwm_state*) ;
 struct pwm_regulator_data* FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_0)
{
 struct pwm_regulator_data *VAR_1 = FUNC_3(VAR_0);
 unsigned int VAR_2 = VAR_1->continuous.min_uV_dutycycle;
 unsigned int VAR_3 = VAR_1->continuous.max_uV_dutycycle;
 unsigned int VAR_4 = VAR_1->continuous.dutycycle_unit;
 int VAR_5 = VAR_0->constraints->min_uV;
 int VAR_6 = VAR_0->constraints->max_uV;
 int VAR_7 = VAR_6 - VAR_5;
 struct pwm_state VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;

 FUNC_2(VAR_1->pwm, &VAR_8);

 VAR_10 = FUNC_1(&VAR_8, VAR_4);






 if (VAR_3 < VAR_2) {
  VAR_10 = VAR_2 - VAR_10;
  VAR_9 = VAR_2 - VAR_3;
 } else {
  VAR_10 = VAR_10 - VAR_2;
  VAR_9 = VAR_3 - VAR_2;
 }

 VAR_10 = FUNC_0((u64)VAR_10 * VAR_7, VAR_9);

 return VAR_10 + VAR_5;
}
