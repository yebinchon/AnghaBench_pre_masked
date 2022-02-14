
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dev; } ;
struct atmel_tcb_pwm_device {int dummy; } ;
struct atmel_tcb_pwm_chip {int ** pwms; struct atmel_tc* tc; } ;
struct atmel_tc {int * clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct atmel_tcb_pwm_device*) ;
 struct atmel_tcb_pwm_device* FUNC_2 (struct pwm_device*) ;
 struct atmel_tcb_pwm_chip* FUNC_3 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_4(struct pwm_chip *VAR_0, struct pwm_device *VAR_1)
{
 struct atmel_tcb_pwm_chip *VAR_2 = FUNC_3(VAR_0);
 struct atmel_tcb_pwm_device *VAR_3 = FUNC_2(VAR_1);
 struct atmel_tc *VAR_4 = VAR_2->tc;

 FUNC_0(VAR_4->clk[VAR_1->hwpwm / 2]);
 VAR_2->pwms[VAR_1->hwpwm] = ((void*)0);
 FUNC_1(VAR_0->dev, VAR_3);
}
