
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_pwm_chip {int wclk; } ;
struct pwm_state {scalar_t__ polarity; scalar_t__ period; scalar_t__ duty_cycle; scalar_t__ enabled; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pwm_device*,struct pwm_state*) ;
 struct zx_pwm_chip* FUNC_3 (struct pwm_chip*) ;
 int FUNC_4 (struct pwm_chip*,struct pwm_device*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct zx_pwm_chip*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct pwm_chip *VAR_4, struct pwm_device *VAR_5,
   const struct pwm_state *VAR_6)
{
 struct zx_pwm_chip *VAR_7 = FUNC_3(VAR_4);
 struct pwm_state VAR_8;
 int VAR_9;

 FUNC_2(VAR_5, &VAR_8);

 if (VAR_6->polarity != VAR_8.polarity)
  FUNC_5(VAR_7, VAR_5->hwpwm, VAR_2, VAR_3,
    (VAR_6->polarity == VAR_0) ?
     0 : VAR_3);

 if (VAR_6->period != VAR_8.period ||
     VAR_6->duty_cycle != VAR_8.duty_cycle) {
  VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_6->duty_cycle,
        VAR_6->period);
  if (VAR_9)
   return VAR_9;
 }

 if (VAR_6->enabled != VAR_8.enabled) {
  if (VAR_6->enabled) {
   VAR_9 = FUNC_1(VAR_7->wclk);
   if (VAR_9)
    return VAR_9;

   FUNC_5(VAR_7, VAR_5->hwpwm, VAR_2,
     VAR_1, VAR_1);
  } else {
   FUNC_5(VAR_7, VAR_5->hwpwm, VAR_2,
     VAR_1, 0);
   FUNC_0(VAR_7->wclk);
  }
 }

 return 0;
}
