
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct atmel_pwm_chip {TYPE_2__* data; } ;
struct TYPE_3__ {int period; int duty; } ;
struct TYPE_4__ {TYPE_1__ regs; } ;


 int FUNC_0 (struct atmel_pwm_chip*,int ,int ,unsigned long) ;
 struct atmel_pwm_chip* FUNC_1 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_2(struct pwm_chip *VAR_0,
        struct pwm_device *VAR_1,
        unsigned long VAR_2, unsigned long VAR_3)
{
 struct atmel_pwm_chip *VAR_4 = FUNC_1(VAR_0);

 FUNC_0(VAR_4, VAR_1->hwpwm,
       VAR_4->data->regs.duty, VAR_3);
 FUNC_0(VAR_4, VAR_1->hwpwm,
       VAR_4->data->regs.period, VAR_2);
}
