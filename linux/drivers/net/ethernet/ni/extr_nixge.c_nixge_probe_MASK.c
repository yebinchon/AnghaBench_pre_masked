
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct nixge_priv {scalar_t__ tx_irq; scalar_t__ rx_irq; scalar_t__ mii_bus; struct net_device* ndev; struct device_node* phy_node; scalar_t__ phy_mode; int coalesce_count_tx; int coalesce_count_rx; int napi; TYPE_1__* dev; } ;
struct net_device {int min_mtu; int dev_addr; int max_mtu; int * ethtool_ops; int * netdev_ops; int features; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int const*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct net_device*,char*,...) ;
 struct nixge_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*,int *,int ,int ) ;
 int VAR_7 ;
 int * FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct nixge_priv*,struct device_node*) ;
 int VAR_8 ;
 int FUNC_14 (struct platform_device*) ;
 int VAR_9 ;
 struct device_node* FUNC_15 (int ,char*) ;
 scalar_t__ FUNC_16 (int ) ;
 struct device_node* FUNC_17 (int ) ;
 int FUNC_18 (struct device_node*) ;
 struct device_node* FUNC_19 (int ,char*,int ) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 void* FUNC_23 (struct platform_device*,char*) ;
 int FUNC_24 (struct platform_device*,struct net_device*) ;
 int FUNC_25 (struct net_device*) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_10)
{
 struct device_node *VAR_11, *VAR_12;
 struct nixge_priv *VAR_13;
 struct net_device *VAR_14;
 const u8 *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_2(sizeof(*VAR_13));
 if (!VAR_14)
  return -VAR_1;

 FUNC_24(VAR_10, VAR_14);
 FUNC_0(VAR_14, &VAR_10->dev);

 VAR_14->features = VAR_3;
 VAR_14->netdev_ops = &VAR_8;
 VAR_14->ethtool_ops = &VAR_7;


 VAR_14->min_mtu = 64;
 VAR_14->max_mtu = VAR_4;

 VAR_15 = FUNC_12(&VAR_10->dev);
 if (VAR_15 && FUNC_6(VAR_15)) {
  FUNC_4(VAR_14->dev_addr, VAR_15);
  FUNC_7(VAR_15);
 } else {
  FUNC_3(VAR_14);
 }

 VAR_13 = FUNC_10(VAR_14);
 VAR_13->ndev = VAR_14;
 VAR_13->dev = &VAR_10->dev;

 FUNC_11(VAR_14, &VAR_13->napi, VAR_9, VAR_2);
 VAR_16 = FUNC_14(VAR_10);
 if (VAR_16)
  return VAR_16;
 FUNC_1(VAR_14);

 VAR_13->tx_irq = FUNC_23(VAR_10, "tx");
 if (VAR_13->tx_irq < 0) {
  FUNC_9(VAR_14, "could not find 'tx' irq");
  return VAR_13->tx_irq;
 }

 VAR_13->rx_irq = FUNC_23(VAR_10, "rx");
 if (VAR_13->rx_irq < 0) {
  FUNC_9(VAR_14, "could not find 'rx' irq");
  return VAR_13->rx_irq;
 }

 VAR_13->coalesce_count_rx = VAR_5;
 VAR_13->coalesce_count_tx = VAR_6;

 VAR_11 = FUNC_15(VAR_10->dev.of_node, "mdio");
 if (VAR_11) {
  VAR_16 = FUNC_13(VAR_13, VAR_11);
  FUNC_18(VAR_11);
  if (VAR_16) {
   FUNC_9(VAR_14, "error registering mdio bus");
   goto free_netdev;
  }
 }

 VAR_13->phy_mode = FUNC_16(VAR_10->dev.of_node);
 if ((int)VAR_13->phy_mode < 0) {
  FUNC_9(VAR_14, "not find \"phy-mode\" property\n");
  VAR_16 = -VAR_0;
  goto unregister_mdio;
 }

 VAR_12 = FUNC_19(VAR_10->dev.of_node, "phy-handle", 0);
 if (!VAR_12 && FUNC_21(VAR_10->dev.of_node)) {
  VAR_16 = FUNC_22(VAR_10->dev.of_node);
  if (VAR_16 < 0) {
   FUNC_9(VAR_14, "broken fixed-link specification\n");
   goto unregister_mdio;
  }
  VAR_12 = FUNC_17(VAR_10->dev.of_node);
 }
 VAR_13->phy_node = VAR_12;

 VAR_16 = FUNC_25(VAR_13->ndev);
 if (VAR_16) {
  FUNC_9(VAR_14, "register_netdev() error (%i)\n", VAR_16);
  goto free_phy;
 }

 return 0;

free_phy:
 if (FUNC_21(VAR_10->dev.of_node))
  FUNC_20(VAR_10->dev.of_node);
 FUNC_18(VAR_12);

unregister_mdio:
 if (VAR_13->mii_bus)
  FUNC_8(VAR_13->mii_bus);

free_netdev:
 FUNC_5(VAR_14);

 return VAR_16;
}
