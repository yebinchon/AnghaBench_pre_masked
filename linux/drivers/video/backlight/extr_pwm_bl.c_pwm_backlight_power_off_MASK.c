
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_state {int enabled; scalar_t__ duty_cycle; } ;
struct pwm_bl_data {int enabled; int power_supply; int pwm; scalar_t__ pwm_off_delay; scalar_t__ enable_gpio; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,struct pwm_state*) ;
 int FUNC_3 (int ,struct pwm_state*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pwm_bl_data *VAR_0)
{
 struct pwm_state VAR_1;

 FUNC_3(VAR_0->pwm, &VAR_1);
 if (!VAR_0->enabled)
  return;

 if (VAR_0->enable_gpio)
  FUNC_0(VAR_0->enable_gpio, 0);

 if (VAR_0->pwm_off_delay)
  FUNC_1(VAR_0->pwm_off_delay);

 VAR_1.enabled = 0;
 VAR_1.duty_cycle = 0;
 FUNC_2(VAR_0->pwm, &VAR_1);

 FUNC_4(VAR_0->power_supply);
 VAR_0->enabled = 0;
}
