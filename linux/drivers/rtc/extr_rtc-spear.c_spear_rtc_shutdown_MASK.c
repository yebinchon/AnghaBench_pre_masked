
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear_rtc_config {int clk; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct spear_rtc_config* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct spear_rtc_config*) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_0)
{
 struct spear_rtc_config *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1);
 FUNC_0(VAR_1->clk);
}
