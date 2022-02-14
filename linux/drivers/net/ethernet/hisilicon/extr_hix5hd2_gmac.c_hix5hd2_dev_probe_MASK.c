
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {int name; struct device dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct net_device {scalar_t__ irq; int watchdog_timeo; int hw_features; int features; int vlan_features; int * ethtool_ops; int * netdev_ops; int priv_flags; int dev_addr; } ;
struct mii_bus {char* name; int id; struct device* parent; int write; int read; struct hix5hd2_priv* priv; } ;
struct hix5hd2_priv {unsigned long hw_cap; char const* base; char const* ctrl_base; char const* mac_core_clk; char const* mac_ifc_clk; char const* mac_core_rst; char const* mac_ifc_rst; char const* phy_rst; int phy_node; int napi; struct net_device* netdev; int tx_timeout_task; scalar_t__ phy_mode; struct mii_bus* bus; int phy_reset_delays; struct device* dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (char const*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (struct net_device*,struct device*) ;
 struct net_device* FUNC_5 (int) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (struct device*) ;
 void* FUNC_9 (struct device*,char*) ;
 void* FUNC_10 (struct platform_device*,int) ;
 int FUNC_11 (struct device*,scalar_t__,int ,int ,int ,struct net_device*) ;
 void* FUNC_12 (struct device*,char*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int ,char const*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct hix5hd2_priv*) ;
 int FUNC_17 (struct hix5hd2_priv*) ;
 int VAR_11 ;
 int FUNC_18 (struct hix5hd2_priv*) ;
 int FUNC_19 (struct hix5hd2_priv*) ;
 int VAR_12 ;
 int FUNC_20 (struct hix5hd2_priv*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_21 (struct hix5hd2_priv*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_22 (int ) ;
 struct mii_bus* FUNC_23 () ;
 int FUNC_24 (struct mii_bus*) ;
 int FUNC_25 (struct mii_bus*) ;
 int FUNC_26 (struct net_device*,char*,...) ;
 struct hix5hd2_priv* FUNC_27 (struct net_device*) ;
 int FUNC_28 (struct net_device*,char*,int ) ;
 int FUNC_29 (struct net_device*,int *,int ,int ) ;
 int FUNC_30 (int *) ;
 char* FUNC_31 (struct device_node*) ;
 scalar_t__ FUNC_32 (struct device_node*) ;
 struct of_device_id* FUNC_33 (int ,struct device*) ;
 int FUNC_34 (struct mii_bus*,struct device_node*) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (struct device_node*,char*,int ) ;
 int FUNC_37 (struct device_node*,int ,int ,int ) ;
 scalar_t__ FUNC_38 (struct platform_device*,int ) ;
 int FUNC_39 (struct platform_device*,struct net_device*) ;
 int FUNC_40 (struct net_device*) ;
 int FUNC_41 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_42(struct platform_device *VAR_19)
{
 struct device *VAR_20 = &VAR_19->dev;
 struct device_node *VAR_21 = VAR_20->of_node;
 const struct of_device_id *VAR_22 = ((void*)0);
 struct net_device *VAR_23;
 struct hix5hd2_priv *VAR_24;
 struct mii_bus *VAR_25;
 const char *VAR_26;
 int VAR_27;

 VAR_23 = FUNC_5(sizeof(struct hix5hd2_priv));
 if (!VAR_23)
  return -VAR_3;

 FUNC_39(VAR_19, VAR_23);

 VAR_24 = FUNC_27(VAR_23);
 VAR_24->dev = VAR_20;
 VAR_24->netdev = VAR_23;

 VAR_22 = FUNC_33(VAR_16, VAR_20);
 if (!VAR_22) {
  VAR_27 = -VAR_1;
  goto out_free_netdev;
 }
 VAR_24->hw_cap = (unsigned long)VAR_22->data;

 VAR_24->base = FUNC_10(VAR_19, 0);
 if (FUNC_2(VAR_24->base)) {
  VAR_27 = FUNC_3(VAR_24->base);
  goto out_free_netdev;
 }

 VAR_24->ctrl_base = FUNC_10(VAR_19, 1);
 if (FUNC_2(VAR_24->ctrl_base)) {
  VAR_27 = FUNC_3(VAR_24->ctrl_base);
  goto out_free_netdev;
 }

 VAR_24->mac_core_clk = FUNC_9(&VAR_19->dev, "mac_core");
 if (FUNC_2(VAR_24->mac_core_clk)) {
  FUNC_26(VAR_23, "failed to get mac core clk\n");
  VAR_27 = -VAR_2;
  goto out_free_netdev;
 }

 VAR_27 = FUNC_7(VAR_24->mac_core_clk);
 if (VAR_27 < 0) {
  FUNC_26(VAR_23, "failed to enable mac core clk %d\n", VAR_27);
  goto out_free_netdev;
 }

 VAR_24->mac_ifc_clk = FUNC_9(&VAR_19->dev, "mac_ifc");
 if (FUNC_2(VAR_24->mac_ifc_clk))
  VAR_24->mac_ifc_clk = ((void*)0);

 VAR_27 = FUNC_7(VAR_24->mac_ifc_clk);
 if (VAR_27 < 0) {
  FUNC_26(VAR_23, "failed to enable mac ifc clk %d\n", VAR_27);
  goto out_disable_mac_core_clk;
 }

 VAR_24->mac_core_rst = FUNC_12(VAR_20, "mac_core");
 if (FUNC_2(VAR_24->mac_core_rst))
  VAR_24->mac_core_rst = ((void*)0);
 FUNC_20(VAR_24);

 VAR_24->mac_ifc_rst = FUNC_12(VAR_20, "mac_ifc");
 if (FUNC_2(VAR_24->mac_ifc_rst))
  VAR_24->mac_ifc_rst = ((void*)0);

 VAR_24->phy_rst = FUNC_12(VAR_20, "phy");
 if (FUNC_2(VAR_24->phy_rst)) {
  VAR_24->phy_rst = ((void*)0);
 } else {
  VAR_27 = FUNC_37(VAR_21,
       VAR_10,
       VAR_24->phy_reset_delays,
       VAR_0);
  if (VAR_27)
   goto out_disable_clk;
  FUNC_21(VAR_24);
 }

 VAR_25 = FUNC_23();
 if (VAR_25 == ((void*)0)) {
  VAR_27 = -VAR_3;
  goto out_disable_clk;
 }

 VAR_25->priv = VAR_24;
 VAR_25->name = "hix5hd2_mii_bus";
 VAR_25->read = VAR_13;
 VAR_25->write = VAR_14;
 VAR_25->parent = &VAR_19->dev;
 FUNC_41(VAR_25->id, VAR_6, "%s-mii", FUNC_8(&VAR_19->dev));
 VAR_24->bus = VAR_25;

 VAR_27 = FUNC_34(VAR_25, VAR_21);
 if (VAR_27)
  goto err_free_mdio;

 VAR_24->phy_mode = FUNC_32(VAR_21);
 if ((int)VAR_24->phy_mode < 0) {
  FUNC_26(VAR_23, "not find phy-mode\n");
  VAR_27 = -VAR_1;
  goto err_mdiobus;
 }

 VAR_24->phy_node = FUNC_36(VAR_21, "phy-handle", 0);
 if (!VAR_24->phy_node) {
  FUNC_26(VAR_23, "not find phy-handle\n");
  VAR_27 = -VAR_1;
  goto err_mdiobus;
 }

 VAR_23->irq = FUNC_38(VAR_19, 0);
 if (VAR_23->irq <= 0) {
  FUNC_26(VAR_23, "No irq resource\n");
  VAR_27 = -VAR_1;
  goto out_phy_node;
 }

 VAR_27 = FUNC_11(VAR_20, VAR_23->irq, VAR_12,
          0, VAR_19->name, VAR_23);
 if (VAR_27) {
  FUNC_26(VAR_23, "devm_request_irq failed\n");
  goto out_phy_node;
 }

 VAR_26 = FUNC_31(VAR_21);
 if (!FUNC_2(VAR_26))
  FUNC_14(VAR_23->dev_addr, VAR_26);
 if (!FUNC_22(VAR_23->dev_addr)) {
  FUNC_13(VAR_23);
  FUNC_28(VAR_23, "using random MAC address %pM\n",
       VAR_23->dev_addr);
 }

 FUNC_1(&VAR_24->tx_timeout_task, VAR_18);
 VAR_23->watchdog_timeo = 6 * VAR_4;
 VAR_23->priv_flags |= VAR_5;
 VAR_23->netdev_ops = &VAR_15;
 VAR_23->ethtool_ops = &VAR_11;
 FUNC_4(VAR_23, VAR_20);

 if (FUNC_0(VAR_24->hw_cap))
  VAR_23->hw_features |= VAR_9;

 VAR_23->features |= VAR_23->hw_features | VAR_8;
 VAR_23->vlan_features |= VAR_23->features;

 VAR_27 = FUNC_18(VAR_24);
 if (VAR_27)
  goto out_phy_node;

 FUNC_29(VAR_23, &VAR_24->napi, VAR_17, VAR_7);

 if (FUNC_0(VAR_24->hw_cap)) {
  VAR_27 = FUNC_19(VAR_24);
  if (VAR_27)
   goto out_destroy_queue;
 }

 VAR_27 = FUNC_40(VAR_24->netdev);
 if (VAR_27) {
  FUNC_26(VAR_23, "register_netdev failed!");
  goto out_destroy_queue;
 }

 FUNC_6(VAR_24->mac_ifc_clk);
 FUNC_6(VAR_24->mac_core_clk);

 return VAR_27;

out_destroy_queue:
 if (FUNC_0(VAR_24->hw_cap))
  FUNC_17(VAR_24);
 FUNC_30(&VAR_24->napi);
 FUNC_16(VAR_24);
out_phy_node:
 FUNC_35(VAR_24->phy_node);
err_mdiobus:
 FUNC_25(VAR_25);
err_free_mdio:
 FUNC_24(VAR_25);
out_disable_clk:
 FUNC_6(VAR_24->mac_ifc_clk);
out_disable_mac_core_clk:
 FUNC_6(VAR_24->mac_core_clk);
out_free_netdev:
 FUNC_15(VAR_23);

 return VAR_27;
}
