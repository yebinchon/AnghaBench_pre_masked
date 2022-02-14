
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct lpc18xx_pwm_data {int duty_event; } ;
struct lpc18xx_pwm_chip {int event_map; } ;


 int FUNC_0 (int ,int *) ;
 struct lpc18xx_pwm_data* FUNC_1 (struct pwm_device*) ;
 struct lpc18xx_pwm_chip* FUNC_2 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_3(struct pwm_chip *VAR_0, struct pwm_device *VAR_1)
{
 struct lpc18xx_pwm_chip *VAR_2 = FUNC_2(VAR_0);
 struct lpc18xx_pwm_data *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_3->duty_event, &VAR_2->event_map);
}
