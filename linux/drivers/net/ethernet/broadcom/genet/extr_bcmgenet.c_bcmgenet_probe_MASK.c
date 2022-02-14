
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {struct device_node* of_node; struct bcmgenet_platform_data* platform_data; } ;
struct platform_device {TYPE_3__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct net_device {int watchdog_timeo; int hw_features; int needed_headroom; int name; int * netdev_ops; int * ethtool_ops; int dev_addr; } ;
struct device_node {int dummy; } ;
struct bcmgenet_priv {void const* base; int wol_irq_disabled; int version; void const* clk; void const* clk_wol; void const* clk_eee; TYPE_2__* rx_rings; TYPE_1__* hw_params; struct net_device* dev; struct platform_device* pdev; int bcmgenet_irq_work; int rx_buf_len; int wq; void* wol_irq; int msg_enable; int lock; void* irq1; void* irq0; } ;
struct bcmgenet_platform_data {void* mac_address; int genet_version; } ;
typedef enum bcmgenet_version { ____Placeholder_bcmgenet_version } bcmgenet_version ;
struct TYPE_11__ {int rx_max_coalesced_frames; } ;
struct TYPE_10__ {int rx_queues; scalar_t__ tx_queues; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (void const*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (void const*) ;
 int VAR_12 ;
 int FUNC_3 (struct net_device*,TYPE_3__*) ;
 struct net_device* FUNC_4 (int,scalar_t__,scalar_t__) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (struct net_device*) ;
 int VAR_16 ;
 int FUNC_6 (struct bcmgenet_priv*,int ) ;
 int FUNC_7 (struct bcmgenet_priv*) ;
 int VAR_17 ;
 int FUNC_8 (void const*) ;
 int FUNC_9 (void const*) ;
 int FUNC_10 (TYPE_3__*,char*) ;
 int FUNC_11 (TYPE_3__*,struct net_device*) ;
 int FUNC_12 (TYPE_3__*,char*) ;
 int FUNC_13 (TYPE_3__*,int) ;
 void* FUNC_14 (TYPE_3__*,char*) ;
 void const* FUNC_15 (struct platform_device*,int ) ;
 int FUNC_16 (TYPE_3__*,void*,int ,int ,int ,struct bcmgenet_priv*) ;
 int FUNC_17 (int ,void const*) ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct net_device*) ;
 struct bcmgenet_priv* FUNC_21 (struct net_device*) ;
 int FUNC_22 (struct net_device*) ;
 int FUNC_23 (int,int ) ;
 int FUNC_24 (struct net_device*,int) ;
 int FUNC_25 (struct net_device*,scalar_t__) ;
 void* FUNC_26 (struct device_node*) ;
 struct of_device_id* FUNC_27 (int ,struct device_node*) ;
 int FUNC_28 (struct device_node*,char*,char const**) ;
 void* FUNC_29 (struct platform_device*,int) ;
 int FUNC_30 (struct net_device*) ;
 int FUNC_31 (struct bcmgenet_priv*) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (char const*,char*) ;

__attribute__((used)) static int FUNC_34(struct platform_device *VAR_18)
{
 struct bcmgenet_platform_data *VAR_19 = VAR_18->dev.platform_data;
 struct device_node *VAR_20 = VAR_18->dev.of_node;
 const struct of_device_id *VAR_21 = ((void*)0);
 struct bcmgenet_priv *VAR_22;
 struct net_device *VAR_23;
 const void *VAR_24;
 unsigned int VAR_25;
 int VAR_26 = -VAR_2;
 const char *VAR_27;


 VAR_23 = FUNC_4(sizeof(*VAR_22), VAR_4 + 1,
     VAR_4 + 1);
 if (!VAR_23) {
  FUNC_10(&VAR_18->dev, "can't allocate net device\n");
  return -VAR_3;
 }

 if (VAR_20) {
  VAR_21 = FUNC_27(VAR_15, VAR_20);
  if (!VAR_21)
   return -VAR_1;
 }

 VAR_22 = FUNC_21(VAR_23);
 VAR_22->irq0 = FUNC_29(VAR_18, 0);
 VAR_22->irq1 = FUNC_29(VAR_18, 1);
 VAR_22->wol_irq = FUNC_29(VAR_18, 2);
 if (!VAR_22->irq0 || !VAR_22->irq1) {
  FUNC_10(&VAR_18->dev, "can't find IRQs\n");
  VAR_26 = -VAR_1;
  goto err;
 }

 if (VAR_20) {
  VAR_24 = FUNC_26(VAR_20);
  if (FUNC_1(VAR_24)) {
   FUNC_10(&VAR_18->dev, "can't find MAC address\n");
   VAR_26 = -VAR_1;
   goto err;
  }
 } else {
  VAR_24 = VAR_19->mac_address;
 }

 VAR_22->base = FUNC_15(VAR_18, 0);
 if (FUNC_1(VAR_22->base)) {
  VAR_26 = FUNC_2(VAR_22->base);
  goto err;
 }

 FUNC_32(&VAR_22->lock);

 FUNC_3(VAR_23, &VAR_18->dev);
 FUNC_11(&VAR_18->dev, VAR_23);
 FUNC_17(VAR_23->dev_addr, VAR_24);
 VAR_23->watchdog_timeo = 2 * VAR_7;
 VAR_23->ethtool_ops = &VAR_13;
 VAR_23->netdev_ops = &VAR_16;

 VAR_22->msg_enable = FUNC_23(-1, VAR_5);


 VAR_23->hw_features |= VAR_11 | VAR_9 |
  VAR_8 | VAR_10;


 VAR_22->wol_irq_disabled = 1;
 VAR_26 = FUNC_16(&VAR_18->dev, VAR_22->wol_irq, VAR_17, 0,
          VAR_23->name, VAR_22);
 if (!VAR_26)
  FUNC_13(&VAR_18->dev, 1);




 VAR_23->needed_headroom += 64;

 FUNC_20(VAR_23);

 VAR_22->dev = VAR_23;
 VAR_22->pdev = VAR_18;
 if (VAR_21)
  VAR_22->version = (enum bcmgenet_version)VAR_21->data;
 else
  VAR_22->version = VAR_19->genet_version;

 VAR_22->clk = FUNC_14(&VAR_22->pdev->dev, "enet");
 if (FUNC_1(VAR_22->clk)) {
  FUNC_12(&VAR_22->pdev->dev, "failed to get enet clock\n");
  VAR_22->clk = ((void*)0);
 }

 FUNC_9(VAR_22->clk);

 FUNC_7(VAR_22);


 FUNC_19(&VAR_22->wq);

 VAR_22->rx_buf_len = VAR_12;
 FUNC_0(&VAR_22->bcmgenet_irq_work, VAR_14);

 VAR_22->clk_wol = FUNC_14(&VAR_22->pdev->dev, "enet-wol");
 if (FUNC_1(VAR_22->clk_wol)) {
  FUNC_12(&VAR_22->pdev->dev, "failed to get enet-wol clock\n");
  VAR_22->clk_wol = ((void*)0);
 }

 VAR_22->clk_eee = FUNC_14(&VAR_22->pdev->dev, "enet-eee");
 if (FUNC_1(VAR_22->clk_eee)) {
  FUNC_12(&VAR_22->pdev->dev, "failed to get enet-eee clock\n");
  VAR_22->clk_eee = ((void*)0);
 }




 if (VAR_20 && !FUNC_28(VAR_20, "phy-mode", &VAR_27) &&
     !FUNC_33(VAR_27, "internal"))
  FUNC_6(VAR_22, VAR_6);

 FUNC_31(VAR_22);

 VAR_26 = FUNC_5(VAR_23);
 if (VAR_26)
  goto err_clk_disable;




 FUNC_25(VAR_22->dev, VAR_22->hw_params->tx_queues + 1);
 FUNC_24(VAR_22->dev, VAR_22->hw_params->rx_queues + 1);


 for (VAR_25 = 0; VAR_25 < VAR_22->hw_params->rx_queues; VAR_25++)
  VAR_22->rx_rings[VAR_25].rx_max_coalesced_frames = 1;
 VAR_22->rx_rings[VAR_0].rx_max_coalesced_frames = 1;


 FUNC_22(VAR_23);


 FUNC_8(VAR_22->clk);

 VAR_26 = FUNC_30(VAR_23);
 if (VAR_26)
  goto err;

 return VAR_26;

err_clk_disable:
 FUNC_8(VAR_22->clk);
err:
 FUNC_18(VAR_23);
 return VAR_26;
}
