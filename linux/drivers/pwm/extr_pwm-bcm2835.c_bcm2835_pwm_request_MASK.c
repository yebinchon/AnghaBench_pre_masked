
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct bcm2835_pwm {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 struct bcm2835_pwm* FUNC_2 (struct pwm_chip*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct pwm_chip *VAR_3, struct pwm_device *VAR_4)
{
 struct bcm2835_pwm *VAR_5 = FUNC_2(VAR_3);
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5->base + VAR_0);
 VAR_6 &= ~(VAR_1 << FUNC_0(VAR_4->hwpwm));
 VAR_6 |= (VAR_2 << FUNC_0(VAR_4->hwpwm));
 FUNC_3(VAR_6, VAR_5->base + VAR_0);

 return 0;
}
