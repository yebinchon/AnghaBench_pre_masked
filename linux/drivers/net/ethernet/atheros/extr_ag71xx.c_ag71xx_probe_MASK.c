
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct resource {scalar_t__ start; } ;
struct TYPE_15__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct net_device {int min_mtu; int irq; int dev_addr; scalar_t__ max_mtu; int * netdev_ops; } ;
struct device_node {int dummy; } ;
struct ag71xx_desc {int dummy; } ;
struct ag71xx_dcfg {void const* fifodata; scalar_t__ max_frame_len; } ;
struct TYPE_14__ {void* order; int desc_split; } ;
struct TYPE_13__ {void* order; } ;
struct ag71xx {int mac_idx; void const* clk_eth; void const* mac_reset; int phy_if_mode; scalar_t__ mac_base; int napi; scalar_t__ stop_desc_dma; TYPE_4__* stop_desc; TYPE_2__ tx_ring; int rx_buf_offset; TYPE_1__ rx_ring; int oom_timer; int restart_work; int fifodata; int msg_enable; struct ag71xx_dcfg const* dcfg; struct net_device* ndev; struct platform_device* pdev; } ;
struct TYPE_16__ {scalar_t__ next; scalar_t__ ctrl; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (void const*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (void const*) ;
 int FUNC_4 (struct net_device*,TYPE_3__*) ;
 int FUNC_5 (struct ag71xx*) ;
 int VAR_17 ;
 scalar_t__ FUNC_6 (struct ag71xx*,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct ag71xx*) ;
 int FUNC_9 (struct ag71xx*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* FUNC_10 (int) ;
 int FUNC_11 (struct ag71xx*,int ,int ) ;
 scalar_t__* VAR_22 ;
 int FUNC_12 (void const*) ;
 int FUNC_13 (void const*) ;
 int FUNC_14 (TYPE_3__*) ;
 struct net_device* FUNC_15 (TYPE_3__*,int) ;
 void const* FUNC_16 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_17 (TYPE_3__*,scalar_t__,int ) ;
 int FUNC_18 (TYPE_3__*,int ,int ,int,int ,struct net_device*) ;
 void const* FUNC_19 (TYPE_3__*,char*) ;
 TYPE_4__* FUNC_20 (TYPE_3__*,int,scalar_t__*,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct net_device*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,void const*,int) ;
 struct ag71xx* FUNC_25 (struct net_device*) ;
 int FUNC_26 (struct ag71xx*,int ,struct net_device*,char*,...) ;
 int FUNC_27 (struct ag71xx*,int ,struct net_device*,char*,unsigned long,int ,int ) ;
 int FUNC_28 (int,int ) ;
 int FUNC_29 (struct net_device*,int *,int ,int ) ;
 struct ag71xx_dcfg* FUNC_30 (TYPE_3__*) ;
 void* FUNC_31 (struct device_node*) ;
 int FUNC_32 (struct device_node*) ;
 int FUNC_33 (int) ;
 int FUNC_34 (struct platform_device*,int ) ;
 struct resource* FUNC_35 (struct platform_device*,int ,int ) ;
 int FUNC_36 (struct platform_device*,struct net_device*) ;
 int VAR_23 ;
 int FUNC_37 (struct net_device*) ;
 int FUNC_38 (struct resource*) ;
 int FUNC_39 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_40(struct platform_device *VAR_24)
{
 struct device_node *VAR_25 = VAR_24->dev.of_node;
 const struct ag71xx_dcfg *VAR_26;
 struct net_device *VAR_27;
 struct resource *VAR_28;
 const void *VAR_29;
 int VAR_30, VAR_31, VAR_32;
 struct ag71xx *VAR_33;

 if (!VAR_25)
  return -VAR_10;

 VAR_27 = FUNC_15(&VAR_24->dev, sizeof(*VAR_33));
 if (!VAR_27)
  return -VAR_11;

 VAR_28 = FUNC_35(VAR_24, VAR_14, 0);
 if (!VAR_28)
  return -VAR_9;

 VAR_26 = FUNC_30(&VAR_24->dev);
 if (!VAR_26)
  return -VAR_9;

 VAR_33 = FUNC_25(VAR_27);
 VAR_33->mac_idx = -1;
 for (VAR_32 = 0; VAR_32 < FUNC_0(VAR_22); VAR_32++) {
  if (VAR_22[VAR_32] == VAR_28->start)
   VAR_33->mac_idx = VAR_32;
 }

 if (VAR_33->mac_idx < 0) {
  FUNC_26(VAR_33, VAR_23, VAR_27, "unknown mac idx\n");
  return -VAR_9;
 }

 VAR_33->clk_eth = FUNC_16(&VAR_24->dev, "eth");
 if (FUNC_2(VAR_33->clk_eth)) {
  FUNC_26(VAR_33, VAR_23, VAR_27, "Failed to get eth clk.\n");
  return FUNC_3(VAR_33->clk_eth);
 }

 FUNC_4(VAR_27, &VAR_24->dev);

 VAR_33->pdev = VAR_24;
 VAR_33->ndev = VAR_27;
 VAR_33->dcfg = VAR_26;
 VAR_33->msg_enable = FUNC_28(-1, VAR_0);
 FUNC_24(VAR_33->fifodata, VAR_26->fifodata, sizeof(VAR_33->fifodata));

 VAR_33->mac_reset = FUNC_19(&VAR_24->dev, "mac");
 if (FUNC_2(VAR_33->mac_reset)) {
  FUNC_26(VAR_33, VAR_23, VAR_27, "missing mac reset\n");
  VAR_31 = FUNC_3(VAR_33->mac_reset);
  goto err_free;
 }

 VAR_33->mac_base = FUNC_17(&VAR_24->dev, VAR_28->start,
         FUNC_38(VAR_28));
 if (!VAR_33->mac_base) {
  VAR_31 = -VAR_11;
  goto err_free;
 }

 VAR_27->irq = FUNC_34(VAR_24, 0);
 VAR_31 = FUNC_18(&VAR_24->dev, VAR_27->irq, VAR_17,
          0x0, FUNC_14(&VAR_24->dev), VAR_27);
 if (VAR_31) {
  FUNC_26(VAR_33, VAR_23, VAR_27, "unable to request IRQ %d\n",
     VAR_27->irq);
  goto err_free;
 }

 VAR_27->netdev_ops = &VAR_18;

 FUNC_1(&VAR_33->restart_work, VAR_21);
 FUNC_39(&VAR_33->oom_timer, VAR_19, 0);

 VAR_30 = VAR_5;
 VAR_33->rx_ring.order = FUNC_10(VAR_3);

 VAR_27->min_mtu = 68;
 VAR_27->max_mtu = VAR_26->max_frame_len - FUNC_7(0);

 VAR_33->rx_buf_offset = VAR_16;
 if (!FUNC_6(VAR_33, VAR_7) && !FUNC_6(VAR_33, VAR_8))
  VAR_33->rx_buf_offset += VAR_15;

 if (FUNC_6(VAR_33, VAR_7)) {
  VAR_33->tx_ring.desc_split = VAR_6;
  VAR_30 *= VAR_4;
 }
 VAR_33->tx_ring.order = FUNC_10(VAR_30);

 VAR_33->stop_desc = FUNC_20(&VAR_24->dev,
         sizeof(struct ag71xx_desc),
         &VAR_33->stop_desc_dma, VAR_13);
 if (!VAR_33->stop_desc) {
  VAR_31 = -VAR_11;
  goto err_free;
 }

 VAR_33->stop_desc->data = 0;
 VAR_33->stop_desc->ctrl = 0;
 VAR_33->stop_desc->next = (u32)VAR_33->stop_desc_dma;

 VAR_29 = FUNC_31(VAR_25);
 if (!FUNC_2(VAR_29))
  FUNC_24(VAR_27->dev_addr, VAR_29, VAR_12);
 if (FUNC_2(VAR_29) || !FUNC_23(VAR_27->dev_addr)) {
  FUNC_26(VAR_33, VAR_23, VAR_27, "invalid MAC address, using random address\n");
  FUNC_21(VAR_27->dev_addr);
 }

 VAR_33->phy_if_mode = FUNC_32(VAR_25);
 if (VAR_33->phy_if_mode < 0) {
  FUNC_26(VAR_33, VAR_23, VAR_27, "missing phy-mode property in DT\n");
  VAR_31 = VAR_33->phy_if_mode;
  goto err_free;
 }

 FUNC_29(VAR_27, &VAR_33->napi, VAR_20, VAR_1);

 VAR_31 = FUNC_13(VAR_33->clk_eth);
 if (VAR_31) {
  FUNC_26(VAR_33, VAR_23, VAR_27, "Failed to enable eth clk.\n");
  goto err_free;
 }

 FUNC_11(VAR_33, VAR_2, 0);

 FUNC_5(VAR_33);

 VAR_31 = FUNC_8(VAR_33);
 if (VAR_31)
  goto err_put_clk;

 FUNC_36(VAR_24, VAR_27);

 VAR_31 = FUNC_37(VAR_27);
 if (VAR_31) {
  FUNC_26(VAR_33, VAR_23, VAR_27, "unable to register net device\n");
  FUNC_36(VAR_24, ((void*)0));
  goto err_mdio_remove;
 }

 FUNC_27(VAR_33, VAR_23, VAR_27, "Atheros AG71xx at 0x%08lx, irq %d, mode:%s\n",
     (unsigned long)VAR_33->mac_base, VAR_27->irq,
     FUNC_33(VAR_33->phy_if_mode));

 return 0;

err_mdio_remove:
 FUNC_9(VAR_33);
err_put_clk:
 FUNC_12(VAR_33->clk_eth);
err_free:
 FUNC_22(VAR_27);
 return VAR_31;
}
