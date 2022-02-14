
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u32 ;
struct resource {scalar_t__ start; } ;
struct ravb_private {int emac_irq; int* rx_irqs; int* tx_irqs; int chip_id; int desc_bat_size; int desc_bat_dma; TYPE_7__* desc_bat; int * napi; int msg_enable; int ts_skb_list; int num_tx_desc; int clk; void* avb_link_active_low; void* no_avb_link; int phy_interface; int work; int lock; int addr; int * num_rx_ring; int * num_tx_ring; struct platform_device* pdev; struct net_device* ndev; } ;
struct ravb_desc {int dummy; } ;
struct TYPE_16__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_15__ {int parent; } ;
struct net_device {int irq; TYPE_1__ dev; int dev_addr; scalar_t__ base_addr; int * ethtool_ops; int * netdev_ops; int min_mtu; scalar_t__ max_mtu; void* hw_features; void* features; } ;
struct device_node {int dummy; } ;
typedef enum ravb_chip_id { ____Placeholder_ravb_chip_id } ravb_chip_id ;
struct TYPE_17__ {int die_dt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (int ) ;
 size_t VAR_21 ;
 int VAR_22 ;
 size_t VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_4 (struct net_device*,TYPE_2__*) ;
 scalar_t__ VAR_26 ;
 struct net_device* FUNC_5 (int,int,int) ;
 int FUNC_6 (TYPE_2__*,char*,...) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_2__*,struct resource*) ;
 TYPE_7__* FUNC_11 (int ,int,int *,int ) ;
 int FUNC_12 (int ,int,TYPE_7__*,int ) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct net_device*,char*,int ,int ,int) ;
 struct ravb_private* FUNC_17 (struct net_device*) ;
 int FUNC_18 (struct net_device*,int *,int ,int) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (struct device_node*) ;
 int FUNC_22 (struct device_node*) ;
 void* FUNC_23 (struct device_node*,char*) ;
 int FUNC_24 (struct platform_device*,int ) ;
 int FUNC_25 (struct platform_device*,char*) ;
 struct resource* FUNC_26 (struct platform_device*,int ,int ) ;
 int FUNC_27 (struct platform_device*,struct net_device*) ;
 int FUNC_28 (TYPE_2__*) ;
 int FUNC_29 (TYPE_2__*) ;
 int FUNC_30 (TYPE_2__*) ;
 int FUNC_31 (TYPE_2__*) ;
 int VAR_27 ;
 int FUNC_32 (struct ravb_private*) ;
 int FUNC_33 (struct ravb_private*) ;
 int FUNC_34 (struct net_device*,int ,int ,int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_35 (struct net_device*,struct platform_device*) ;
 int FUNC_36 (struct net_device*) ;
 int FUNC_37 (struct net_device*,int ) ;
 char** VAR_30 ;
 int FUNC_38 (struct net_device*) ;
 int FUNC_39 (struct net_device*) ;
 int FUNC_40 (struct net_device*) ;
 char** VAR_31 ;
 int VAR_32 ;
 int FUNC_41 (struct net_device*,int ,int ) ;
 int FUNC_42 (struct net_device*) ;
 int FUNC_43 (int *) ;

__attribute__((used)) static int FUNC_44(struct platform_device *VAR_33)
{
 struct device_node *VAR_34 = VAR_33->dev.of_node;
 struct ravb_private *VAR_35;
 enum ravb_chip_id VAR_36;
 struct net_device *VAR_37;
 int VAR_38, VAR_39, VAR_40;
 struct resource *VAR_41;
 int VAR_42;

 if (!VAR_34) {
  FUNC_6(&VAR_33->dev,
   "this driver is required to be instantiated from device tree\n");
  return -VAR_5;
 }


 VAR_41 = FUNC_26(VAR_33, VAR_13, 0);
 if (!VAR_41) {
  FUNC_6(&VAR_33->dev, "invalid resource\n");
  return -VAR_5;
 }

 VAR_37 = FUNC_5(sizeof(struct ravb_private),
      VAR_20, VAR_17);
 if (!VAR_37)
  return -VAR_6;

 VAR_37->features = VAR_16;
 VAR_37->hw_features = VAR_16;

 FUNC_29(&VAR_33->dev);
 FUNC_30(&VAR_33->dev);


 VAR_37->base_addr = VAR_41->start;

 VAR_36 = (enum ravb_chip_id)FUNC_20(&VAR_33->dev);

 if (VAR_36 == VAR_25)
  VAR_39 = FUNC_25(VAR_33, "ch22");
 else
  VAR_39 = FUNC_24(VAR_33, 0);
 if (VAR_39 < 0) {
  VAR_38 = VAR_39;
  goto out_release;
 }
 VAR_37->irq = VAR_39;

 FUNC_4(VAR_37, &VAR_33->dev);

 VAR_35 = FUNC_17(VAR_37);
 VAR_35->ndev = VAR_37;
 VAR_35->pdev = VAR_33;
 VAR_35->num_tx_ring[VAR_21] = VAR_1;
 VAR_35->num_rx_ring[VAR_21] = VAR_0;
 VAR_35->num_tx_ring[VAR_23] = VAR_15;
 VAR_35->num_rx_ring[VAR_23] = VAR_14;
 VAR_35->addr = FUNC_10(&VAR_33->dev, VAR_41);
 if (FUNC_2(VAR_35->addr)) {
  VAR_38 = FUNC_3(VAR_35->addr);
  goto out_release;
 }

 FUNC_43(&VAR_35->lock);
 FUNC_1(&VAR_35->work, VAR_32);

 VAR_35->phy_interface = FUNC_22(VAR_34);

 VAR_35->no_avb_link = FUNC_23(VAR_34, "renesas,no-ether-link");
 VAR_35->avb_link_active_low =
  FUNC_23(VAR_34, "renesas,ether-link-active-low");

 if (VAR_36 == VAR_25) {
  VAR_39 = FUNC_25(VAR_33, "ch24");
  if (VAR_39 < 0) {
   VAR_38 = VAR_39;
   goto out_release;
  }
  VAR_35->emac_irq = VAR_39;
  for (VAR_42 = 0; VAR_42 < VAR_17; VAR_42++) {
   VAR_39 = FUNC_25(VAR_33, VAR_30[VAR_42]);
   if (VAR_39 < 0) {
    VAR_38 = VAR_39;
    goto out_release;
   }
   VAR_35->rx_irqs[VAR_42] = VAR_39;
  }
  for (VAR_42 = 0; VAR_42 < VAR_20; VAR_42++) {
   VAR_39 = FUNC_25(VAR_33, VAR_31[VAR_42]);
   if (VAR_39 < 0) {
    VAR_38 = VAR_39;
    goto out_release;
   }
   VAR_35->tx_irqs[VAR_42] = VAR_39;
  }
 }

 VAR_35->chip_id = VAR_36;

 VAR_35->clk = FUNC_9(&VAR_33->dev, ((void*)0));
 if (FUNC_2(VAR_35->clk)) {
  VAR_38 = FUNC_3(VAR_35->clk);
  goto out_release;
 }

 VAR_37->max_mtu = 2048 - (VAR_8 + VAR_26 + VAR_7);
 VAR_37->min_mtu = VAR_9;

 VAR_35->num_tx_desc = VAR_36 == VAR_24 ?
  VAR_18 : VAR_19;


 VAR_37->netdev_ops = &VAR_28;
 VAR_37->ethtool_ops = &VAR_27;


 FUNC_38(VAR_37);


 VAR_38 = FUNC_40(VAR_37);
 if (VAR_38)
  goto out_release;


 FUNC_34(VAR_37, VAR_10, VAR_11, VAR_11);

 if (VAR_35->chip_id != VAR_24)
  FUNC_39(VAR_37);


 VAR_35->desc_bat_size = sizeof(struct ravb_desc) * VAR_3;
 VAR_35->desc_bat = FUNC_11(VAR_37->dev.parent, VAR_35->desc_bat_size,
         &VAR_35->desc_bat_dma, VAR_12);
 if (!VAR_35->desc_bat) {
  FUNC_6(&VAR_33->dev,
   "Cannot allocate desc base address table (size %d bytes)\n",
   VAR_35->desc_bat_size);
  VAR_38 = -VAR_6;
  goto out_release;
 }
 for (VAR_40 = VAR_21; VAR_40 < VAR_3; VAR_40++)
  VAR_35->desc_bat[VAR_40].die_dt = VAR_4;
 FUNC_41(VAR_37, VAR_35->desc_bat_dma, VAR_2);


 FUNC_0(&VAR_35->ts_skb_list);


 if (VAR_36 != VAR_24)
  FUNC_35(VAR_37, VAR_33);


 VAR_35->msg_enable = VAR_22;


 FUNC_37(VAR_37, FUNC_21(VAR_34));
 if (!FUNC_15(VAR_37->dev_addr)) {
  FUNC_7(&VAR_33->dev,
    "no valid MAC address supplied, using a random one\n");
  FUNC_13(VAR_37);
 }


 VAR_38 = FUNC_32(VAR_35);
 if (VAR_38) {
  FUNC_6(&VAR_33->dev, "failed to initialize MDIO\n");
  goto out_dma_free;
 }

 FUNC_18(VAR_37, &VAR_35->napi[VAR_21], VAR_29, 64);
 FUNC_18(VAR_37, &VAR_35->napi[VAR_23], VAR_29, 64);


 VAR_38 = FUNC_42(VAR_37);
 if (VAR_38)
  goto out_napi_del;

 FUNC_8(&VAR_33->dev, 1);


 FUNC_16(VAR_37, "Base address at %#x, %pM, IRQ %d.\n",
      (u32)VAR_37->base_addr, VAR_37->dev_addr, VAR_37->irq);

 FUNC_27(VAR_33, VAR_37);

 return 0;

out_napi_del:
 FUNC_19(&VAR_35->napi[VAR_23]);
 FUNC_19(&VAR_35->napi[VAR_21]);
 FUNC_33(VAR_35);
out_dma_free:
 FUNC_12(VAR_37->dev.parent, VAR_35->desc_bat_size, VAR_35->desc_bat,
     VAR_35->desc_bat_dma);


 if (VAR_36 != VAR_24)
  FUNC_36(VAR_37);
out_release:
 FUNC_14(VAR_37);

 FUNC_31(&VAR_33->dev);
 FUNC_28(&VAR_33->dev);
 return VAR_38;
}
