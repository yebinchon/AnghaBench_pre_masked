
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rockchip_pcie_phy {int pcie_mutex; int pwr_cnt; int phy_rst; TYPE_1__* phy_data; int reg_base; } ;
struct phy_pcie_instance {scalar_t__ index; } ;
struct phy {int dev; } ;
struct TYPE_2__ {int pcie_status; int pcie_conf; int pcie_laneoff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,...) ;
 unsigned long VAR_14 ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct phy_pcie_instance* FUNC_7 (struct phy*) ;
 int FUNC_8 (struct rockchip_pcie_phy*,int ,int ) ;
 int FUNC_9 (int ,int ,int*) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (unsigned long,unsigned long) ;
 struct rockchip_pcie_phy* FUNC_14 (struct phy_pcie_instance*) ;

__attribute__((used)) static int FUNC_15(struct phy *VAR_15)
{
 struct phy_pcie_instance *VAR_16 = FUNC_7(VAR_15);
 struct rockchip_pcie_phy *VAR_17 = FUNC_14(VAR_16);
 int VAR_18 = 0;
 u32 VAR_19;
 unsigned long VAR_20;

 FUNC_5(&VAR_17->pcie_mutex);

 if (VAR_17->pwr_cnt++)
  goto err_out;

 VAR_18 = FUNC_12(VAR_17->phy_rst);
 if (VAR_18) {
  FUNC_2(&VAR_15->dev, "deassert phy_rst err %d\n", VAR_18);
  goto err_pwr_cnt;
 }

 FUNC_10(VAR_17->reg_base, VAR_17->phy_data->pcie_conf,
       FUNC_0(VAR_7,
       VAR_2,
       VAR_3));

 FUNC_10(VAR_17->reg_base,
       VAR_17->phy_data->pcie_laneoff,
       FUNC_0(!VAR_11,
       VAR_10,
       VAR_9 + VAR_16->index));






 VAR_20 = VAR_14 + FUNC_3(1000);

 VAR_18 = -VAR_0;
 while (FUNC_13(VAR_14, VAR_20)) {
  FUNC_9(VAR_17->reg_base,
       VAR_17->phy_data->pcie_status,
       &VAR_19);
  if (VAR_19 & VAR_12) {
   FUNC_1(&VAR_15->dev, "pll locked!\n");
   VAR_18 = 0;
   break;
  }
  FUNC_4(20);
 }

 if (VAR_18) {
  FUNC_2(&VAR_15->dev, "pll lock timeout!\n");
  goto err_pll_lock;
 }

 FUNC_8(VAR_17, VAR_5, VAR_8);
 FUNC_8(VAR_17, VAR_4, VAR_6);

 VAR_18 = -VAR_1;
 while (FUNC_13(VAR_14, VAR_20)) {
  FUNC_9(VAR_17->reg_base,
       VAR_17->phy_data->pcie_status,
       &VAR_19);
  if (!(VAR_19 & VAR_13)) {
   FUNC_1(&VAR_15->dev, "pll output enable done!\n");
   VAR_18 = 0;
   break;
  }
  FUNC_4(20);
 }

 if (VAR_18) {
  FUNC_2(&VAR_15->dev, "pll output enable timeout!\n");
  goto err_pll_lock;
 }

 FUNC_10(VAR_17->reg_base, VAR_17->phy_data->pcie_conf,
       FUNC_0(VAR_7,
       VAR_2,
       VAR_3));
 VAR_18 = -VAR_0;
 while (FUNC_13(VAR_14, VAR_20)) {
  FUNC_9(VAR_17->reg_base,
       VAR_17->phy_data->pcie_status,
       &VAR_19);
  if (VAR_19 & VAR_12) {
   FUNC_1(&VAR_15->dev, "pll relocked!\n");
   VAR_18 = 0;
   break;
  }
  FUNC_4(20);
 }

 if (VAR_18) {
  FUNC_2(&VAR_15->dev, "pll relock timeout!\n");
  goto err_pll_lock;
 }

err_out:
 FUNC_6(&VAR_17->pcie_mutex);
 return 0;

err_pll_lock:
 FUNC_11(VAR_17->phy_rst);
err_pwr_cnt:
 VAR_17->pwr_cnt--;
 FUNC_6(&VAR_17->pcie_mutex);
 return VAR_18;
}
