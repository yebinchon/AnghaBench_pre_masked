
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pwm_chip {int dummy; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
typedef enum pwm_polarity { ____Placeholder_pwm_polarity } pwm_polarity ;


 int VAR_0 ;
 int FUNC_0 (struct samsung_pwm_chip*,int ,int) ;
 struct samsung_pwm_chip* FUNC_1 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_2(struct pwm_chip *VAR_1,
        struct pwm_device *VAR_2,
        enum pwm_polarity VAR_3)
{
 struct samsung_pwm_chip *VAR_4 = FUNC_1(VAR_1);
 bool VAR_5 = (VAR_3 == VAR_0);


 FUNC_0(VAR_4, VAR_2->hwpwm, VAR_5);

 return 0;
}
