
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct gb_pwm_chip {int dummy; } ;
typedef enum pwm_polarity { ____Placeholder_pwm_polarity } pwm_polarity ;


 int FUNC_0 (struct gb_pwm_chip*,int ,int) ;
 struct gb_pwm_chip* FUNC_1 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_2(struct pwm_chip *VAR_0, struct pwm_device *VAR_1,
          enum pwm_polarity VAR_2)
{
 struct gb_pwm_chip *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_1->hwpwm, VAR_2);
}
