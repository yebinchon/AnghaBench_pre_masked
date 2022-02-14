
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct atmel_tcb_pwm_device {int polarity; } ;
typedef enum pwm_polarity { ____Placeholder_pwm_polarity } pwm_polarity ;


 struct atmel_tcb_pwm_device* FUNC_0 (struct pwm_device*) ;

__attribute__((used)) static int FUNC_1(struct pwm_chip *VAR_0,
          struct pwm_device *VAR_1,
          enum pwm_polarity VAR_2)
{
 struct atmel_tcb_pwm_device *VAR_3 = FUNC_0(VAR_1);

 VAR_3->polarity = VAR_2;

 return 0;
}
