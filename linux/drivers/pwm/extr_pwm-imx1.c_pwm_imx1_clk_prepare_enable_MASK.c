
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_imx1_chip {int clk_ipg; int clk_per; } ;
struct pwm_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct pwm_imx1_chip* FUNC_2 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_3(struct pwm_chip *VAR_0)
{
 struct pwm_imx1_chip *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->clk_ipg);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1->clk_per);
 if (VAR_2) {
  FUNC_0(VAR_1->clk_ipg);
  return VAR_2;
 }

 return 0;
}
