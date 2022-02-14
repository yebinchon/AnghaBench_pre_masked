
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pcie_phy {int pcie_mutex; int clk_pciephy_ref; scalar_t__ init_cnt; } ;
struct phy_pcie_instance {int dummy; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct phy_pcie_instance* FUNC_3 (struct phy*) ;
 struct rockchip_pcie_phy* FUNC_4 (struct phy_pcie_instance*) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_0)
{
 struct phy_pcie_instance *VAR_1 = FUNC_3(VAR_0);
 struct rockchip_pcie_phy *VAR_2 = FUNC_4(VAR_1);

 FUNC_1(&VAR_2->pcie_mutex);

 if (--VAR_2->init_cnt)
  goto err_init_cnt;

 FUNC_0(VAR_2->clk_pciephy_ref);

err_init_cnt:
 FUNC_2(&VAR_2->pcie_mutex);
 return 0;
}
