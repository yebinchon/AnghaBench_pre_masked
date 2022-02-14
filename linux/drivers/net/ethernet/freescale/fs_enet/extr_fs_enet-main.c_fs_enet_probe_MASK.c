
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef struct clk const clk ;
typedef struct clk u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {TYPE_1__* data; } ;
struct net_device {int watchdog_timeo; int dev_addr; int name; int features; int * ethtool_ops; int * netdev_ops; } ;
struct fs_platform_info {int rx_ring; int tx_ring; int rx_copybreak; int napi_weight; int use_rmii; scalar_t__ phy_node; struct clk const* clk_per; int cp_command; } ;
struct fs_enet_private {char* mapped_as_page; int tx_ring; int rx_ring; TYPE_1__* ops; int napi; int timeout_work; scalar_t__ rx_bd_base; scalar_t__ tx_bd_base; scalar_t__ ring_base; int tx_lock; int lock; struct sk_buff** rx_skbuff; struct sk_buff** tx_skbuff; struct fs_platform_info* fpi; struct net_device* ndev; TYPE_2__* dev; } ;
struct TYPE_5__ {int (* setup_data ) (struct net_device*) ;int (* allocate_bd ) (struct net_device*) ;int (* cleanup_data ) (struct net_device*) ;int (* free_bd ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct clk const*) ;
 int FUNC_2 (struct of_device_id const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct net_device*,TYPE_2__*) ;
 int VAR_7 ;
 struct net_device* FUNC_4 (int) ;
 int FUNC_5 (struct clk const*) ;
 int FUNC_6 (struct clk const*) ;
 struct clk* FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (int ,struct clk const*) ;
 int FUNC_9 (struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (struct fs_platform_info*) ;
 struct fs_platform_info* FUNC_11 (int,int ) ;
 struct fs_enet_private* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*,int *,int ,int) ;
 scalar_t__ FUNC_15 (int ,char*) ;
 struct clk* FUNC_16 (int ) ;
 void* FUNC_17 (int ,char*,int*) ;
 struct of_device_id* FUNC_18 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (int ,char*,int ) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (struct platform_device*,struct net_device*) ;
 int FUNC_26 (char*,int ,int ) ;
 int FUNC_27 (struct net_device*) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (char*,char const*) ;
 int FUNC_30 (struct net_device*) ;
 int FUNC_31 (struct net_device*) ;
 int FUNC_32 (struct net_device*) ;
 int FUNC_33 (struct net_device*) ;

__attribute__((used)) static int FUNC_34(struct platform_device *VAR_13)
{
 const struct of_device_id *VAR_14;
 struct net_device *VAR_15;
 struct fs_enet_private *VAR_16;
 struct fs_platform_info *VAR_17;
 const u32 *VAR_18;
 struct clk *VAR_19;
 int VAR_20;
 const u8 *VAR_21;
 const char *VAR_22;
 int VAR_23, VAR_24, VAR_25 = -VAR_1;

 VAR_14 = FUNC_18(VAR_8, &VAR_13->dev);
 if (!VAR_14)
  return -VAR_0;

 VAR_17 = FUNC_11(sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return -VAR_2;

 if (!FUNC_2(VAR_14)) {
  VAR_18 = FUNC_17(VAR_13->dev.of_node, "fsl,cpm-command", &VAR_24);
  if (!VAR_18 || VAR_24 != 4)
   goto out_free_fpi;

  VAR_17->cp_command = *VAR_18;
 }

 VAR_17->rx_ring = VAR_6;
 VAR_17->tx_ring = VAR_7;
 VAR_17->rx_copybreak = 240;
 VAR_17->napi_weight = 17;
 VAR_17->phy_node = FUNC_21(VAR_13->dev.of_node, "phy-handle", 0);
 if (!VAR_17->phy_node && FUNC_23(VAR_13->dev.of_node)) {
  VAR_20 = FUNC_24(VAR_13->dev.of_node);
  if (VAR_20)
   goto out_free_fpi;




  VAR_17->phy_node = FUNC_19(VAR_13->dev.of_node);
 }

 if (FUNC_15(VAR_13->dev.of_node, "fsl,mpc5125-fec")) {
  VAR_22 = FUNC_17(VAR_13->dev.of_node,
      "phy-connection-type", ((void*)0));
  if (VAR_22 && !FUNC_29("rmii", VAR_22))
   VAR_17->use_rmii = 1;
 }





 VAR_19 = FUNC_7(&VAR_13->dev, "per");
 if (!FUNC_1(VAR_19)) {
  VAR_25 = FUNC_6(VAR_19);
  if (VAR_25)
   goto out_deregister_fixed_link;

  VAR_17->clk_per = VAR_19;
 }

 VAR_23 = sizeof(*VAR_16) +
            sizeof(struct sk_buff **) *
       (VAR_17->rx_ring + VAR_17->tx_ring) +
     sizeof(char) * VAR_17->tx_ring;

 VAR_15 = FUNC_4(VAR_23);
 if (!VAR_15) {
  VAR_25 = -VAR_2;
  goto out_put;
 }

 FUNC_3(VAR_15, &VAR_13->dev);
 FUNC_25(VAR_13, VAR_15);

 VAR_16 = FUNC_12(VAR_15);
 VAR_16->dev = &VAR_13->dev;
 VAR_16->ndev = VAR_15;
 VAR_16->fpi = VAR_17;
 VAR_16->ops = VAR_14->data;

 VAR_25 = VAR_16->ops->setup_data(VAR_15);
 if (VAR_25)
  goto out_free_dev;

 VAR_16->rx_skbuff = (struct sk_buff **)&VAR_16[1];
 VAR_16->tx_skbuff = VAR_16->rx_skbuff + VAR_17->rx_ring;
 VAR_16->mapped_as_page = (char *)(VAR_16->rx_skbuff + VAR_17->rx_ring +
           VAR_17->tx_ring);

 FUNC_28(&VAR_16->lock);
 FUNC_28(&VAR_16->tx_lock);

 VAR_21 = FUNC_16(VAR_13->dev.of_node);
 if (!FUNC_1(VAR_21))
  FUNC_8(VAR_15->dev_addr, VAR_21);

 VAR_25 = VAR_16->ops->allocate_bd(VAR_15);
 if (VAR_25)
  goto out_cleanup_data;

 VAR_16->rx_bd_base = VAR_16->ring_base;
 VAR_16->tx_bd_base = VAR_16->rx_bd_base + VAR_17->rx_ring;

 VAR_16->tx_ring = VAR_17->tx_ring;
 VAR_16->rx_ring = VAR_17->rx_ring;

 VAR_15->netdev_ops = &VAR_10;
 VAR_15->watchdog_timeo = 2 * VAR_4;
 FUNC_0(&VAR_16->timeout_work, VAR_12);
 FUNC_14(VAR_15, &VAR_16->napi, VAR_9, VAR_17->napi_weight);

 VAR_15->ethtool_ops = &VAR_11;

 FUNC_13(VAR_15);

 VAR_15->features |= VAR_5;

 VAR_25 = FUNC_27(VAR_15);
 if (VAR_25)
  goto out_free_bd;

 FUNC_26("%s: fs_enet: %pM\n", VAR_15->name, VAR_15->dev_addr);

 return 0;

out_free_bd:
 VAR_16->ops->free_bd(VAR_15);
out_cleanup_data:
 VAR_16->ops->cleanup_data(VAR_15);
out_free_dev:
 FUNC_9(VAR_15);
out_put:
 if (VAR_17->clk_per)
  FUNC_5(VAR_17->clk_per);
out_deregister_fixed_link:
 FUNC_20(VAR_17->phy_node);
 if (FUNC_23(VAR_13->dev.of_node))
  FUNC_22(VAR_13->dev.of_node);
out_free_fpi:
 FUNC_10(VAR_17);
 return VAR_25;
}
