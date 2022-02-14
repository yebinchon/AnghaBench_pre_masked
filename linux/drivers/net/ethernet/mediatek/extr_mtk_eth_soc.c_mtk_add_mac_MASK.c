
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct phylink {int dummy; } ;
struct TYPE_11__ {int type; TYPE_2__* dev; } ;
struct mtk_mac {int id; struct phylink* phylink; struct device_node* of_node; TYPE_3__ phylink_config; int speed; int mode; int interface; TYPE_6__* hw_stats; scalar_t__ hwlro_ip_cnt; int hwlro_ip; struct mtk_eth* hw; } ;
struct mtk_eth {TYPE_4__** netdev; int * irq; TYPE_1__* soc; scalar_t__ hwlro; scalar_t__ base; int dev; struct mtk_mac** mac; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;
struct TYPE_13__ {int reg_offset; int syncp; int stats_lock; } ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct TYPE_12__ {int watchdog_timeo; unsigned long base_addr; int hw_features; int vlan_features; int features; TYPE_2__ dev; int irq; int * ethtool_ops; int * netdev_ops; } ;
struct TYPE_9__ {int hw_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct phylink*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct phylink*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int VAR_12 ;
 TYPE_4__* FUNC_3 (int) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,char*,...) ;
 TYPE_6__* FUNC_6 (int ,int,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct mtk_mac* FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (struct device_node*) ;
 int FUNC_11 (struct device_node*) ;
 int * FUNC_12 (struct device_node*,char*,int *) ;
 struct phylink* FUNC_13 (TYPE_3__*,int ,int,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct mtk_eth *VAR_16, struct device_node *VAR_17)
{
 const __be32 *VAR_18 = FUNC_12(VAR_17, "reg", ((void*)0));
 struct phylink *VAR_19;
 int VAR_20, VAR_21, VAR_22;
 struct mtk_mac *VAR_23;

 if (!VAR_18) {
  FUNC_5(VAR_16->dev, "missing mac id\n");
  return -VAR_0;
 }

 VAR_21 = FUNC_4(VAR_18);
 if (VAR_21 >= VAR_5) {
  FUNC_5(VAR_16->dev, "%d is not a valid mac id\n", VAR_21);
  return -VAR_0;
 }

 if (VAR_16->netdev[VAR_21]) {
  FUNC_5(VAR_16->dev, "duplicate mac id found: %d\n", VAR_21);
  return -VAR_0;
 }

 VAR_16->netdev[VAR_21] = FUNC_3(sizeof(*VAR_23));
 if (!VAR_16->netdev[VAR_21]) {
  FUNC_5(VAR_16->dev, "alloc_etherdev failed\n");
  return -VAR_1;
 }
 VAR_23 = FUNC_9(VAR_16->netdev[VAR_21]);
 VAR_16->mac[VAR_21] = VAR_23;
 VAR_23->id = VAR_21;
 VAR_23->hw = VAR_16;
 VAR_23->of_node = VAR_17;

 FUNC_8(VAR_23->hwlro_ip, 0, sizeof(VAR_23->hwlro_ip));
 VAR_23->hwlro_ip_cnt = 0;

 VAR_23->hw_stats = FUNC_6(VAR_16->dev,
         sizeof(*VAR_23->hw_stats),
         VAR_2);
 if (!VAR_23->hw_stats) {
  FUNC_5(VAR_16->dev, "failed to allocate counter memory\n");
  VAR_22 = -VAR_1;
  goto free_netdev;
 }
 FUNC_14(&VAR_23->hw_stats->stats_lock);
 FUNC_15(&VAR_23->hw_stats->syncp);
 VAR_23->hw_stats->reg_offset = VAR_21 * VAR_6;


 VAR_20 = FUNC_11(VAR_17);
 if (VAR_20 < 0) {
  FUNC_5(VAR_16->dev, "incorrect phy-mode\n");
  VAR_22 = -VAR_0;
  goto free_netdev;
 }


 VAR_23->interface = VAR_11;
 VAR_23->mode = VAR_4;
 VAR_23->speed = VAR_12;

 VAR_23->phylink_config.dev = &VAR_16->netdev[VAR_21]->dev;
 VAR_23->phylink_config.type = VAR_10;

 VAR_19 = FUNC_13(&VAR_23->phylink_config,
     FUNC_10(VAR_23->of_node),
     VAR_20, &VAR_15);
 if (FUNC_0(VAR_19)) {
  VAR_22 = FUNC_1(VAR_19);
  goto free_netdev;
 }

 VAR_23->phylink = VAR_19;

 FUNC_2(VAR_16->netdev[VAR_21], VAR_16->dev);
 VAR_16->netdev[VAR_21]->watchdog_timeo = 5 * VAR_3;
 VAR_16->netdev[VAR_21]->netdev_ops = &VAR_14;
 VAR_16->netdev[VAR_21]->base_addr = (unsigned long)VAR_16->base;

 VAR_16->netdev[VAR_21]->hw_features = VAR_16->soc->hw_features;
 if (VAR_16->hwlro)
  VAR_16->netdev[VAR_21]->hw_features |= VAR_9;

 VAR_16->netdev[VAR_21]->vlan_features = VAR_16->soc->hw_features &
  ~(VAR_8 | VAR_7);
 VAR_16->netdev[VAR_21]->features |= VAR_16->soc->hw_features;
 VAR_16->netdev[VAR_21]->ethtool_ops = &VAR_13;

 VAR_16->netdev[VAR_21]->irq = VAR_16->irq[0];
 VAR_16->netdev[VAR_21]->dev.of_node = VAR_17;

 return 0;

free_netdev:
 FUNC_7(VAR_16->netdev[VAR_21]);
 return VAR_22;
}
