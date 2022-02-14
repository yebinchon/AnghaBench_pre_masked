
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct hibvt_pwm_chip {int base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int) ;
 struct hibvt_pwm_chip* FUNC_2 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_3(struct pwm_chip *VAR_1, struct pwm_device *VAR_2)
{
 struct hibvt_pwm_chip *VAR_3 = FUNC_2(VAR_1);

 FUNC_1(VAR_3->base, FUNC_0(VAR_2->hwpwm),
   VAR_0, 0x1);
}
