
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dev; } ;
struct gb_pwm_chip {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct gb_pwm_chip*,int ) ;
 struct gb_pwm_chip* FUNC_2 (struct pwm_chip*) ;
 scalar_t__ FUNC_3 (struct pwm_device*) ;

__attribute__((used)) static void FUNC_4(struct pwm_chip *VAR_0, struct pwm_device *VAR_1)
{
 struct gb_pwm_chip *VAR_2 = FUNC_2(VAR_0);

 if (FUNC_3(VAR_1))
  FUNC_0(VAR_0->dev, "freeing PWM device without disabling\n");

 FUNC_1(VAR_2, VAR_1->hwpwm);
}
