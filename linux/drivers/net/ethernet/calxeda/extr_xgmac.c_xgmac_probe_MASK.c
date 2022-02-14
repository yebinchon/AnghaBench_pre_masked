
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgmac_priv {int rx_pause; int tx_pause; int max_macs; int pmt_irq; scalar_t__ base; int napi; int wolopts; int * device; struct net_device* dev; int tx_timeout_work; int stats_lock; } ;
struct resource {int start; } ;
struct platform_device {int dev; int name; } ;
struct net_device {int irq; int hw_features; int features; int dev_addr; int max_mtu; scalar_t__ min_mtu; int priv_flags; int * ethtool_ops; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 struct net_device* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int,struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct net_device*,char*,...) ;
 int FUNC_13 (struct net_device*,char*,int) ;
 struct xgmac_priv* FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*,char*,int ) ;
 int FUNC_16 (struct net_device*,int *,int ,int) ;
 int FUNC_17 (int *) ;
 void* FUNC_18 (struct platform_device*,int) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct net_device*) ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (struct net_device*) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int,int ,int ,int ,struct net_device*) ;
 int FUNC_25 (int ,int ,int ) ;
 int FUNC_26 (struct resource*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int,scalar_t__) ;
 int VAR_19 ;
 int FUNC_29 (scalar_t__,int ,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static int FUNC_30(struct platform_device *VAR_25)
{
 int VAR_26 = 0;
 struct resource *VAR_27;
 struct net_device *VAR_28 = ((void*)0);
 struct xgmac_priv *VAR_29 = ((void*)0);
 u32 VAR_30;

 VAR_27 = FUNC_19(VAR_25, VAR_8, 0);
 if (!VAR_27)
  return -VAR_2;

 if (!FUNC_25(VAR_27->start, FUNC_26(VAR_27), VAR_25->name))
  return -VAR_1;

 VAR_28 = FUNC_3(sizeof(struct xgmac_priv));
 if (!VAR_28) {
  VAR_26 = -VAR_3;
  goto err_alloc;
 }

 FUNC_1(VAR_28, &VAR_25->dev);
 VAR_29 = FUNC_14(VAR_28);
 FUNC_20(VAR_25, VAR_28);
 VAR_28->netdev_ops = &VAR_21;
 VAR_28->ethtool_ops = &VAR_19;
 FUNC_27(&VAR_29->stats_lock);
 FUNC_0(&VAR_29->tx_timeout_work, VAR_24);

 VAR_29->device = &VAR_25->dev;
 VAR_29->dev = VAR_28;
 VAR_29->rx_pause = 1;
 VAR_29->tx_pause = 1;

 VAR_29->base = FUNC_9(VAR_27->start, FUNC_26(VAR_27));
 if (!VAR_29->base) {
  FUNC_12(VAR_28, "ioremap failed\n");
  VAR_26 = -VAR_3;
  goto err_io;
 }

 VAR_30 = FUNC_21(VAR_29->base + VAR_18);
 FUNC_13(VAR_28, "h/w version is 0x%x\n", VAR_30);


 FUNC_28(1, VAR_29->base + FUNC_2(31));
 if (FUNC_21(VAR_29->base + FUNC_2(31)) == 1)
  VAR_29->max_macs = 31;
 else
  VAR_29->max_macs = 7;

 FUNC_28(0, VAR_29->base + VAR_16);
 VAR_28->irq = FUNC_18(VAR_25, 0);
 if (VAR_28->irq == -VAR_4) {
  FUNC_12(VAR_28, "No irq resource\n");
  VAR_26 = VAR_28->irq;
  goto err_irq;
 }

 VAR_26 = FUNC_24(VAR_28->irq, VAR_20, 0,
     FUNC_4(&VAR_25->dev), VAR_28);
 if (VAR_26 < 0) {
  FUNC_12(VAR_28, "Could not request irq %d - ret %d)\n",
   VAR_28->irq, VAR_26);
  goto err_irq;
 }

 VAR_29->pmt_irq = FUNC_18(VAR_25, 1);
 if (VAR_29->pmt_irq == -VAR_4) {
  FUNC_12(VAR_28, "No pmt irq resource\n");
  VAR_26 = VAR_29->pmt_irq;
  goto err_pmt_irq;
 }

 VAR_26 = FUNC_24(VAR_29->pmt_irq, VAR_22, 0,
     FUNC_4(&VAR_25->dev), VAR_28);
 if (VAR_26 < 0) {
  FUNC_12(VAR_28, "Could not request irq %d - ret %d)\n",
   VAR_29->pmt_irq, VAR_26);
  goto err_pmt_irq;
 }

 FUNC_6(&VAR_25->dev, 1);
 if (FUNC_5(VAR_29->device))
  VAR_29->wolopts = VAR_14;

 VAR_28->hw_features = VAR_13 | VAR_9;
 if (FUNC_21(VAR_29->base + VAR_15) & VAR_0)
  VAR_28->hw_features |= VAR_11 | VAR_10 |
         VAR_12;
 VAR_28->features |= VAR_28->hw_features;
 VAR_28->priv_flags |= VAR_7;


 VAR_28->min_mtu = VAR_6 - VAR_5;
 VAR_28->max_mtu = VAR_17;


 FUNC_29(VAR_29->base, VAR_28->dev_addr, 0);
 if (!FUNC_11(VAR_28->dev_addr))
  FUNC_15(VAR_28, "MAC address %pM not valid",
    VAR_28->dev_addr);

 FUNC_16(VAR_28, &VAR_29->napi, VAR_23, 64);
 VAR_26 = FUNC_22(VAR_28);
 if (VAR_26)
  goto err_reg;

 return 0;

err_reg:
 FUNC_17(&VAR_29->napi);
 FUNC_7(VAR_29->pmt_irq, VAR_28);
err_pmt_irq:
 FUNC_7(VAR_28->irq, VAR_28);
err_irq:
 FUNC_10(VAR_29->base);
err_io:
 FUNC_8(VAR_28);
err_alloc:
 FUNC_23(VAR_27->start, FUNC_26(VAR_27));
 return VAR_26;
}
