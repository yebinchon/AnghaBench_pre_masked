
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk_priv_data {int clk_enabled; scalar_t__ phy_iface; void* clk_phy; scalar_t__ integrated_phy; void* clk_mac; scalar_t__ clock_input; void* clk_mac_speed; void* clk_mac_refout; void* clk_mac_ref; void* pclk_mac; void* aclk_mac; void* mac_clk_tx; void* mac_clk_rx; TYPE_1__* pdev; } ;
struct plat_stmmacenet_data {scalar_t__ phy_node; struct rk_priv_data* bsp_priv; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (struct device*,char*) ;
 void* FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(struct plat_stmmacenet_data *VAR_2)
{
 struct rk_priv_data *VAR_3 = VAR_2->bsp_priv;
 struct device *VAR_4 = &VAR_3->pdev->dev;
 int VAR_5;

 VAR_3->clk_enabled = 0;

 VAR_3->mac_clk_rx = FUNC_5(VAR_4, "mac_clk_rx");
 if (FUNC_0(VAR_3->mac_clk_rx))
  FUNC_3(VAR_4, "cannot get clock %s\n",
   "mac_clk_rx");

 VAR_3->mac_clk_tx = FUNC_5(VAR_4, "mac_clk_tx");
 if (FUNC_0(VAR_3->mac_clk_tx))
  FUNC_3(VAR_4, "cannot get clock %s\n",
   "mac_clk_tx");

 VAR_3->aclk_mac = FUNC_5(VAR_4, "aclk_mac");
 if (FUNC_0(VAR_3->aclk_mac))
  FUNC_3(VAR_4, "cannot get clock %s\n",
   "aclk_mac");

 VAR_3->pclk_mac = FUNC_5(VAR_4, "pclk_mac");
 if (FUNC_0(VAR_3->pclk_mac))
  FUNC_3(VAR_4, "cannot get clock %s\n",
   "pclk_mac");

 VAR_3->clk_mac = FUNC_5(VAR_4, "stmmaceth");
 if (FUNC_0(VAR_3->clk_mac))
  FUNC_3(VAR_4, "cannot get clock %s\n",
   "stmmaceth");

 if (VAR_3->phy_iface == VAR_1) {
  VAR_3->clk_mac_ref = FUNC_5(VAR_4, "clk_mac_ref");
  if (FUNC_0(VAR_3->clk_mac_ref))
   FUNC_3(VAR_4, "cannot get clock %s\n",
    "clk_mac_ref");

  if (!VAR_3->clock_input) {
   VAR_3->clk_mac_refout =
    FUNC_5(VAR_4, "clk_mac_refout");
   if (FUNC_0(VAR_3->clk_mac_refout))
    FUNC_3(VAR_4, "cannot get clock %s\n",
     "clk_mac_refout");
  }
 }

 VAR_3->clk_mac_speed = FUNC_5(VAR_4, "clk_mac_speed");
 if (FUNC_0(VAR_3->clk_mac_speed))
  FUNC_3(VAR_4, "cannot get clock %s\n", "clk_mac_speed");

 if (VAR_3->clock_input) {
  FUNC_4(VAR_4, "clock input from PHY\n");
 } else {
  if (VAR_3->phy_iface == VAR_1)
   FUNC_2(VAR_3->clk_mac, 50000000);
 }

 if (VAR_2->phy_node && VAR_3->integrated_phy) {
  VAR_3->clk_phy = FUNC_6(VAR_2->phy_node, 0);
  if (FUNC_0(VAR_3->clk_phy)) {
   VAR_5 = FUNC_1(VAR_3->clk_phy);
   FUNC_3(VAR_4, "Cannot get PHY clock: %d\n", VAR_5);
   return -VAR_0;
  }
  FUNC_2(VAR_3->clk_phy, 50000000);
 }

 return 0;
}
