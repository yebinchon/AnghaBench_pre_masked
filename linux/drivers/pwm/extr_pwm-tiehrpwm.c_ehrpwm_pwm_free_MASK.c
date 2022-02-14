
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {size_t hwpwm; } ;
struct pwm_chip {int dev; } ;
struct ehrpwm_pwm_chip {scalar_t__* period_cycles; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct pwm_device*) ;
 struct ehrpwm_pwm_chip* FUNC_3 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_4(struct pwm_chip *VAR_0, struct pwm_device *VAR_1)
{
 struct ehrpwm_pwm_chip *VAR_2 = FUNC_3(VAR_0);

 if (FUNC_2(VAR_1)) {
  FUNC_0(VAR_0->dev, "Removing PWM device without disabling\n");
  FUNC_1(VAR_0->dev);
 }


 VAR_2->period_cycles[VAR_1->hwpwm] = 0;
}
