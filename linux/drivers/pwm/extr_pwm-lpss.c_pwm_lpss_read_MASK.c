
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_lpss_chip {scalar_t__ regs; } ;
struct pwm_device {int hwpwm; int chip; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct pwm_lpss_chip* FUNC_1 (int ) ;

__attribute__((used)) static inline u32 FUNC_2(const struct pwm_device *VAR_2)
{
 struct pwm_lpss_chip *VAR_3 = FUNC_1(VAR_2->chip);

 return FUNC_0(VAR_3->regs + VAR_2->hwpwm * VAR_1 + VAR_0);
}
