
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct phy_device {int dummy; } ;
struct net_device {int watchdog_timeo; int irq; int hw_features; int features; int * netdev_ops; int * ethtool_ops; } ;
struct ftgmac100 {int tx_pause; int rx_pause; int aneg_pause; int is_aspeed; int use_ncsi; int res; int base; int new_tx_q_entries; int tx_q_entries; int new_rx_q_entries; int rx_q_entries; struct net_device* netdev; int ndev; void* txdes0_edotr_mask; void* rxdes0_edorr_mask; int reset_task; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct net_device*,TYPE_1__*) ;
 struct net_device* FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct net_device*) ;
 int VAR_16 ;
 int FUNC_9 (struct net_device*) ;
 int VAR_17 ;
 int FUNC_10 (struct ftgmac100*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_11 (struct ftgmac100*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct net_device*,int ) ;
 int FUNC_16 (struct net_device*,char*,int,int ) ;
 struct ftgmac100* FUNC_17 (struct net_device*) ;
 scalar_t__ FUNC_18 (struct device_node*,char*) ;
 int FUNC_19 (struct device_node*,char*) ;
 scalar_t__ FUNC_20 (struct device_node*,char*,int *) ;
 struct phy_device* FUNC_21 (struct net_device*,struct device_node*,int *) ;
 int FUNC_22 (struct phy_device*) ;
 int FUNC_23 (struct phy_device*) ;
 int FUNC_24 (struct platform_device*,int ) ;
 struct resource* FUNC_25 (struct platform_device*,int ,int ) ;
 int FUNC_26 (struct platform_device*,struct net_device*) ;
 int FUNC_27 (struct net_device*) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ,int ,int ) ;
 int FUNC_30 (struct resource*) ;

__attribute__((used)) static int FUNC_31(struct platform_device *VAR_21)
{
 struct resource *VAR_22;
 int VAR_23;
 struct net_device *VAR_24;
 struct ftgmac100 *VAR_25;
 struct device_node *VAR_26;
 int VAR_27 = 0;

 if (!VAR_21)
  return -VAR_4;

 VAR_22 = FUNC_25(VAR_21, VAR_8, 0);
 if (!VAR_22)
  return -VAR_6;

 VAR_23 = FUNC_24(VAR_21, 0);
 if (VAR_23 < 0)
  return VAR_23;


 VAR_24 = FUNC_4(sizeof(*VAR_25));
 if (!VAR_24) {
  VAR_27 = -VAR_5;
  goto err_alloc_etherdev;
 }

 FUNC_3(VAR_24, &VAR_21->dev);

 VAR_24->ethtool_ops = &VAR_17;
 VAR_24->netdev_ops = &VAR_19;
 VAR_24->watchdog_timeo = 5 * VAR_7;

 FUNC_26(VAR_21, VAR_24);


 VAR_25 = FUNC_17(VAR_24);
 VAR_25->netdev = VAR_24;
 VAR_25->dev = &VAR_21->dev;
 FUNC_1(&VAR_25->reset_task, VAR_20);


 VAR_25->res = FUNC_29(VAR_22->start, FUNC_30(VAR_22),
           FUNC_7(&VAR_21->dev));
 if (!VAR_25->res) {
  FUNC_5(&VAR_21->dev, "Could not reserve memory region\n");
  VAR_27 = -VAR_5;
  goto err_req_mem;
 }

 VAR_25->base = FUNC_13(VAR_22->start, FUNC_30(VAR_22));
 if (!VAR_25->base) {
  FUNC_5(&VAR_21->dev, "Failed to ioremap ethernet registers\n");
  VAR_27 = -VAR_3;
  goto err_ioremap;
 }

 VAR_24->irq = VAR_23;


 VAR_25->tx_pause = 1;
 VAR_25->rx_pause = 1;
 VAR_25->aneg_pause = 1;


 FUNC_10(VAR_25);

 VAR_26 = VAR_21->dev.of_node;
 if (VAR_26 && (FUNC_18(VAR_26, "aspeed,ast2400-mac") ||
     FUNC_18(VAR_26, "aspeed,ast2500-mac") ||
     FUNC_18(VAR_26, "aspeed,ast2600-mac"))) {
  VAR_25->rxdes0_edorr_mask = FUNC_0(30);
  VAR_25->txdes0_edotr_mask = FUNC_0(30);
  VAR_25->is_aspeed = 1;
 } else {
  VAR_25->rxdes0_edorr_mask = FUNC_0(15);
  VAR_25->txdes0_edotr_mask = FUNC_0(15);
 }

 if (VAR_26 && FUNC_20(VAR_26, "use-ncsi", ((void*)0))) {
  if (!FUNC_2(VAR_0)) {
   FUNC_5(&VAR_21->dev, "NCSI stack not enabled\n");
   goto err_ncsi_dev;
  }

  FUNC_6(&VAR_21->dev, "Using NCSI interface\n");
  VAR_25->use_ncsi = 1;
  VAR_25->ndev = FUNC_15(VAR_24, VAR_18);
  if (!VAR_25->ndev)
   goto err_ncsi_dev;
 } else if (VAR_26 && FUNC_20(VAR_26, "phy-handle", ((void*)0))) {
  struct phy_device *VAR_28;

  VAR_28 = FUNC_21(VAR_25->netdev, VAR_26,
          &VAR_16);
  if (!VAR_28) {
   FUNC_5(&VAR_21->dev, "Failed to connect to phy\n");
   goto err_setup_mdio;
  }




  FUNC_23(VAR_28);


  FUNC_22(VAR_28);
 } else if (VAR_26 && !FUNC_19(VAR_26, "mdio")) {





  VAR_25->use_ncsi = 0;
  VAR_27 = FUNC_12(VAR_24);
  if (VAR_27)
   goto err_setup_mdio;
 }

 if (VAR_25->is_aspeed)
  FUNC_11(VAR_25);


 VAR_25->rx_q_entries = VAR_25->new_rx_q_entries = VAR_1;
 VAR_25->tx_q_entries = VAR_25->new_tx_q_entries = VAR_2;


 VAR_24->hw_features = VAR_14 | VAR_10 |
  VAR_9 | VAR_15 | VAR_12 |
  VAR_13;

 if (VAR_25->use_ncsi)
  VAR_24->hw_features |= VAR_11;


 if (VAR_26 && (FUNC_18(VAR_26, "aspeed,ast2400-mac")))
  VAR_24->hw_features &= ~VAR_10;
 if (VAR_26 && FUNC_20(VAR_26, "no-hw-checksum", ((void*)0)))
  VAR_24->hw_features &= ~(VAR_10 | VAR_14);
 VAR_24->features |= VAR_24->hw_features;


 VAR_27 = FUNC_27(VAR_24);
 if (VAR_27) {
  FUNC_5(&VAR_21->dev, "Failed to register netdev\n");
  goto err_register_netdev;
 }

 FUNC_16(VAR_24, "irq %d, mapped at %p\n", VAR_24->irq, VAR_25->base);

 return 0;

err_ncsi_dev:
err_register_netdev:
 FUNC_9(VAR_24);
err_setup_mdio:
 FUNC_14(VAR_25->base);
err_ioremap:
 FUNC_28(VAR_25->res);
err_req_mem:
 FUNC_8(VAR_24);
err_alloc_etherdev:
 return VAR_27;
}
