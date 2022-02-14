
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; } ;
struct net_device {int dev_addr; int * netdev_ops; int * ethtool_ops; } ;
struct TYPE_2__ {int phy_id_mask; int reg_num_mask; int mdio_write; int mdio_read; struct net_device* dev; scalar_t__ phy_id; } ;
struct ftmac100 {int irq; int napi; int res; int base; TYPE_1__ mii; int tx_lock; int * dev; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct net_device*,char*,int,...) ;
 struct ftmac100* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*,int *,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (struct resource*) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_10)
{
 struct resource *VAR_11;
 int VAR_12;
 struct net_device *VAR_13;
 struct ftmac100 *VAR_14;
 int VAR_15;

 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_14(VAR_10, VAR_4, 0);
 if (!VAR_11)
  return -VAR_3;

 VAR_12 = FUNC_13(VAR_10, 0);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_13 = FUNC_1(sizeof(*VAR_14));
 if (!VAR_13) {
  VAR_15 = -VAR_2;
  goto err_alloc_etherdev;
 }

 FUNC_0(VAR_13, &VAR_10->dev);
 VAR_13->ethtool_ops = &VAR_5;
 VAR_13->netdev_ops = &VAR_8;

 FUNC_15(VAR_10, VAR_13);


 VAR_14 = FUNC_10(VAR_13);
 VAR_14->netdev = VAR_13;
 VAR_14->dev = &VAR_10->dev;

 FUNC_20(&VAR_14->tx_lock);


 FUNC_11(VAR_13, &VAR_14->napi, VAR_9, 64);


 VAR_14->res = FUNC_18(VAR_11->start, FUNC_19(VAR_11),
           FUNC_3(&VAR_10->dev));
 if (!VAR_14->res) {
  FUNC_2(&VAR_10->dev, "Could not reserve memory region\n");
  VAR_15 = -VAR_2;
  goto err_req_mem;
 }

 VAR_14->base = FUNC_6(VAR_11->start, FUNC_19(VAR_11));
 if (!VAR_14->base) {
  FUNC_2(&VAR_10->dev, "Failed to ioremap ethernet registers\n");
  VAR_15 = -VAR_0;
  goto err_ioremap;
 }

 VAR_14->irq = VAR_12;


 VAR_14->mii.phy_id = 0;
 VAR_14->mii.phy_id_mask = 0x1f;
 VAR_14->mii.reg_num_mask = 0x1f;
 VAR_14->mii.dev = VAR_13;
 VAR_14->mii.mdio_read = VAR_6;
 VAR_14->mii.mdio_write = VAR_7;


 VAR_15 = FUNC_16(VAR_13);
 if (VAR_15) {
  FUNC_2(&VAR_10->dev, "Failed to register netdev\n");
  goto err_register_netdev;
 }

 FUNC_9(VAR_13, "irq %d, mapped at %p\n", VAR_14->irq, VAR_14->base);

 if (!FUNC_8(VAR_13->dev_addr)) {
  FUNC_4(VAR_13);
  FUNC_9(VAR_13, "generated random MAC address %pM\n",
       VAR_13->dev_addr);
 }

 return 0;

err_register_netdev:
 FUNC_7(VAR_14->base);
err_ioremap:
 FUNC_17(VAR_14->res);
err_req_mem:
 FUNC_12(&VAR_14->napi);
 FUNC_5(VAR_13);
err_alloc_etherdev:
 return VAR_15;
}
