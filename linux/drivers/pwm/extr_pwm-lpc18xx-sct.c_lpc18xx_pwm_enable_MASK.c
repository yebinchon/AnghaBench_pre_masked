
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct lpc18xx_pwm_data {unsigned int duty_event; } ;
struct lpc18xx_pwm_chip {unsigned int period_event; } ;
typedef enum lpc18xx_pwm_res_action { ____Placeholder_lpc18xx_pwm_res_action } lpc18xx_pwm_res_action ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (struct lpc18xx_pwm_chip*,struct pwm_device*,int) ;
 int FUNC_7 (struct lpc18xx_pwm_chip*,int ,int) ;
 struct lpc18xx_pwm_data* FUNC_8 (struct pwm_device*) ;
 scalar_t__ FUNC_9 (struct pwm_device*) ;
 struct lpc18xx_pwm_chip* FUNC_10 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_11(struct pwm_chip *VAR_5, struct pwm_device *VAR_6)
{
 struct lpc18xx_pwm_chip *VAR_7 = FUNC_10(VAR_5);
 struct lpc18xx_pwm_data *VAR_8 = FUNC_8(VAR_6);
 enum lpc18xx_pwm_res_action VAR_9;
 unsigned int VAR_10, VAR_11;

 FUNC_7(VAR_7,
      FUNC_1(VAR_8->duty_event),
      FUNC_2(VAR_8->duty_event) |
      VAR_0);

 FUNC_7(VAR_7,
      FUNC_3(VAR_8->duty_event),
      VAR_1);

 if (FUNC_9(VAR_6) == VAR_4) {
  VAR_10 = VAR_7->period_event;
  VAR_11 = VAR_8->duty_event;
  VAR_9 = VAR_3;
 } else {
  VAR_10 = VAR_8->duty_event;
  VAR_11 = VAR_7->period_event;
  VAR_9 = VAR_2;
 }

 FUNC_7(VAR_7, FUNC_5(VAR_6->hwpwm),
      FUNC_0(VAR_10));
 FUNC_7(VAR_7, FUNC_4(VAR_6->hwpwm),
      FUNC_0(VAR_11));
 FUNC_6(VAR_7, VAR_6, VAR_9);

 return 0;
}
