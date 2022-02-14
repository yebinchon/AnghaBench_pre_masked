
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pwm_state {scalar_t__ polarity; scalar_t__ period; scalar_t__ duty_cycle; scalar_t__ enabled; } ;
struct TYPE_4__ {scalar_t__ polarity; scalar_t__ period; scalar_t__ duty_cycle; scalar_t__ enabled; } ;
struct pwm_device {TYPE_2__ state; } ;
struct pwm_chip {int dummy; } ;
struct hibvt_pwm_chip {TYPE_1__* soc; } ;
struct TYPE_3__ {scalar_t__ quirk_force_enable; } ;


 int FUNC_0 (struct pwm_chip*,struct pwm_device*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct pwm_chip*,struct pwm_device*) ;
 int FUNC_2 (struct pwm_chip*,struct pwm_device*) ;
 int FUNC_3 (struct pwm_chip*,struct pwm_device*,scalar_t__) ;
 struct hibvt_pwm_chip* FUNC_4 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_5(struct pwm_chip *VAR_0, struct pwm_device *VAR_1,
      const struct pwm_state *VAR_2)
{
 struct hibvt_pwm_chip *VAR_3 = FUNC_4(VAR_0);

 if (VAR_2->polarity != VAR_1->state.polarity)
  FUNC_3(VAR_0, VAR_1, VAR_2->polarity);

 if (VAR_2->period != VAR_1->state.period ||
     VAR_2->duty_cycle != VAR_1->state.duty_cycle) {
  FUNC_0(VAR_0, VAR_1, VAR_2->duty_cycle, VAR_2->period);





  if (VAR_3->soc->quirk_force_enable && VAR_2->enabled)
   FUNC_2(VAR_0, VAR_1);
 }

 if (VAR_2->enabled != VAR_1->state.enabled) {
  if (VAR_2->enabled)
   FUNC_2(VAR_0, VAR_1);
  else
   FUNC_1(VAR_0, VAR_1);
 }

 return 0;
}
