
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_typec_phy {int clk_ref; int clk_core; int pipe_rst; int uphy_rst; int tcphy_rst; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct rockchip_typec_phy *VAR_0)
{
 FUNC_1(VAR_0->tcphy_rst);
 FUNC_1(VAR_0->uphy_rst);
 FUNC_1(VAR_0->pipe_rst);
 FUNC_0(VAR_0->clk_core);
 FUNC_0(VAR_0->clk_ref);
}
