
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_pwm {int dummy; } ;
struct pwm_state {scalar_t__ enabled; int period; int duty_cycle; int polarity; } ;
struct TYPE_2__ {int enabled; int polarity; } ;
struct pwm_device {int hwpwm; TYPE_1__ state; } ;
struct pwm_chip {int dummy; } ;


 int FUNC_0 (struct stm32_pwm*,int ,int ,int ) ;
 int FUNC_1 (struct stm32_pwm*,int ) ;
 int FUNC_2 (struct stm32_pwm*,int ) ;
 int FUNC_3 (struct stm32_pwm*,int ,int ) ;
 struct stm32_pwm* FUNC_4 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_5(struct pwm_chip *VAR_0, struct pwm_device *VAR_1,
      const struct pwm_state *VAR_2)
{
 bool VAR_3;
 struct stm32_pwm *VAR_4 = FUNC_4(VAR_0);
 int VAR_5;

 VAR_3 = VAR_1->state.enabled;

 if (VAR_3 && !VAR_2->enabled) {
  FUNC_1(VAR_4, VAR_1->hwpwm);
  return 0;
 }

 if (VAR_2->polarity != VAR_1->state.polarity)
  FUNC_3(VAR_4, VAR_1->hwpwm, VAR_2->polarity);

 VAR_5 = FUNC_0(VAR_4, VAR_1->hwpwm,
          VAR_2->duty_cycle, VAR_2->period);
 if (VAR_5)
  return VAR_5;

 if (!VAR_3 && VAR_2->enabled)
  VAR_5 = FUNC_2(VAR_4, VAR_1->hwpwm);

 return VAR_5;
}
