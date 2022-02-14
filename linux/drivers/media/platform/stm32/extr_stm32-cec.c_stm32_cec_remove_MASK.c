
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_cec {int adap; int clk_hdmi_cec; int clk_cec; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct stm32_cec* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct stm32_cec *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->clk_cec);
 FUNC_1(VAR_1->clk_hdmi_cec);

 FUNC_0(VAR_1->adap);

 return 0;
}
