
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dim2_hdm {scalar_t__ clk_speed; int clk; int clk_pll; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct dim2_hdm* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_1)
{
 struct dim2_hdm *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->clk_speed >= VAR_0)
  FUNC_0(VAR_2->clk_pll);

 FUNC_0(VAR_2->clk);
}
