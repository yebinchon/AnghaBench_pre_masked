
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_state {int enabled; int duty_cycle; int period; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dev; } ;
struct cros_ec_pwm_device {int ec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct cros_ec_pwm_device* FUNC_2 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_3(struct pwm_chip *VAR_1, struct pwm_device *VAR_2,
      struct pwm_state *VAR_3)
{
 struct cros_ec_pwm_device *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->ec, VAR_2->hwpwm);
 if (VAR_5 < 0) {
  FUNC_1(VAR_1->dev, "error getting initial duty: %d\n", VAR_5);
  return;
 }

 VAR_3->enabled = (VAR_5 > 0);
 VAR_3->period = VAR_0;


 VAR_3->duty_cycle = VAR_5;
}
