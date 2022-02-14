
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct lpc32xx_pwm_chip {scalar_t__ base; int clk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct lpc32xx_pwm_chip* FUNC_2 (struct pwm_chip*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct pwm_chip *VAR_1, struct pwm_device *VAR_2)
{
 struct lpc32xx_pwm_chip *VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->clk);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_1(VAR_3->base + (VAR_2->hwpwm << 2));
 VAR_4 |= VAR_0;
 FUNC_3(VAR_4, VAR_3->base + (VAR_2->hwpwm << 2));

 return 0;
}
