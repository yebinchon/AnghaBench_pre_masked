
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssb_device_id {int dummy; } ;
struct ssb_device {int bus; int dev; int dma_dev; int irq; } ;
struct net_device {int dev_addr; int * ethtool_ops; int irq; int max_mtu; int min_mtu; int watchdog_timeo; int * netdev_ops; int features; } ;
struct TYPE_4__ {scalar_t__ phy_id; int phy_id_mask; int reg_num_mask; int mdio_write; int mdio_read; struct net_device* dev; } ;
struct TYPE_3__ {int syncp; } ;
struct b44 {scalar_t__ phy_addr; int flags; int napi; TYPE_2__ mii_if; int tx_pending; int rx_pending; TYPE_1__ hw_stats; int lock; int msg_enable; scalar_t__ force_copybreak; struct net_device* dev; struct ssb_device* sdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct net_device*,int ) ;
 struct net_device* FUNC_2 (int) ;
 int FUNC_3 (struct b44*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (struct b44*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_5 (struct b44*) ;
 int VAR_23 ;
 int FUNC_6 (struct b44*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (struct net_device*) ;
 int VAR_24 ;
 int FUNC_11 (struct net_device*,char*,int ,int ) ;
 struct b44* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (struct net_device*,int *,int ,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*,int ,int ) ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (struct ssb_device*,struct net_device*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct net_device*) ;

__attribute__((used)) static int FUNC_25(struct ssb_device *VAR_25,
   const struct ssb_device_id *VAR_26)
{
 struct net_device *VAR_27;
 struct b44 *VAR_28;
 int VAR_29;

 VAR_24++;

 FUNC_17("%s version %s\n", VAR_14, VAR_15);

 VAR_27 = FUNC_2(sizeof(*VAR_28));
 if (!VAR_27) {
  VAR_29 = -VAR_17;
  goto out;
 }

 FUNC_1(VAR_27, VAR_25->dev);


 VAR_27->features |= 0;

 VAR_28 = FUNC_12(VAR_27);
 VAR_28->sdev = VAR_25;
 VAR_28->dev = VAR_27;
 VAR_28->force_copybreak = 0;

 VAR_28->msg_enable = FUNC_14(VAR_18, VAR_1);

 FUNC_19(&VAR_28->lock);
 FUNC_23(&VAR_28->hw_stats.syncp);

 VAR_28->rx_pending = VAR_2;
 VAR_28->tx_pending = VAR_3;

 VAR_27->netdev_ops = &VAR_22;
 FUNC_15(VAR_27, &VAR_28->napi, VAR_23, 64);
 VAR_27->watchdog_timeo = VAR_13;
 VAR_27->min_mtu = VAR_11;
 VAR_27->max_mtu = VAR_10;
 VAR_27->irq = VAR_25->irq;
 VAR_27->ethtool_ops = &VAR_19;

 VAR_29 = FUNC_21(VAR_25->bus, 0);
 if (VAR_29) {
  FUNC_7(VAR_25->dev,
   "Failed to powerup the bus\n");
  goto err_out_free_dev;
 }

 if (FUNC_9(VAR_25->dma_dev, FUNC_0(30))) {
  FUNC_7(VAR_25->dev,
   "Required 30BIT DMA mask unsupported by the system\n");
  goto err_out_powerdown;
 }

 VAR_29 = FUNC_4(VAR_28);
 if (VAR_29) {
  FUNC_7(VAR_25->dev,
   "Problem fetching invariants of chip, aborting\n");
  goto err_out_powerdown;
 }

 if (VAR_28->phy_addr == VAR_12) {
  FUNC_7(VAR_25->dev, "No PHY present on this MAC, aborting\n");
  VAR_29 = -VAR_16;
  goto err_out_powerdown;
 }

 VAR_28->mii_if.dev = VAR_27;
 VAR_28->mii_if.mdio_read = VAR_20;
 VAR_28->mii_if.mdio_write = VAR_21;
 VAR_28->mii_if.phy_id = VAR_28->phy_addr;
 VAR_28->mii_if.phy_id_mask = 0x1f;
 VAR_28->mii_if.reg_num_mask = 0x1f;


 VAR_28->flags |= (VAR_7 | VAR_6 |
        VAR_5 | VAR_4);


 VAR_28->flags |= VAR_9;

 VAR_29 = FUNC_18(VAR_27);
 if (VAR_29) {
  FUNC_7(VAR_25->dev, "Cannot register net device, aborting\n");
  goto err_out_powerdown;
 }

 FUNC_13(VAR_27);

 FUNC_22(VAR_25, VAR_27);




 FUNC_3(VAR_28, VAR_0);


 VAR_29 = FUNC_5(VAR_28);
 if (VAR_29 < 0) {
  FUNC_7(VAR_25->dev, "phy reset failed\n");
  goto err_out_unregister_netdev;
 }

 if (VAR_28->flags & VAR_8) {
  VAR_29 = FUNC_6(VAR_28);
  if (VAR_29) {
   FUNC_7(VAR_25->dev, "Cannot register PHY, aborting\n");
   goto err_out_unregister_netdev;
  }
 }

 FUNC_8(VAR_25->dev, 1);
 FUNC_11(VAR_27, "%s %pM\n", VAR_14, VAR_27->dev_addr);

 return 0;

err_out_unregister_netdev:
 FUNC_24(VAR_27);
err_out_powerdown:
 FUNC_20(VAR_25->bus);

err_out_free_dev:
 FUNC_16(&VAR_28->napi);
 FUNC_10(VAR_27);

out:
 return VAR_29;
}
