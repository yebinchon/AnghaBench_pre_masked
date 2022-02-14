
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct bcm2835_pwm {scalar_t__ base; } ;
typedef enum pwm_polarity { ____Placeholder_pwm_polarity } pwm_polarity ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 struct bcm2835_pwm* FUNC_2 (struct pwm_chip*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct pwm_chip *VAR_3, struct pwm_device *VAR_4,
    enum pwm_polarity VAR_5)
{
 struct bcm2835_pwm *VAR_6 = FUNC_2(VAR_3);
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_6->base + VAR_0);

 if (VAR_5 == VAR_2)
  VAR_7 &= ~(VAR_1 << FUNC_0(VAR_4->hwpwm));
 else
  VAR_7 |= VAR_1 << FUNC_0(VAR_4->hwpwm);

 FUNC_3(VAR_7, VAR_6->base + VAR_0);

 return 0;
}
