
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dummy; } ;
struct lpc18xx_pwm_chip {int chip; int pwm_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lpc18xx_pwm_chip*,int ) ;
 int FUNC_2 (struct lpc18xx_pwm_chip*,int ,int) ;
 struct lpc18xx_pwm_chip* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct lpc18xx_pwm_chip *VAR_3 = FUNC_3(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 FUNC_2(VAR_3, VAR_0,
      VAR_4 | VAR_1);

 FUNC_0(VAR_3->pwm_clk);

 return FUNC_4(&VAR_3->chip);
}
