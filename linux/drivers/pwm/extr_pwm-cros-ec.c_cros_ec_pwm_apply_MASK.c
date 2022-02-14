
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_state {scalar_t__ period; int duty_cycle; scalar_t__ enabled; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct cros_ec_pwm_device {int ec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct cros_ec_pwm_device* FUNC_1 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_2(struct pwm_chip *VAR_2, struct pwm_device *VAR_3,
        const struct pwm_state *VAR_4)
{
 struct cros_ec_pwm_device *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;


 if (VAR_4->period != VAR_0)
  return -VAR_1;





 VAR_6 = VAR_4->enabled ? VAR_4->duty_cycle : 0;

 return FUNC_0(VAR_5->ec, VAR_3->hwpwm, VAR_6);
}
