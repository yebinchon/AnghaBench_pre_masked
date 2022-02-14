
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct temac_local {void const* regs; int temac_features; void const* sdma_regs; int rx_irq; int tx_irq; int tx_chnl_ctrl; int rx_chnl_ctrl; void const* phy_node; TYPE_2__* dev; struct net_device* ndev; int phy_interface; int phy_name; TYPE_1__* mii_bus; void* dma_out; void* dma_in; int temac_iow; int temac_ior; int * indirect_lock; int rx_lock; int options; } ;
struct resource {int start; } ;
struct TYPE_13__ {int kobj; } ;
struct platform_device {TYPE_2__ dev; } ;
struct net_device {int features; int * ethtool_ops; int * netdev_ops; } ;
struct ll_temac_platform_data {int reg_little_endian; int tx_irq_timeout; int tx_irq_count; int rx_irq_timeout; int rx_irq_count; void const* mac_addr; int phy_interface; int phy_addr; scalar_t__ dma_little_endian; scalar_t__ rxcsum; scalar_t__ txcsum; int * indirect_lock; } ;
typedef void const device_node ;
typedef int __be32 ;
struct TYPE_12__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void const*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 char* VAR_18 ;
 int FUNC_1 (void const*) ;
 int FUNC_2 (struct net_device*,TYPE_2__*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*,void const*) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 struct ll_temac_platform_data* FUNC_6 (TYPE_2__*) ;
 void const* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 struct net_device* FUNC_9 (TYPE_2__*,int) ;
 void* FUNC_10 (TYPE_2__*,int ,int ) ;
 int * FUNC_11 (TYPE_2__*,int,int ) ;
 void const* FUNC_12 (TYPE_2__*,void const*,int ,int *) ;
 void* FUNC_13 (void const*,int) ;
 struct temac_local* FUNC_14 (struct net_device*) ;
 void* FUNC_15 (void const*) ;
 scalar_t__ FUNC_16 (void const*,char*,int *) ;
 int FUNC_17 (void const*) ;
 void* FUNC_18 (void const*,char*,int ) ;
 void* FUNC_19 (struct platform_device*,int) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int) ;
 int FUNC_21 (struct platform_device*,struct net_device*) ;
 int FUNC_22 (struct net_device*) ;
 int FUNC_23 (struct resource*) ;
 int FUNC_24 (int ,int,char*,int ,int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *,int *) ;
 int FUNC_27 (int *,int *) ;
 int VAR_26 ;
 scalar_t__ FUNC_28 (struct temac_local*,struct platform_device*,void const*) ;
 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 int VAR_31 ;
 int FUNC_29 (struct net_device*,void const*) ;
 int FUNC_30 (struct temac_local*,struct platform_device*) ;
 int FUNC_31 (struct temac_local*) ;
 int VAR_32 ;

