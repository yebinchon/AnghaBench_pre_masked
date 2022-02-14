
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; int hw_features; int vlan_features; int phydev; int dev_addr; int irq; } ;
struct bgmac {int feature_flags; int int_mask; int dev; struct net_device* net_dev; int napi; int irq; } ;


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
 int FUNC_0 (struct net_device*,int ) ;
 scalar_t__ FUNC_1 (char*,int *,int ) ;
 int FUNC_2 (struct bgmac*) ;
 int FUNC_3 (struct bgmac*) ;
 int FUNC_4 (struct bgmac*,int ) ;
 int FUNC_5 (struct bgmac*) ;
 int FUNC_6 (struct bgmac*) ;
 int FUNC_7 (struct bgmac*,int ,int) ;
 int FUNC_8 (struct bgmac*) ;
 int VAR_10 ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int ,struct bgmac*) ;
 int FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*,int *,int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct net_device*) ;

int FUNC_18(struct bgmac *VAR_11)
{
 struct net_device *VAR_12 = VAR_11->net_dev;
 int VAR_13;

 FUNC_2(VAR_11);

 VAR_12->irq = VAR_11->irq;
 FUNC_0(VAR_12, VAR_11->dev);
 FUNC_10(VAR_11->dev, VAR_11);

 if (!FUNC_13(VAR_12->dev_addr)) {
  FUNC_9(VAR_11->dev, "Invalid MAC addr: %pM\n",
   VAR_12->dev_addr);
  FUNC_12(VAR_12);
  FUNC_11(VAR_11->dev, "Using random MAC: %pM\n",
    VAR_12->dev_addr);
 }




 FUNC_4(VAR_11, 0);


 if (!(VAR_11->feature_flags & VAR_1)) {
  if (VAR_11->feature_flags & VAR_2)
   FUNC_7(VAR_11, VAR_0, 0x86);
 }

 FUNC_3(VAR_11);

 VAR_13 = FUNC_5(VAR_11);
 if (VAR_13) {
  FUNC_9(VAR_11->dev, "Unable to alloc memory for DMA\n");
  goto err_out;
 }

 VAR_11->int_mask = VAR_3 | VAR_4 | VAR_5;
 if (FUNC_1("et0_no_txint", ((void*)0), 0) == 0)
  VAR_11->int_mask &= ~VAR_5;

 FUNC_15(VAR_12, &VAR_11->napi, VAR_10, VAR_6);

 VAR_13 = FUNC_8(VAR_11);
 if (VAR_13) {
  FUNC_9(VAR_11->dev, "Cannot connect to phy\n");
  goto err_dma_free;
 }

 VAR_12->features = VAR_9 | VAR_8 | VAR_7;
 VAR_12->hw_features = VAR_12->features;
 VAR_12->vlan_features = VAR_12->features;

 VAR_13 = FUNC_17(VAR_11->net_dev);
 if (VAR_13) {
  FUNC_9(VAR_11->dev, "Cannot register net device\n");
  goto err_phy_disconnect;
 }

 FUNC_14(VAR_12);

 return 0;

err_phy_disconnect:
 FUNC_16(VAR_12->phydev);
err_dma_free:
 FUNC_6(VAR_11);
err_out:

 return VAR_13;
}
