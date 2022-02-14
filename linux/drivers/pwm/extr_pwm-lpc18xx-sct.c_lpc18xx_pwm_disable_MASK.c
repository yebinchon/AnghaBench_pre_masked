
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct lpc18xx_pwm_data {int duty_event; } ;
struct lpc18xx_pwm_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct lpc18xx_pwm_chip*,int ,int ) ;
 struct lpc18xx_pwm_data* FUNC_4 (struct pwm_device*) ;
 struct lpc18xx_pwm_chip* FUNC_5 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_6(struct pwm_chip *VAR_0, struct pwm_device *VAR_1)
{
 struct lpc18xx_pwm_chip *VAR_2 = FUNC_5(VAR_0);
 struct lpc18xx_pwm_data *VAR_3 = FUNC_4(VAR_1);

 FUNC_3(VAR_2,
      FUNC_0(VAR_3->duty_event), 0);
 FUNC_3(VAR_2, FUNC_2(VAR_1->hwpwm), 0);
 FUNC_3(VAR_2, FUNC_1(VAR_1->hwpwm), 0);
}
