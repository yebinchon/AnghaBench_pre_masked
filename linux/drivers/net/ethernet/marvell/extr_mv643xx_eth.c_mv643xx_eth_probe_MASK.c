
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_11__ {int of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_8__ {int addr; } ;
struct phy_device {TYPE_1__ mdio; } ;
struct net_device {int watchdog_timeo; int features; int vlan_features; int hw_features; int min_mtu; int max_mtu; int dev_addr; int gso_max_segs; int priv_flags; scalar_t__ base_addr; int * netdev_ops; int irq; int * ethtool_ops; } ;
struct TYPE_9__ {scalar_t__ expires; } ;
struct mv643xx_eth_private {int port_num; int t_clk; scalar_t__ tx_desc_sram_size; struct phy_device* clk; TYPE_3__* shared; TYPE_2__ rx_oom; int napi; int tx_timeout_task; int mib_counters_lock; TYPE_2__ mib_counters_timer; struct net_device* dev; int rxq_count; int txq_count; scalar_t__ base; } ;
struct mv643xx_eth_platform_data {int port_number; scalar_t__ phy_addr; int duplex; int speed; scalar_t__ phy_node; int * shared; } ;
struct TYPE_10__ {scalar_t__ win_protect; struct phy_device* clk; scalar_t__ base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct phy_device*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct phy_device*) ;
 int VAR_16 ;
 int FUNC_4 (struct net_device*,TYPE_4__*) ;
 int FUNC_5 (int) ;
 struct net_device* FUNC_6 (int,int) ;
 int FUNC_7 (struct phy_device*) ;
 void* FUNC_8 (struct phy_device*) ;
 int FUNC_9 (struct phy_device*) ;
 int FUNC_10 (TYPE_4__*,char*) ;
 struct mv643xx_eth_platform_data* FUNC_11 (TYPE_4__*) ;
 struct phy_device* FUNC_12 (TYPE_4__*,int *) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct mv643xx_eth_private*) ;
 int FUNC_15 (struct mv643xx_eth_private*,int ,int ) ;
 scalar_t__ VAR_17 ;
 int FUNC_16 (struct mv643xx_eth_private*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_17 (struct net_device*,char*,...) ;
 struct mv643xx_eth_private* FUNC_18 (struct net_device*) ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (struct net_device*,int *,int ,int ) ;
 int FUNC_21 (struct net_device*,int ) ;
 int FUNC_22 (struct net_device*,int ) ;
 scalar_t__ FUNC_23 (int ,char*) ;
 struct phy_device* FUNC_24 (struct net_device*,scalar_t__,int ,int ,int ) ;
 int VAR_23 ;
 int FUNC_25 (struct mv643xx_eth_private*,int ) ;
 int FUNC_26 (struct mv643xx_eth_private*,int ,int ) ;
 struct phy_device* FUNC_27 (struct mv643xx_eth_private*,scalar_t__) ;
 TYPE_3__* FUNC_28 (int *) ;
 struct resource* FUNC_29 (struct platform_device*,int ,int ) ;
 int FUNC_30 (struct platform_device*,struct mv643xx_eth_private*) ;
 int FUNC_31 (struct mv643xx_eth_private*,int ) ;
 int FUNC_32 (struct net_device*) ;
 int FUNC_33 (struct mv643xx_eth_private*,struct mv643xx_eth_platform_data*) ;
 int FUNC_34 (struct mv643xx_eth_private*,int) ;
 int FUNC_35 (struct mv643xx_eth_private*,int ) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (TYPE_2__*,int ,int ) ;
 int VAR_24 ;
 int FUNC_38 (struct mv643xx_eth_private*,int ,scalar_t__) ;
 int FUNC_39 (struct mv643xx_eth_private*,int ,int) ;

__attribute__((used)) static int FUNC_40(struct platform_device *VAR_25)
{
 struct mv643xx_eth_platform_data *VAR_26;
 struct mv643xx_eth_private *VAR_27;
 struct net_device *VAR_28;
 struct phy_device *VAR_29 = ((void*)0);
 struct resource *VAR_30;
 int VAR_31;

 VAR_26 = FUNC_11(&VAR_25->dev);
 if (VAR_26 == ((void*)0)) {
  FUNC_10(&VAR_25->dev, "no mv643xx_eth_platform_data\n");
  return -VAR_1;
 }

 if (VAR_26->shared == ((void*)0)) {
  FUNC_10(&VAR_25->dev, "no mv643xx_eth_platform_data->shared\n");
  return -VAR_1;
 }

 VAR_28 = FUNC_6(sizeof(struct mv643xx_eth_private), 8);
 if (!VAR_28)
  return -VAR_2;

 FUNC_4(VAR_28, &VAR_25->dev);
 VAR_27 = FUNC_18(VAR_28);
 FUNC_30(VAR_25, VAR_27);

 VAR_27->shared = FUNC_28(VAR_26->shared);
 VAR_27->base = VAR_27->shared->base + 0x0400 + (VAR_26->port_number << 10);
 VAR_27->port_num = VAR_26->port_number;

 VAR_27->dev = VAR_28;





 if (FUNC_23(VAR_25->dev.of_node,
        "marvell,kirkwood-eth-port"))
  FUNC_39(VAR_27, VAR_15,
       FUNC_31(VAR_27, VAR_15) & ~VAR_0);





 VAR_27->t_clk = 133000000;
 VAR_27->clk = FUNC_12(&VAR_25->dev, ((void*)0));
 if (!FUNC_2(VAR_27->clk)) {
  FUNC_9(VAR_27->clk);
  VAR_27->t_clk = FUNC_8(VAR_27->clk);
 } else if (!FUNC_2(VAR_27->shared->clk)) {
  VAR_27->t_clk = FUNC_8(VAR_27->shared->clk);
 }

 FUNC_33(VAR_27, VAR_26);
 FUNC_22(VAR_28, VAR_27->txq_count);
 FUNC_21(VAR_28, VAR_27->rxq_count);

 VAR_31 = 0;
 if (VAR_26->phy_node) {
  VAR_29 = FUNC_24(VAR_27->dev, VAR_26->phy_node,
     VAR_19, 0,
     FUNC_14(VAR_27));
  if (!VAR_29)
   VAR_31 = -VAR_1;
  else
   FUNC_25(VAR_27, VAR_29->mdio.addr);
 } else if (VAR_26->phy_addr != VAR_7) {
  VAR_29 = FUNC_27(VAR_27, VAR_26->phy_addr);

  if (FUNC_2(VAR_29))
   VAR_31 = FUNC_3(VAR_29);
  else
   FUNC_26(VAR_27, VAR_26->speed, VAR_26->duplex);
 }
 if (VAR_31 == -VAR_1) {
  VAR_31 = -VAR_3;
  goto out;
 }
 if (VAR_31)
  goto out;

 VAR_28->ethtool_ops = &VAR_20;

 FUNC_15(VAR_27, VAR_26->speed, VAR_26->duplex);


 FUNC_16(VAR_27);

 FUNC_37(&VAR_27->mib_counters_timer, VAR_18, 0);
 VAR_27->mib_counters_timer.expires = VAR_17 + 30 * VAR_4;

 FUNC_36(&VAR_27->mib_counters_lock);

 FUNC_1(&VAR_27->tx_timeout_task, VAR_24);

 FUNC_20(VAR_28, &VAR_27->napi, VAR_22, VAR_9);

 FUNC_37(&VAR_27->rx_oom, VAR_23, 0);


 VAR_30 = FUNC_29(VAR_25, VAR_6, 0);
 FUNC_0(!VAR_30);
 VAR_28->irq = VAR_30->start;

 VAR_28->netdev_ops = &VAR_21;

 VAR_28->watchdog_timeo = 2 * VAR_4;
 VAR_28->base_addr = 0;

 VAR_28->features = VAR_12 | VAR_10 | VAR_13;
 VAR_28->vlan_features = VAR_28->features;

 VAR_28->features |= VAR_11;
 VAR_28->hw_features = VAR_28->features;

 VAR_28->priv_flags |= VAR_5;
 VAR_28->gso_max_segs = VAR_8;


 VAR_28->min_mtu = 64;
 VAR_28->max_mtu = 9500;

 if (VAR_27->shared->win_protect)
  FUNC_38(VAR_27, FUNC_5(VAR_27->port_num), VAR_27->shared->win_protect);

 FUNC_19(VAR_28);

 FUNC_39(VAR_27, VAR_16, VAR_14);

 FUNC_34(VAR_27, 250);
 FUNC_35(VAR_27, 0);

 VAR_31 = FUNC_32(VAR_28);
 if (VAR_31)
  goto out;

 FUNC_17(VAR_28, "port %d with MAC address %pM\n",
        VAR_27->port_num, VAR_28->dev_addr);

 if (VAR_27->tx_desc_sram_size > 0)
  FUNC_17(VAR_28, "configured with sram\n");

 return 0;

out:
 if (!FUNC_2(VAR_27->clk))
  FUNC_7(VAR_27->clk);
 FUNC_13(VAR_28);

 return VAR_31;
}
