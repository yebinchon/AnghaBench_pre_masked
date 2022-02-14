
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct phy_device {int phy_id; TYPE_2__* drv; } ;
struct TYPE_3__ {struct device* parent; } ;
struct net_device {unsigned int irq; int dev_addr; int name; int watchdog_timeo; int * ethtool_ops; int * netdev_ops; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;
struct arc_emac_priv {char const* regs; scalar_t__ clk; int napi; scalar_t__ txbd_dma; scalar_t__ rxbd_dma; scalar_t__ rxbd; scalar_t__ txbd; struct device* dev; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct arc_emac_priv*) ;
 int FUNC_4 (struct arc_emac_priv*) ;
 unsigned int FUNC_5 (struct arc_emac_priv*,int ) ;
 int FUNC_6 (struct arc_emac_priv*,int ,unsigned int) ;
 int FUNC_7 (scalar_t__) ;
 unsigned int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct device*,char*,...) ;
 int FUNC_11 (struct device*,char*,...) ;
 int FUNC_12 (struct device*,char*,unsigned int,...) ;
 char const* FUNC_13 (struct device*,struct resource*) ;
 int FUNC_14 (struct device*,unsigned int,int ,int ,int ,struct net_device*) ;
 scalar_t__ FUNC_15 (struct device*,scalar_t__,scalar_t__*,int ) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (int ,char const*) ;
 unsigned int FUNC_18 (int ,int ) ;
 struct arc_emac_priv* FUNC_19 (struct net_device*) ;
 int FUNC_20 (struct net_device*,int *,int ,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ,int ,struct resource*) ;
 char* FUNC_23 (int ) ;
 int FUNC_24 (struct device_node*) ;
 struct device_node* FUNC_25 (int ,char*,int ) ;
 struct phy_device* FUNC_26 (struct net_device*,struct device_node*,int ,int ,int) ;
 scalar_t__ FUNC_27 (int ,char*,unsigned int*) ;
 int FUNC_28 (struct phy_device*) ;
 int FUNC_29 (struct net_device*) ;

int FUNC_30(struct net_device *VAR_16, int VAR_17)
{
 struct device *VAR_18 = VAR_16->dev.parent;
 struct resource VAR_19;
 struct device_node *VAR_20;
 struct phy_device *VAR_21 = ((void*)0);
 struct arc_emac_priv *VAR_22;
 const char *VAR_23;
 unsigned int VAR_24, VAR_25, VAR_26;
 int VAR_27;


 VAR_20 = FUNC_25(VAR_18->of_node, "phy", 0);
 if (!VAR_20) {
  FUNC_11(VAR_18, "failed to retrieve phy description from device tree\n");
  return -VAR_2;
 }


 VAR_27 = FUNC_22(VAR_18->of_node, 0, &VAR_19);
 if (VAR_27) {
  FUNC_11(VAR_18, "failed to retrieve registers base from device tree\n");
  VAR_27 = -VAR_2;
  goto out_put_node;
 }


 VAR_26 = FUNC_18(VAR_18->of_node, 0);
 if (!VAR_26) {
  FUNC_11(VAR_18, "failed to retrieve <irq> value from device tree\n");
  VAR_27 = -VAR_2;
  goto out_put_node;
 }

 VAR_16->netdev_ops = &VAR_14;
 VAR_16->ethtool_ops = &VAR_12;
 VAR_16->watchdog_timeo = VAR_10;

 VAR_22 = FUNC_19(VAR_16);
 VAR_22->dev = VAR_18;

 VAR_22->regs = FUNC_13(VAR_18, &VAR_19);
 if (FUNC_0(VAR_22->regs)) {
  VAR_27 = FUNC_1(VAR_22->regs);
  goto out_put_node;
 }

 FUNC_10(VAR_18, "Registers base address is 0x%p\n", VAR_22->regs);

 if (VAR_22->clk) {
  VAR_27 = FUNC_9(VAR_22->clk);
  if (VAR_27) {
   FUNC_11(VAR_18, "failed to enable clock\n");
   goto out_put_node;
  }

  VAR_25 = FUNC_8(VAR_22->clk);
 } else {

  if (FUNC_27(VAR_18->of_node, "clock-frequency",
      &VAR_25)) {
   FUNC_11(VAR_18, "failed to retrieve <clock-frequency> from device tree\n");
   VAR_27 = -VAR_1;
   goto out_put_node;
  }
 }

 VAR_24 = FUNC_5(VAR_22, VAR_7);


 if (!(VAR_24 == 0x0005fd02 || VAR_24 == 0x0007fd02)) {
  FUNC_11(VAR_18, "ARC EMAC not detected, id=0x%x\n", VAR_24);
  VAR_27 = -VAR_2;
  goto out_clken;
 }
 FUNC_12(VAR_18, "ARC EMAC detected with id: 0x%x\n", VAR_24);


 FUNC_6(VAR_22, VAR_8, VAR_25 / 1000000);

 VAR_16->irq = VAR_26;
 FUNC_12(VAR_18, "IRQ is %d\n", VAR_16->irq);


 VAR_27 = FUNC_14(VAR_18, VAR_16->irq, VAR_13, 0,
          VAR_16->name, VAR_16);
 if (VAR_27) {
  FUNC_11(VAR_18, "could not allocate IRQ\n");
  goto out_clken;
 }


 VAR_23 = FUNC_23(VAR_18->of_node);

 if (!FUNC_0(VAR_23))
  FUNC_17(VAR_16->dev_addr, VAR_23);
 else
  FUNC_16(VAR_16);

 FUNC_2(VAR_16);
 FUNC_12(VAR_18, "MAC address is now %pM\n", VAR_16->dev_addr);


 VAR_22->rxbd = FUNC_15(VAR_18, VAR_6 + VAR_9,
      &VAR_22->rxbd_dma, VAR_4);

 if (!VAR_22->rxbd) {
  FUNC_11(VAR_18, "failed to allocate data buffers\n");
  VAR_27 = -VAR_3;
  goto out_clken;
 }

 VAR_22->txbd = VAR_22->rxbd + VAR_5;

 VAR_22->txbd_dma = VAR_22->rxbd_dma + VAR_6;
 FUNC_10(VAR_18, "EMAC Device addr: Rx Ring [0x%x], Tx Ring[%x]\n",
  (unsigned int)VAR_22->rxbd_dma, (unsigned int)VAR_22->txbd_dma);

 VAR_27 = FUNC_3(VAR_22);
 if (VAR_27) {
  FUNC_11(VAR_18, "failed to probe MII bus\n");
  goto out_clken;
 }

 VAR_21 = FUNC_26(VAR_16, VAR_20, VAR_11, 0,
    VAR_17);
 if (!VAR_21) {
  FUNC_11(VAR_18, "of_phy_connect() failed\n");
  VAR_27 = -VAR_2;
  goto out_mdio;
 }

 FUNC_12(VAR_18, "connected to %s phy with id 0x%x\n",
   VAR_21->drv->name, VAR_21->phy_id);

 FUNC_20(VAR_16, &VAR_22->napi, VAR_15, VAR_0);

 VAR_27 = FUNC_29(VAR_16);
 if (VAR_27) {
  FUNC_11(VAR_18, "failed to register network device\n");
  goto out_netif_api;
 }

 FUNC_24(VAR_20);
 return 0;

out_netif_api:
 FUNC_21(&VAR_22->napi);
 FUNC_28(VAR_21);
out_mdio:
 FUNC_4(VAR_22);
out_clken:
 if (VAR_22->clk)
  FUNC_7(VAR_22->clk);
out_put_node:
 FUNC_24(VAR_20);

 return VAR_27;
}
