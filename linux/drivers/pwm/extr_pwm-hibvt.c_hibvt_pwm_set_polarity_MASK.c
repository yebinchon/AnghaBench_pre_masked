
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct hibvt_pwm_chip {int base; } ;
typedef enum pwm_polarity { ____Placeholder_pwm_polarity } pwm_polarity ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int) ;
 struct hibvt_pwm_chip* FUNC_2 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_3(struct pwm_chip *VAR_3,
     struct pwm_device *VAR_4,
     enum pwm_polarity VAR_5)
{
 struct hibvt_pwm_chip *VAR_6 = FUNC_2(VAR_3);

 if (VAR_5 == VAR_0)
  FUNC_1(VAR_6->base, FUNC_0(VAR_4->hwpwm),
    VAR_1, (0x1 << VAR_2));
 else
  FUNC_1(VAR_6->base, FUNC_0(VAR_4->hwpwm),
    VAR_1, (0x0 << VAR_2));
}
