
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {int name; struct device dev; } ;
struct phy_device {int interface; scalar_t__ phy_id; } ;
struct net_device {int watchdog_timeo; int irq; int * ethtool_ops; int * netdev_ops; int priv_flags; int dev_addr; } ;
struct hisi_femac_priv {char const* port_base; char const* glb_base; char const* clk; char const* mac_rst; char const* phy_rst; int napi; int phy_reset_delays; struct net_device* ndev; struct device* dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char const*) ;
 int VAR_7 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct net_device*,struct device*) ;
 struct net_device* FUNC_3 (int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*,char*,int ) ;
 char const* FUNC_8 (struct device*,int *) ;
 void* FUNC_9 (struct platform_device*,int) ;
 int FUNC_10 (struct device*,int ,int ,int ,int ,struct net_device*) ;
 void* FUNC_11 (struct device*,char*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ,char const*) ;
 int FUNC_14 (struct net_device*) ;
 int VAR_8 ;
 int FUNC_15 (struct hisi_femac_priv*) ;
 int VAR_9 ;
 int FUNC_16 (struct hisi_femac_priv*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_17 (struct hisi_femac_priv*) ;
 int VAR_12 ;
 int FUNC_18 (struct hisi_femac_priv*) ;
 int FUNC_19 (int ) ;
 struct hisi_femac_priv* FUNC_20 (struct net_device*) ;
 int FUNC_21 (struct net_device*,int *,int ,int ) ;
 int FUNC_22 (int *) ;
 char* FUNC_23 (struct device_node*) ;
 struct phy_device* FUNC_24 (struct net_device*,struct device_node*,int ) ;
 int FUNC_25 (struct device_node*,int ,int ,int ) ;
 int FUNC_26 (struct phy_device*,char*,unsigned long,int ) ;
 int FUNC_27 (struct phy_device*) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (struct platform_device*,int ) ;
 int FUNC_30 (struct platform_device*,struct net_device*) ;
 int FUNC_31 (struct net_device*) ;

__attribute__((used)) static int FUNC_32(struct platform_device *VAR_13)
{
 struct device *VAR_14 = &VAR_13->dev;
 struct device_node *VAR_15 = VAR_14->of_node;
 struct net_device *VAR_16;
 struct hisi_femac_priv *VAR_17;
 struct phy_device *VAR_18;
 const char *VAR_19;
 int VAR_20;

 VAR_16 = FUNC_3(sizeof(*VAR_17));
 if (!VAR_16)
  return -VAR_2;

 FUNC_30(VAR_13, VAR_16);
 FUNC_2(VAR_16, &VAR_13->dev);

 VAR_17 = FUNC_20(VAR_16);
 VAR_17->dev = VAR_14;
 VAR_17->ndev = VAR_16;

 VAR_17->port_base = FUNC_9(VAR_13, 0);
 if (FUNC_0(VAR_17->port_base)) {
  VAR_20 = FUNC_1(VAR_17->port_base);
  goto out_free_netdev;
 }

 VAR_17->glb_base = FUNC_9(VAR_13, 1);
 if (FUNC_0(VAR_17->glb_base)) {
  VAR_20 = FUNC_1(VAR_17->glb_base);
  goto out_free_netdev;
 }

 VAR_17->clk = FUNC_8(&VAR_13->dev, ((void*)0));
 if (FUNC_0(VAR_17->clk)) {
  FUNC_6(VAR_14, "failed to get clk\n");
  VAR_20 = -VAR_1;
  goto out_free_netdev;
 }

 VAR_20 = FUNC_5(VAR_17->clk);
 if (VAR_20) {
  FUNC_6(VAR_14, "failed to enable clk %d\n", VAR_20);
  goto out_free_netdev;
 }

 VAR_17->mac_rst = FUNC_11(VAR_14, "mac");
 if (FUNC_0(VAR_17->mac_rst)) {
  VAR_20 = FUNC_1(VAR_17->mac_rst);
  goto out_disable_clk;
 }
 FUNC_15(VAR_17);

 VAR_17->phy_rst = FUNC_11(VAR_14, "phy");
 if (FUNC_0(VAR_17->phy_rst)) {
  VAR_17->phy_rst = ((void*)0);
 } else {
  VAR_20 = FUNC_25(VAR_15,
       VAR_7,
       VAR_17->phy_reset_delays,
       VAR_0);
  if (VAR_20)
   goto out_disable_clk;
  FUNC_17(VAR_17);
 }

 VAR_18 = FUNC_24(VAR_16, VAR_15, VAR_8);
 if (!VAR_18) {
  FUNC_6(VAR_14, "connect to PHY failed!\n");
  VAR_20 = -VAR_1;
  goto out_disable_clk;
 }

 FUNC_26(VAR_18, "phy_id=0x%.8lx, phy_mode=%s\n",
      (unsigned long)VAR_18->phy_id,
      FUNC_28(VAR_18->interface));

 VAR_19 = FUNC_23(VAR_15);
 if (!FUNC_0(VAR_19))
  FUNC_13(VAR_16->dev_addr, VAR_19);
 if (!FUNC_19(VAR_16->dev_addr)) {
  FUNC_12(VAR_16);
  FUNC_7(VAR_14, "using random MAC address %pM\n",
    VAR_16->dev_addr);
 }

 VAR_16->watchdog_timeo = 6 * VAR_4;
 VAR_16->priv_flags |= VAR_5;
 VAR_16->netdev_ops = &VAR_11;
 VAR_16->ethtool_ops = &VAR_9;
 FUNC_21(VAR_16, &VAR_17->napi, VAR_12, VAR_3);

 FUNC_18(VAR_17);

 VAR_20 = FUNC_16(VAR_17);
 if (VAR_20)
  goto out_disconnect_phy;

 VAR_16->irq = FUNC_29(VAR_13, 0);
 if (VAR_16->irq <= 0) {
  VAR_20 = -VAR_1;
  goto out_disconnect_phy;
 }

 VAR_20 = FUNC_10(VAR_14, VAR_16->irq, VAR_10,
          VAR_6, VAR_13->name, VAR_16);
 if (VAR_20) {
  FUNC_6(VAR_14, "devm_request_irq %d failed!\n", VAR_16->irq);
  goto out_disconnect_phy;
 }

 VAR_20 = FUNC_31(VAR_16);
 if (VAR_20) {
  FUNC_6(VAR_14, "register_netdev failed!\n");
  goto out_disconnect_phy;
 }

 return VAR_20;

out_disconnect_phy:
 FUNC_22(&VAR_17->napi);
 FUNC_27(VAR_18);
out_disable_clk:
 FUNC_4(VAR_17->clk);
out_free_netdev:
 FUNC_14(VAR_16);

 return VAR_20;
}
