
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {size_t hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct ehrpwm_pwm_chip {int* polarity; } ;
typedef enum pwm_polarity { ____Placeholder_pwm_polarity } pwm_polarity ;


 struct ehrpwm_pwm_chip* FUNC_0 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_1(struct pwm_chip *VAR_0,
       struct pwm_device *VAR_1,
       enum pwm_polarity VAR_2)
{
 struct ehrpwm_pwm_chip *VAR_3 = FUNC_0(VAR_0);


 VAR_3->polarity[VAR_1->hwpwm] = VAR_2;

 return 0;
}
