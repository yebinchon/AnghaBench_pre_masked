
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_imx27_chip {int clk_ipg; int clk_per; } ;
struct pwm_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 struct pwm_imx27_chip* FUNC_1 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_2(struct pwm_chip *VAR_0)
{
 struct pwm_imx27_chip *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->clk_per);
 FUNC_0(VAR_1->clk_ipg);
}
