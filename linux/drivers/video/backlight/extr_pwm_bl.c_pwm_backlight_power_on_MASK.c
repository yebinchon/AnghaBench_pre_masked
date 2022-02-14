
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_state {int enabled; } ;
struct pwm_bl_data {int enabled; scalar_t__ enable_gpio; scalar_t__ post_pwm_on_delay; int pwm; int dev; int power_supply; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,struct pwm_state*) ;
 int FUNC_4 (int ,struct pwm_state*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct pwm_bl_data *VAR_0)
{
 struct pwm_state VAR_1;
 int VAR_2;

 FUNC_4(VAR_0->pwm, &VAR_1);
 if (VAR_0->enabled)
  return;

 VAR_2 = FUNC_5(VAR_0->power_supply);
 if (VAR_2 < 0)
  FUNC_0(VAR_0->dev, "failed to enable power supply\n");

 VAR_1.enabled = 1;
 FUNC_3(VAR_0->pwm, &VAR_1);

 if (VAR_0->post_pwm_on_delay)
  FUNC_2(VAR_0->post_pwm_on_delay);

 if (VAR_0->enable_gpio)
  FUNC_1(VAR_0->enable_gpio, 1);

 VAR_0->enabled = 1;
}
