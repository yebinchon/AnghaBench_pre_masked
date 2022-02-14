
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_typec_phy {void* tcphy_rst; void* pipe_rst; void* uphy_rst; void* clk_ref; void* clk_core; void* grf_regs; } ;
struct device {int of_node; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct rockchip_typec_phy *VAR_0,
     struct device *VAR_1)
{
 VAR_0->grf_regs = FUNC_5(VAR_1->of_node,
         "rockchip,grf");
 if (FUNC_0(VAR_0->grf_regs)) {
  FUNC_2(VAR_1, "could not find grf dt node\n");
  return FUNC_1(VAR_0->grf_regs);
 }

 VAR_0->clk_core = FUNC_3(VAR_1, "tcpdcore");
 if (FUNC_0(VAR_0->clk_core)) {
  FUNC_2(VAR_1, "could not get uphy core clock\n");
  return FUNC_1(VAR_0->clk_core);
 }

 VAR_0->clk_ref = FUNC_3(VAR_1, "tcpdphy-ref");
 if (FUNC_0(VAR_0->clk_ref)) {
  FUNC_2(VAR_1, "could not get uphy ref clock\n");
  return FUNC_1(VAR_0->clk_ref);
 }

 VAR_0->uphy_rst = FUNC_4(VAR_1, "uphy");
 if (FUNC_0(VAR_0->uphy_rst)) {
  FUNC_2(VAR_1, "no uphy_rst reset control found\n");
  return FUNC_1(VAR_0->uphy_rst);
 }

 VAR_0->pipe_rst = FUNC_4(VAR_1, "uphy-pipe");
 if (FUNC_0(VAR_0->pipe_rst)) {
  FUNC_2(VAR_1, "no pipe_rst reset control found\n");
  return FUNC_1(VAR_0->pipe_rst);
 }

 VAR_0->tcphy_rst = FUNC_4(VAR_1, "uphy-tcphy");
 if (FUNC_0(VAR_0->tcphy_rst)) {
  FUNC_2(VAR_1, "no tcphy_rst reset control found\n");
  return FUNC_1(VAR_0->tcphy_rst);
 }

 return 0;
}
