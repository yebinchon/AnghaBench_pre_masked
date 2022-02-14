
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct device_node* of_node; } ;
struct platform_device {int name; struct device dev; } ;
struct of_phandle_args {int* args; int np; } ;
struct net_device {int irq; int dev_addr; int priv_flags; int watchdog_timeo; int * ethtool_ops; int * netdev_ops; } ;
struct TYPE_2__ {int function; } ;
struct hip04_priv {int port; int chan; int group; int tx_coalesce_frames; int tx_coalesce_usecs; scalar_t__ phy_mode; scalar_t__ phy_node; int napi; int tx_timeout_task; int phy; void* map; TYPE_1__ tx_coalesce_timer; void* sysctrl_base; void* base; struct net_device* ndev; struct device* dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (void*) ;
 int VAR_9 ;
 int FUNC_3 (struct net_device*,struct device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct net_device* FUNC_4 (int) ;
 int FUNC_5 (struct device*,char*) ;
 void* FUNC_6 (struct platform_device*,int) ;
 int FUNC_7 (struct device*,int,int ,int ,int ,struct net_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct net_device*) ;
 int VAR_13 ;
 int FUNC_10 (struct net_device*,struct device*) ;
 int FUNC_11 (struct hip04_priv*) ;
 int FUNC_12 (struct net_device*,int ,int ) ;
 int VAR_14 ;
 int FUNC_13 (struct net_device*,struct device*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_14 (struct hip04_priv*) ;
 int FUNC_15 (struct hip04_priv*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (TYPE_1__*,int ,int ) ;
 int FUNC_18 (struct net_device*,char*) ;
 struct hip04_priv* FUNC_19 (struct net_device*) ;
 int FUNC_20 (struct net_device*,int *,int ,int ) ;
 scalar_t__ FUNC_21 (struct device_node*) ;
 int FUNC_22 (scalar_t__) ;
 scalar_t__ FUNC_23 (struct device_node*,char*,int ) ;
 int FUNC_24 (struct device_node*,char*,int,int ,struct of_phandle_args*) ;
 int FUNC_25 (struct net_device*,scalar_t__,int *,int ,scalar_t__) ;
 int FUNC_26 (struct platform_device*,int ) ;
 int FUNC_27 (struct platform_device*,struct net_device*) ;
 int FUNC_28 (struct net_device*) ;
 void* FUNC_29 (int ) ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_30(struct platform_device *VAR_20)
{
 struct device *VAR_21 = &VAR_20->dev;
 struct device_node *VAR_22 = VAR_21->of_node;
 struct of_phandle_args VAR_23;
 struct net_device *VAR_24;
 struct hip04_priv *VAR_25;
 int VAR_26;
 int VAR_27;

 VAR_24 = FUNC_4(sizeof(struct hip04_priv));
 if (!VAR_24)
  return -VAR_3;

 VAR_25 = FUNC_19(VAR_24);
 VAR_25->dev = VAR_21;
 VAR_25->ndev = VAR_24;
 FUNC_27(VAR_20, VAR_24);
 FUNC_3(VAR_24, &VAR_20->dev);

 VAR_25->base = FUNC_6(VAR_20, 0);
 if (FUNC_1(VAR_25->base)) {
  VAR_27 = FUNC_2(VAR_25->base);
  goto init_fail;
 }
 VAR_27 = FUNC_24(VAR_22, "port-handle", 3, 0, &VAR_23);
 if (VAR_27 < 0) {
  FUNC_5(VAR_21, "no port-handle\n");
  goto init_fail;
 }

 VAR_25->port = VAR_23.args[0];
 VAR_25->chan = VAR_23.args[1] * VAR_9;
 VAR_25->group = VAR_23.args[2];

 FUNC_17(&VAR_25->tx_coalesce_timer, VAR_0, VAR_5);







 VAR_25->tx_coalesce_frames = VAR_11 * 3 / 4;
 VAR_25->tx_coalesce_usecs = 200;
 VAR_25->tx_coalesce_timer.function = VAR_19;

 VAR_25->map = FUNC_29(VAR_23.np);
 if (FUNC_1(VAR_25->map)) {
  FUNC_5(VAR_21, "no syscon hisilicon,hip04-ppe\n");
  VAR_27 = FUNC_2(VAR_25->map);
  goto init_fail;
 }

 VAR_25->phy_mode = FUNC_21(VAR_22);
 if (VAR_25->phy_mode < 0) {
  FUNC_5(VAR_21, "not find phy-mode\n");
  VAR_27 = -VAR_2;
  goto init_fail;
 }

 VAR_26 = FUNC_26(VAR_20, 0);
 if (VAR_26 <= 0) {
  VAR_27 = -VAR_2;
  goto init_fail;
 }

 VAR_27 = FUNC_7(VAR_21, VAR_26, VAR_15,
          0, VAR_20->name, VAR_24);
 if (VAR_27) {
  FUNC_18(VAR_24, "devm_request_irq failed\n");
  goto init_fail;
 }

 VAR_25->phy_node = FUNC_23(VAR_22, "phy-handle", 0);
 if (VAR_25->phy_node) {
  VAR_25->phy = FUNC_25(VAR_24, VAR_25->phy_node,
        &VAR_13,
        0, VAR_25->phy_mode);
  if (!VAR_25->phy) {
   VAR_27 = -VAR_4;
   goto init_fail;
  }
 }

 FUNC_0(&VAR_25->tx_timeout_task, VAR_18);

 VAR_24->netdev_ops = &VAR_16;
 VAR_24->ethtool_ops = &VAR_14;
 VAR_24->watchdog_timeo = VAR_12;
 VAR_24->priv_flags |= VAR_6;
 VAR_24->irq = VAR_26;
 FUNC_20(VAR_24, &VAR_25->napi, VAR_17, VAR_7);

 FUNC_14(VAR_25);
 FUNC_15(VAR_25);
 if (VAR_25->phy_mode == VAR_8)
  FUNC_12(VAR_24, VAR_10, VAR_1);

 FUNC_11(VAR_25);
 FUNC_8(VAR_24->dev_addr);
 FUNC_16(VAR_24);

 VAR_27 = FUNC_10(VAR_24, VAR_21);
 if (VAR_27) {
  FUNC_18(VAR_24, "alloc ring fail\n");
  goto alloc_fail;
 }

 VAR_27 = FUNC_28(VAR_24);
 if (VAR_27)
  goto alloc_fail;

 return 0;

alloc_fail:
 FUNC_13(VAR_24, VAR_21);
init_fail:
 FUNC_22(VAR_25->phy_node);
 FUNC_9(VAR_24);
 return VAR_27;
}
