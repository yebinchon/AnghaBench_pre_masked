
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct samsung_pwm_variant {int tclk_mask; } ;
struct samsung_pwm_chip {scalar_t__ base; struct samsung_pwm_variant variant; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct samsung_pwm_chip *VAR_2, unsigned int VAR_3)
{
 struct samsung_pwm_variant *VAR_4 = &VAR_2->variant;
 u32 VAR_5;

 VAR_5 = FUNC_2(VAR_2->base + VAR_0);
 VAR_5 >>= FUNC_1(VAR_3);
 VAR_5 &= VAR_1;

 return (FUNC_0(VAR_5) & VAR_4->tclk_mask) == 0;
}
