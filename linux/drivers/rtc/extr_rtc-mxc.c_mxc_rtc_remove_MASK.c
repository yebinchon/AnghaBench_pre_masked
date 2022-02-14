
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_plat_data {int clk_ipg; int clk_ref; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct rtc_plat_data* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct rtc_plat_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->clk_ref);
 FUNC_0(VAR_1->clk_ipg);

 return 0;
}
