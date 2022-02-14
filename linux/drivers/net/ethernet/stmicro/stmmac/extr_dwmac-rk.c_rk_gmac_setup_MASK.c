
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_priv_data {int clock_input; int tx_delay; int rx_delay; struct platform_device* pdev; scalar_t__ integrated_phy; int * phy_reset; int grf; int * regulator; struct rk_gmac_ops const* ops; int phy_iface; } ;
struct rk_gmac_ops {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct plat_stmmacenet_data {scalar_t__ phy_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rk_priv_data* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,...) ;
 struct rk_priv_data* FUNC_5 (struct device*,int,int ) ;
 int * FUNC_6 (struct device*,char*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__,char*) ;
 int FUNC_9 (int ,char*,char const**) ;
 int FUNC_10 (int ,char*,int*) ;
 int * FUNC_11 (scalar_t__,int *) ;
 int FUNC_12 (char const*,char*) ;
 int FUNC_13 (int ,char*) ;

__attribute__((used)) static struct rk_priv_data *FUNC_14(struct platform_device *VAR_3,
       struct plat_stmmacenet_data *VAR_4,
       const struct rk_gmac_ops *VAR_5)
{
 struct rk_priv_data *VAR_6;
 struct device *VAR_7 = &VAR_3->dev;
 int VAR_8;
 const char *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_6 = FUNC_5(VAR_7, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->phy_iface = FUNC_7(VAR_7->of_node);
 VAR_6->ops = VAR_5;

 VAR_6->regulator = FUNC_6(VAR_7, "phy");
 if (FUNC_1(VAR_6->regulator)) {
  if (FUNC_2(VAR_6->regulator) == -VAR_1) {
   FUNC_3(VAR_7, "phy regulator is not available yet, deferred probing\n");
   return FUNC_0(-VAR_1);
  }
  FUNC_3(VAR_7, "no regulator found\n");
  VAR_6->regulator = ((void*)0);
 }

 VAR_8 = FUNC_9(VAR_7->of_node, "clock_in_out", &VAR_9);
 if (VAR_8) {
  FUNC_3(VAR_7, "Can not read property: clock_in_out.\n");
  VAR_6->clock_input = 1;
 } else {
  FUNC_4(VAR_7, "clock input or output? (%s).\n",
    VAR_9);
  if (!FUNC_12(VAR_9, "input"))
   VAR_6->clock_input = 1;
  else
   VAR_6->clock_input = 0;
 }

 VAR_8 = FUNC_10(VAR_7->of_node, "tx_delay", &VAR_10);
 if (VAR_8) {
  VAR_6->tx_delay = 0x30;
  FUNC_3(VAR_7, "Can not read property: tx_delay.");
  FUNC_3(VAR_7, "set tx_delay to 0x%x\n",
   VAR_6->tx_delay);
 } else {
  FUNC_4(VAR_7, "TX delay(0x%x).\n", VAR_10);
  VAR_6->tx_delay = VAR_10;
 }

 VAR_8 = FUNC_10(VAR_7->of_node, "rx_delay", &VAR_10);
 if (VAR_8) {
  VAR_6->rx_delay = 0x10;
  FUNC_3(VAR_7, "Can not read property: rx_delay.");
  FUNC_3(VAR_7, "set rx_delay to 0x%x\n",
   VAR_6->rx_delay);
 } else {
  FUNC_4(VAR_7, "RX delay(0x%x).\n", VAR_10);
  VAR_6->rx_delay = VAR_10;
 }

 VAR_6->grf = FUNC_13(VAR_7->of_node,
       "rockchip,grf");

 if (VAR_4->phy_node) {
  VAR_6->integrated_phy = FUNC_8(VAR_4->phy_node,
         "phy-is-integrated");
  if (VAR_6->integrated_phy) {
   VAR_6->phy_reset = FUNC_11(VAR_4->phy_node, ((void*)0));
   if (FUNC_1(VAR_6->phy_reset)) {
    FUNC_3(&VAR_3->dev, "No PHY reset control found.\n");
    VAR_6->phy_reset = ((void*)0);
   }
  }
 }
 FUNC_4(VAR_7, "integrated PHY? (%s).\n",
   VAR_6->integrated_phy ? "yes" : "no");

 VAR_6->pdev = VAR_3;

 return VAR_6;
}
