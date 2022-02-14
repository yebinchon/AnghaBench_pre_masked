
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; } ;
struct platform_device {int dev; } ;
struct phy_device {int dummy; } ;
struct net_device {unsigned int irq; unsigned long base_addr; struct phy_device* phydev; int dev_addr; int * ethtool_ops; int * netdev_ops; int features; } ;
struct dnet {int capabilities; scalar_t__ regs; int napi; int lock; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct net_device*,int *) ;
 int VAR_8 ;
 int FUNC_3 (struct dnet*) ;
 struct net_device* FUNC_4 (int) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,char*,char*,...) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,struct resource*) ;
 int VAR_9 ;
 int FUNC_9 (struct dnet*) ;
 int VAR_10 ;
 int FUNC_10 (struct dnet*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (struct dnet*,int ) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (unsigned int,struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (int ) ;
 struct dnet* FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct net_device*,int *,int ,int) ;
 int FUNC_18 (struct phy_device*) ;
 int FUNC_19 (int,int,int ) ;
 unsigned int FUNC_20 (struct platform_device*,int ) ;
 struct resource* FUNC_21 (struct platform_device*,int ,int ) ;
 int FUNC_22 (struct platform_device*,struct net_device*) ;
 int FUNC_23 (struct net_device*) ;
 int FUNC_24 (unsigned int,int ,int ,int ,struct net_device*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct net_device*) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_14)
{
 struct resource *VAR_15;
 struct net_device *VAR_16;
 struct dnet *VAR_17;
 struct phy_device *VAR_18;
 int VAR_19;
 unsigned int VAR_20;

 VAR_20 = FUNC_20(VAR_14, 0);

 VAR_16 = FUNC_4(sizeof(*VAR_17));
 if (!VAR_16)
  return -VAR_6;


 VAR_16->features |= 0;

 VAR_17 = FUNC_16(VAR_16);
 VAR_17->dev = VAR_16;

 FUNC_22(VAR_14, VAR_16);
 FUNC_2(VAR_16, &VAR_14->dev);

 FUNC_25(&VAR_17->lock);

 VAR_15 = FUNC_21(VAR_14, VAR_7, 0);
 VAR_17->regs = FUNC_8(&VAR_14->dev, VAR_15);
 if (FUNC_0(VAR_17->regs)) {
  VAR_19 = FUNC_1(VAR_17->regs);
  goto err_out_free_dev;
 }

 VAR_16->irq = VAR_20;
 VAR_19 = FUNC_24(VAR_16->irq, VAR_10, 0, VAR_5, VAR_16);
 if (VAR_19) {
  FUNC_5(&VAR_14->dev, "Unable to request IRQ %d (error %d)\n",
         VAR_20, VAR_19);
  goto err_out_free_dev;
 }

 VAR_16->netdev_ops = &VAR_11;
 FUNC_17(VAR_16, &VAR_17->napi, VAR_13, 64);
 VAR_16->ethtool_ops = &VAR_9;

 VAR_16->base_addr = (unsigned long)VAR_17->regs;

 VAR_17->capabilities = FUNC_11(VAR_17, VAR_8) & VAR_0;

 FUNC_9(VAR_17);

 if (!FUNC_15(VAR_16->dev_addr)) {

  FUNC_12(VAR_16);
  FUNC_3(VAR_17);
 }

 VAR_19 = FUNC_23(VAR_16);
 if (VAR_19) {
  FUNC_5(&VAR_14->dev, "Cannot register net device, aborting.\n");
  goto err_out_free_irq;
 }


 VAR_19 = FUNC_19(0x01410cc0, 0xfffffff0,
      VAR_12);

 if (VAR_19)
  FUNC_7(&VAR_14->dev, "Cannot register PHY board fixup.\n");

 VAR_19 = FUNC_10(VAR_17);
 if (VAR_19)
  goto err_out_unregister_netdev;

 FUNC_6(&VAR_14->dev, "Dave DNET at 0x%p (0x%08x) irq %d %pM\n",
        VAR_17->regs, (unsigned int)VAR_15->start, VAR_16->irq, VAR_16->dev_addr);
 FUNC_6(&VAR_14->dev, "has %smdio, %sirq, %sgigabit, %sdma\n",
        (VAR_17->capabilities & VAR_4) ? "" : "no ",
        (VAR_17->capabilities & VAR_3) ? "" : "no ",
        (VAR_17->capabilities & VAR_2) ? "" : "no ",
        (VAR_17->capabilities & VAR_1) ? "" : "no ");
 VAR_18 = VAR_16->phydev;
 FUNC_18(VAR_18);

 return 0;

err_out_unregister_netdev:
 FUNC_26(VAR_16);
err_out_free_irq:
 FUNC_13(VAR_16->irq, VAR_16);
err_out_free_dev:
 FUNC_14(VAR_16);
 return VAR_19;
}
