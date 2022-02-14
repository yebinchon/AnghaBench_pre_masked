
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u32 ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct atmel_pwm_chip {TYPE_2__* data; } ;
struct TYPE_3__ {scalar_t__ duty_upd; scalar_t__ period_upd; } ;
struct TYPE_4__ {TYPE_1__ regs; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (struct atmel_pwm_chip*,int ,scalar_t__) ;
 int FUNC_1 (struct atmel_pwm_chip*,int ,scalar_t__,unsigned long) ;
 struct atmel_pwm_chip* FUNC_2 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_3(struct pwm_chip *VAR_2, struct pwm_device *VAR_3,
      unsigned long VAR_4)
{
 struct atmel_pwm_chip *VAR_5 = FUNC_2(VAR_2);
 u32 VAR_6;

 if (VAR_5->data->regs.duty_upd ==
     VAR_5->data->regs.period_upd) {
  VAR_6 = FUNC_0(VAR_5, VAR_3->hwpwm, VAR_0);
  VAR_6 &= ~VAR_1;
  FUNC_1(VAR_5, VAR_3->hwpwm, VAR_0, VAR_6);
 }

 FUNC_1(VAR_5, VAR_3->hwpwm,
       VAR_5->data->regs.duty_upd, VAR_4);
}
