
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct berlin_pwm_chip {int dummy; } ;
typedef enum pwm_polarity { ____Placeholder_pwm_polarity } pwm_polarity ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct berlin_pwm_chip*,int ,int ) ;
 int FUNC_1 (struct berlin_pwm_chip*,int ,int ,int ) ;
 struct berlin_pwm_chip* FUNC_2 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_3(struct pwm_chip *VAR_3,
       struct pwm_device *VAR_4,
       enum pwm_polarity VAR_5)
{
 struct berlin_pwm_chip *VAR_6 = FUNC_2(VAR_3);
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_4->hwpwm, VAR_0);

 if (VAR_5 == VAR_2)
  VAR_7 &= ~VAR_1;
 else
  VAR_7 |= VAR_1;

 FUNC_1(VAR_6, VAR_4->hwpwm, VAR_7, VAR_0);

 return 0;
}
