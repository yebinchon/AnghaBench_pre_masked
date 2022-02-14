
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dev; } ;
struct atmel_tcb_pwm_device {scalar_t__ duty; scalar_t__ period; int div; } ;
struct atmel_tcb_pwm_chip {struct atmel_tcb_pwm_device** pwms; struct atmel_tc* tc; } ;
struct atmel_tc {TYPE_1__* tcb_config; int slow_clk; int * clk; } ;
struct TYPE_2__ {unsigned long long counter_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (struct pwm_chip*,struct pwm_device*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (int,unsigned long long) ;
 struct atmel_tcb_pwm_device* FUNC_4 (struct pwm_device*) ;
 scalar_t__ FUNC_5 (struct pwm_device*) ;
 struct atmel_tcb_pwm_chip* FUNC_6 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_7(struct pwm_chip *VAR_4, struct pwm_device *VAR_5,
    int VAR_6, int VAR_7)
{
 struct atmel_tcb_pwm_chip *VAR_8 = FUNC_6(VAR_4);
 struct atmel_tcb_pwm_device *VAR_9 = FUNC_4(VAR_5);
 unsigned VAR_10 = VAR_5->hwpwm / 2;
 unsigned VAR_11 = VAR_5->hwpwm % 2;
 struct atmel_tcb_pwm_device *VAR_12 = ((void*)0);
 struct atmel_tc *VAR_13 = VAR_8->tc;
 int VAR_14;
 int VAR_15 = 0;
 unsigned VAR_16;
 unsigned VAR_17;
 unsigned VAR_18 = FUNC_1(VAR_13->clk[VAR_10]);
 unsigned long long VAR_19;
 unsigned long long VAR_20;





 for (VAR_14 = 0; VAR_14 < 5; ++VAR_14) {
  if (VAR_3[VAR_14] == 0) {
   VAR_15 = VAR_14;
   continue;
  }
  VAR_19 = FUNC_3((u64)VAR_2 * VAR_3[VAR_14], VAR_18);
  VAR_20 = VAR_19 << VAR_13->tcb_config->counter_width;
  if (VAR_20 >= VAR_7)
   break;
 }





 if (VAR_14 == 5) {
  VAR_14 = VAR_15;
  VAR_18 = FUNC_1(VAR_13->slow_clk);
  VAR_19 = FUNC_3(VAR_2, VAR_18);
  VAR_20 = VAR_19 << VAR_13->tcb_config->counter_width;


  if (VAR_20 < VAR_7)
   return -VAR_1;
 }

 VAR_17 = FUNC_3(VAR_6, VAR_19);
 VAR_16 = FUNC_3(VAR_7, VAR_19);

 if (VAR_11 == 0)
  VAR_12 = VAR_8->pwms[VAR_5->hwpwm + 1];
 else
  VAR_12 = VAR_8->pwms[VAR_5->hwpwm - 1];
 if ((VAR_12 && VAR_12->duty > 0 &&
   VAR_12->duty != VAR_12->period) &&
  (VAR_12->div != VAR_14 || VAR_12->period != VAR_16)) {
  FUNC_2(VAR_4->dev,
   "failed to configure period_ns: PWM group already configured with a different value\n");
  return -VAR_0;
 }

 VAR_9->period = VAR_16;
 VAR_9->div = VAR_14;
 VAR_9->duty = VAR_17;


 if (FUNC_5(VAR_5))
  FUNC_0(VAR_4, VAR_5);

 return 0;
}
