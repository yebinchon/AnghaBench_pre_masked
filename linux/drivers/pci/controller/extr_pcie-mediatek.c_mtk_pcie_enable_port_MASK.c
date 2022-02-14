
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_pcie_port {int sys_ck; int ahb_ck; int aux_ck; int axi_ck; int obff_ck; int pipe_ck; int phy; int slot; int reset; struct mtk_pcie* pcie; } ;
struct mtk_pcie {TYPE_1__* soc; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* startup ) (struct mtk_pcie_port*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (struct device*,char*,int ) ;
 int FUNC_4 (struct mtk_pcie_port*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct mtk_pcie_port*) ;

__attribute__((used)) static void FUNC_12(struct mtk_pcie_port *VAR_0)
{
 struct mtk_pcie *VAR_1 = VAR_0->pcie;
 struct device *VAR_2 = VAR_1->dev;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->sys_ck);
 if (VAR_3) {
  FUNC_2(VAR_2, "failed to enable sys_ck%d clock\n", VAR_0->slot);
  goto err_sys_clk;
 }

 VAR_3 = FUNC_1(VAR_0->ahb_ck);
 if (VAR_3) {
  FUNC_2(VAR_2, "failed to enable ahb_ck%d\n", VAR_0->slot);
  goto err_ahb_clk;
 }

 VAR_3 = FUNC_1(VAR_0->aux_ck);
 if (VAR_3) {
  FUNC_2(VAR_2, "failed to enable aux_ck%d\n", VAR_0->slot);
  goto err_aux_clk;
 }

 VAR_3 = FUNC_1(VAR_0->axi_ck);
 if (VAR_3) {
  FUNC_2(VAR_2, "failed to enable axi_ck%d\n", VAR_0->slot);
  goto err_axi_clk;
 }

 VAR_3 = FUNC_1(VAR_0->obff_ck);
 if (VAR_3) {
  FUNC_2(VAR_2, "failed to enable obff_ck%d\n", VAR_0->slot);
  goto err_obff_clk;
 }

 VAR_3 = FUNC_1(VAR_0->pipe_ck);
 if (VAR_3) {
  FUNC_2(VAR_2, "failed to enable pipe_ck%d\n", VAR_0->slot);
  goto err_pipe_clk;
 }

 FUNC_9(VAR_0->reset);
 FUNC_10(VAR_0->reset);

 VAR_3 = FUNC_6(VAR_0->phy);
 if (VAR_3) {
  FUNC_2(VAR_2, "failed to initialize port%d phy\n", VAR_0->slot);
  goto err_phy_init;
 }

 VAR_3 = FUNC_8(VAR_0->phy);
 if (VAR_3) {
  FUNC_2(VAR_2, "failed to power on port%d phy\n", VAR_0->slot);
  goto err_phy_on;
 }

 if (!VAR_1->soc->startup(VAR_0))
  return;

 FUNC_3(VAR_2, "Port%d link down\n", VAR_0->slot);

 FUNC_7(VAR_0->phy);
err_phy_on:
 FUNC_5(VAR_0->phy);
err_phy_init:
 FUNC_0(VAR_0->pipe_ck);
err_pipe_clk:
 FUNC_0(VAR_0->obff_ck);
err_obff_clk:
 FUNC_0(VAR_0->axi_ck);
err_axi_clk:
 FUNC_0(VAR_0->aux_ck);
err_aux_clk:
 FUNC_0(VAR_0->ahb_ck);
err_ahb_clk:
 FUNC_0(VAR_0->sys_ck);
err_sys_clk:
 FUNC_4(VAR_0);
}
