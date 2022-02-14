
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {int enet_id; scalar_t__ phy_mode; scalar_t__ mdio_driver; int stats_lock; int link_work; TYPE_1__* mac_ops; int mss_lock; int mac_lock; struct net_device* ndev; struct platform_device* pdev; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct net_device {int features; int hw_features; int * netdev_ops; } ;
struct acpi_device_id {scalar_t__ driver_data; } ;
typedef enum xgene_enet_id { ____Placeholder_xgene_enet_id } xgene_enet_id ;
struct TYPE_2__ {void (* link_state ) (struct work_struct*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,void (*) (struct work_struct*)) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct net_device*,struct device*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct acpi_device_id* FUNC_3 (int ,struct device*) ;
 struct net_device* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (struct device*,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,char*) ;
 struct xgene_enet_pdata* FUNC_8 (struct net_device*) ;
 struct of_device_id* FUNC_9 (int ,struct device*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct platform_device*,struct xgene_enet_pdata*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int *) ;
 int VAR_11 ;
 int FUNC_14 (struct xgene_enet_pdata*) ;
 int FUNC_15 (struct xgene_enet_pdata*) ;
 int FUNC_16 (struct xgene_enet_pdata*) ;
 int FUNC_17 (struct xgene_enet_pdata*) ;
 int FUNC_18 (struct xgene_enet_pdata*) ;
 int FUNC_19 (struct xgene_enet_pdata*) ;
 int FUNC_20 (struct xgene_enet_pdata*) ;
 int VAR_12 ;
 int FUNC_21 (struct xgene_enet_pdata*) ;
 int FUNC_22 (struct net_device*) ;
 int FUNC_23 (struct xgene_enet_pdata*) ;
 int FUNC_24 (struct xgene_enet_pdata*) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_14)
{
 struct net_device *VAR_15;
 struct xgene_enet_pdata *VAR_16;
 struct device *VAR_17 = &VAR_14->dev;
 void (*VAR_18)(struct work_struct *);
 const struct of_device_id *VAR_19;
 int VAR_20;

 VAR_15 = FUNC_4(sizeof(struct xgene_enet_pdata),
      VAR_9, VAR_10);
 if (!VAR_15)
  return -VAR_1;

 VAR_16 = FUNC_8(VAR_15);

 VAR_16->pdev = VAR_14;
 VAR_16->ndev = VAR_15;
 FUNC_2(VAR_15, VAR_17);
 FUNC_11(VAR_14, VAR_16);
 VAR_15->netdev_ops = &VAR_13;
 FUNC_22(VAR_15);
 VAR_15->features |= VAR_4 |
     VAR_3 |
     VAR_2 |
     VAR_6;

 VAR_19 = FUNC_9(VAR_12, &VAR_14->dev);
 if (VAR_19) {
  VAR_16->enet_id = (enum xgene_enet_id)VAR_19->data;
 }
 if (!VAR_16->enet_id) {
  VAR_20 = -VAR_0;
  goto err;
 }

 VAR_20 = FUNC_16(VAR_16);
 if (VAR_20)
  goto err;

 FUNC_23(VAR_16);
 FUNC_13(&VAR_16->mac_lock);

 if (VAR_16->phy_mode == VAR_8) {
  VAR_15->features |= VAR_7 | VAR_5;
  FUNC_13(&VAR_16->mss_lock);
 }
 VAR_15->hw_features = VAR_15->features;

 VAR_20 = FUNC_5(VAR_17, FUNC_0(64));
 if (VAR_20) {
  FUNC_7(VAR_15, "No usable DMA configuration\n");
  goto err;
 }

 FUNC_14(VAR_16);

 VAR_20 = FUNC_17(VAR_16);
 if (VAR_20)
  goto err2;

 VAR_18 = VAR_16->mac_ops->link_state;
 if (VAR_16->phy_mode == VAR_8) {
  FUNC_1(&VAR_16->link_work, VAR_18);
 } else if (!VAR_16->mdio_driver) {
  if (FUNC_10(VAR_16->phy_mode))
   VAR_20 = FUNC_18(VAR_16);
  else
   FUNC_1(&VAR_16->link_work, VAR_18);

  if (VAR_20)
   goto err1;
 }

 FUNC_13(&VAR_16->stats_lock);
 VAR_20 = FUNC_24(VAR_16);
 if (VAR_20)
  goto err1;

 FUNC_20(VAR_16);
 VAR_20 = FUNC_12(VAR_15);
 if (VAR_20) {
  FUNC_7(VAR_15, "Failed to register netdev\n");
  goto err1;
 }

 return 0;

err1:





 FUNC_15(VAR_16);

err2:
 if (VAR_16->mdio_driver)
  FUNC_21(VAR_16);
 else if (FUNC_10(VAR_16->phy_mode))
  FUNC_19(VAR_16);
err:
 FUNC_6(VAR_15);
 return VAR_20;
}
