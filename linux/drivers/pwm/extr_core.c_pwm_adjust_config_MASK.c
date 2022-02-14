
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pwm_state {int period; int duty_cycle; scalar_t__ polarity; } ;
struct pwm_device {int dummy; } ;
struct pwm_args {int period; scalar_t__ polarity; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct pwm_device*,struct pwm_state*) ;
 int FUNC_2 (struct pwm_device*,struct pwm_args*) ;
 int FUNC_3 (struct pwm_device*,struct pwm_state*) ;

int FUNC_4(struct pwm_device *VAR_0)
{
 struct pwm_state VAR_1;
 struct pwm_args VAR_2;

 FUNC_2(VAR_0, &VAR_2);
 FUNC_3(VAR_0, &VAR_1);
 if (!VAR_1.period) {
  VAR_1.duty_cycle = 0;
  VAR_1.period = VAR_2.period;
  VAR_1.polarity = VAR_2.polarity;

  return FUNC_1(VAR_0, &VAR_1);
 }





 if (VAR_2.period != VAR_1.period) {
  u64 VAR_3 = (u64)VAR_1.duty_cycle * VAR_2.period;

  FUNC_0(VAR_3, VAR_1.period);
  VAR_1.duty_cycle = VAR_3;
  VAR_1.period = VAR_2.period;
 }




 if (VAR_2.polarity != VAR_1.polarity) {
  VAR_1.polarity = VAR_2.polarity;
  VAR_1.duty_cycle = VAR_1.period - VAR_1.duty_cycle;
 }

 return FUNC_1(VAR_0, &VAR_1);
}