__attribute__((used)) static int FUNC_32(struct platform_device *VAR_33)
{
 struct ll_temac_platform_data *VAR_34 = FUNC_6(&VAR_33->dev);
 struct device_node *VAR_35 = FUNC_7(&VAR_33->dev), *VAR_36;
 struct temac_local *VAR_37;
 struct net_device *VAR_38;
 struct resource *VAR_39;
 const void *VAR_40;
 __be32 *VAR_41;
 bool VAR_42;
 int VAR_43 = 0;


 VAR_38 = FUNC_9(&VAR_33->dev, sizeof(*VAR_37));
 if (!VAR_38)
  return -VAR_2;

 FUNC_21(VAR_33, VAR_38);
 FUNC_2(VAR_38, &VAR_33->dev);
 VAR_38->features = VAR_16;
 VAR_38->netdev_ops = &VAR_32;
 VAR_38->ethtool_ops = &VAR_31;
 VAR_37 = FUNC_14(VAR_38);
 VAR_37->ndev = VAR_38;
 VAR_37->dev = &VAR_33->dev;
 VAR_37->options = VAR_21;
 FUNC_25(&VAR_37->rx_lock);


 if (VAR_34) {
  if (!VAR_34->indirect_lock) {
   FUNC_5(&VAR_33->dev,
    "indirect_lock missing in platform_data\n");
   return -VAR_0;
  }
  VAR_37->indirect_lock = VAR_34->indirect_lock;
 } else {
  VAR_37->indirect_lock = FUNC_11(&VAR_33->dev,
       sizeof(*VAR_37->indirect_lock),
       VAR_4);
  FUNC_25(VAR_37->indirect_lock);
 }


 VAR_39 = FUNC_20(VAR_33, VAR_5, 0);
 VAR_37->regs = FUNC_10(&VAR_33->dev, VAR_39->start,
     FUNC_23(VAR_39));
 if (FUNC_0(VAR_37->regs)) {
  FUNC_5(&VAR_33->dev, "could not map TEMAC registers\n");
  return FUNC_1(VAR_37->regs);
 }




 VAR_42 = 0;
 if (VAR_35) {
  if (FUNC_16(VAR_35, "little-endian", ((void*)0)))
   VAR_42 = 1;
 } else if (VAR_34) {
  VAR_42 = VAR_34->reg_little_endian;
 }
 if (VAR_42) {
  VAR_37->temac_ior = VAR_23;
  VAR_37->temac_iow = VAR_25;
 } else {
  VAR_37->temac_ior = VAR_22;
  VAR_37->temac_iow = VAR_24;
 }


 VAR_37->temac_features = 0;
 if (VAR_35) {
  VAR_41 = (__be32 *)FUNC_16(VAR_35, "xlnx,txcsum", ((void*)0));
  if (VAR_41 && FUNC_3(*VAR_41))
   VAR_37->temac_features |= VAR_20;
  VAR_41 = (__be32 *)FUNC_16(VAR_35, "xlnx,rxcsum", ((void*)0));
  if (VAR_41 && FUNC_3(*VAR_41))
   VAR_37->temac_features |= VAR_19;
 } else if (VAR_34) {
  if (VAR_34->txcsum)
   VAR_37->temac_features |= VAR_20;
  if (VAR_34->rxcsum)
   VAR_37->temac_features |= VAR_19;
 }
 if (VAR_37->temac_features & VAR_20)

  VAR_38->features |= VAR_13;


 if (VAR_35) {



  VAR_36 = FUNC_18(VAR_35, "llink-connected", 0);
  if (!VAR_36) {
   FUNC_5(&VAR_33->dev, "could not find DMA node\n");
   return -VAR_1;
  }




  if (FUNC_28(VAR_37, VAR_33, VAR_36)) {

   VAR_37->sdma_regs = FUNC_12(&VAR_33->dev, VAR_36, 0,
            ((void*)0));
   if (FUNC_0(VAR_37->sdma_regs)) {
    FUNC_5(&VAR_33->dev,
     "unable to map DMA registers\n");
    FUNC_17(VAR_36);
    return FUNC_1(VAR_37->sdma_regs);
   }
   if (FUNC_16(VAR_36, "little-endian", ((void*)0))) {
    VAR_37->dma_in = VAR_28;
    VAR_37->dma_out = VAR_30;
   } else {
    VAR_37->dma_in = VAR_27;
    VAR_37->dma_out = VAR_29;
   }
   FUNC_4(&VAR_33->dev, "MEM base: %p\n", VAR_37->sdma_regs);
  }


  VAR_37->rx_irq = FUNC_13(VAR_36, 0);
  VAR_37->tx_irq = FUNC_13(VAR_36, 1);





  VAR_37->tx_chnl_ctrl = 0x10220000;
  VAR_37->rx_chnl_ctrl = 0xff070000;


  FUNC_17(VAR_36);
 } else if (VAR_34) {

  VAR_39 = FUNC_20(VAR_33, VAR_5, 1);
  VAR_37->sdma_regs = FUNC_10(&VAR_33->dev, VAR_39->start,
           FUNC_23(VAR_39));
  if (FUNC_0(VAR_37->sdma_regs)) {
   FUNC_5(&VAR_33->dev,
    "could not map DMA registers\n");
   return FUNC_1(VAR_37->sdma_regs);
  }
  if (VAR_34->dma_little_endian) {
   VAR_37->dma_in = VAR_28;
   VAR_37->dma_out = VAR_30;
  } else {
   VAR_37->dma_in = VAR_27;
   VAR_37->dma_out = VAR_29;
  }


  VAR_37->rx_irq = FUNC_19(VAR_33, 0);
  VAR_37->tx_irq = FUNC_19(VAR_33, 1);


  if (VAR_34->tx_irq_timeout || VAR_34->tx_irq_count)
   VAR_37->tx_chnl_ctrl = (VAR_34->tx_irq_timeout << 24) |
    (VAR_34->tx_irq_count << 16);
  else
   VAR_37->tx_chnl_ctrl = 0x10220000;
  if (VAR_34->rx_irq_timeout || VAR_34->rx_irq_count)
   VAR_37->rx_chnl_ctrl = (VAR_34->rx_irq_timeout << 24) |
    (VAR_34->rx_irq_count << 16);
  else
   VAR_37->rx_chnl_ctrl = 0xff070000;
 }


 if (VAR_37->rx_irq < 0) {
  if (VAR_37->rx_irq != -VAR_3)
   FUNC_5(&VAR_33->dev, "could not get DMA RX irq\n");
  return VAR_37->rx_irq;
 }
 if (VAR_37->tx_irq < 0) {
  if (VAR_37->tx_irq != -VAR_3)
   FUNC_5(&VAR_33->dev, "could not get DMA TX irq\n");
  return VAR_37->tx_irq;
 }

 if (VAR_35) {

  VAR_40 = FUNC_15(VAR_35);
  if (FUNC_0(VAR_40)) {
   FUNC_5(&VAR_33->dev, "could not find MAC address\n");
   return -VAR_1;
  }
  FUNC_29(VAR_38, VAR_40);
 } else if (VAR_34) {
  FUNC_29(VAR_38, VAR_34->mac_addr);
 }

 VAR_43 = FUNC_30(VAR_37, VAR_33);
 if (VAR_43)
  FUNC_8(&VAR_33->dev, "error registering MDIO bus\n");

 if (VAR_35) {
  VAR_37->phy_node = FUNC_18(VAR_35, "phy-handle", 0);
  if (VAR_37->phy_node)
   FUNC_4(VAR_37->dev, "using PHY node %pOF\n", VAR_35);
 } else if (VAR_34) {
  FUNC_24(VAR_37->phy_name, sizeof(VAR_37->phy_name),
    VAR_18, VAR_37->mii_bus->id, VAR_34->phy_addr);
  VAR_37->phy_interface = VAR_34->phy_interface;
 }


 VAR_43 = FUNC_26(&VAR_37->dev->kobj, &VAR_26);
 if (VAR_43) {
  FUNC_5(VAR_37->dev, "Error creating sysfs files\n");
  goto err_sysfs_create;
 }

 VAR_43 = FUNC_22(VAR_37->ndev);
 if (VAR_43) {
  FUNC_5(VAR_37->dev, "register_netdev() error (%i)\n", VAR_43);
  goto err_register_ndev;
 }

 return 0;

err_register_ndev:
 FUNC_27(&VAR_37->dev->kobj, &VAR_26);
err_sysfs_create:
 if (VAR_37->phy_node)
  FUNC_17(VAR_37->phy_node);
 FUNC_31(VAR_37);
 return VAR_43;
}
