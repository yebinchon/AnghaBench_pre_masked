
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pcie_phy {int pcie_mutex; int init_cnt; int clk_pciephy_ref; int phy_rst; } ;
struct phy_pcie_instance {int dummy; } ;
struct phy {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct phy_pcie_instance* FUNC_5 (struct phy*) ;
 int FUNC_6 (int ) ;
 struct rockchip_pcie_phy* FUNC_7 (struct phy_pcie_instance*) ;

__attribute__((used)) static int FUNC_8(struct phy *VAR_0)
{
 struct phy_pcie_instance *VAR_1 = FUNC_5(VAR_0);
 struct rockchip_pcie_phy *VAR_2 = FUNC_7(VAR_1);
 int VAR_3 = 0;

 FUNC_3(&VAR_2->pcie_mutex);

 if (VAR_2->init_cnt++)
  goto err_out;

 VAR_3 = FUNC_1(VAR_2->clk_pciephy_ref);
 if (VAR_3) {
  FUNC_2(&VAR_0->dev, "Fail to enable pcie ref clock.\n");
  goto err_refclk;
 }

 VAR_3 = FUNC_6(VAR_2->phy_rst);
 if (VAR_3) {
  FUNC_2(&VAR_0->dev, "assert phy_rst err %d\n", VAR_3);
  goto err_reset;
 }

err_out:
 FUNC_4(&VAR_2->pcie_mutex);
 return 0;

err_reset:

 FUNC_0(VAR_2->clk_pciephy_ref);
err_refclk:
 VAR_2->init_cnt--;
 FUNC_4(&VAR_2->pcie_mutex);
 return VAR_3;
}
