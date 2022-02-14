
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_pcie_phy {int pcie_mutex; TYPE_1__* phy_data; int reg_base; scalar_t__ pwr_cnt; int phy_rst; } ;
struct phy_pcie_instance {scalar_t__ index; } ;
struct phy {int dev; } ;
struct TYPE_2__ {int pcie_laneoff; } ;


 int FUNC_0 (int,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct phy_pcie_instance* FUNC_4 (struct phy*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 struct rockchip_pcie_phy* FUNC_7 (struct phy_pcie_instance*) ;

__attribute__((used)) static int FUNC_8(struct phy *VAR_3)
{
 struct phy_pcie_instance *VAR_4 = FUNC_4(VAR_3);
 struct rockchip_pcie_phy *VAR_5 = FUNC_7(VAR_4);
 int VAR_6 = 0;

 FUNC_2(&VAR_5->pcie_mutex);

 FUNC_5(VAR_5->reg_base,
       VAR_5->phy_data->pcie_laneoff,
       FUNC_0(VAR_2,
       VAR_1,
       VAR_0 + VAR_4->index));

 if (--VAR_5->pwr_cnt)
  goto err_out;

 VAR_6 = FUNC_6(VAR_5->phy_rst);
 if (VAR_6) {
  FUNC_1(&VAR_3->dev, "assert phy_rst err %d\n", VAR_6);
  goto err_restore;
 }

err_out:
 FUNC_3(&VAR_5->pcie_mutex);
 return 0;

err_restore:
 VAR_5->pwr_cnt++;
 FUNC_5(VAR_5->reg_base,
       VAR_5->phy_data->pcie_laneoff,
       FUNC_0(!VAR_2,
       VAR_1,
       VAR_0 + VAR_4->index));
 FUNC_3(&VAR_5->pcie_mutex);
 return VAR_6;
}
