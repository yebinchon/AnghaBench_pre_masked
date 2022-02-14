
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct vnet_port {int dummy; } ;
struct vio_dev {int dev; } ;
struct net_device {int needed_tailroom; int hw_features; int features; int max_mtu; int min_mtu; int watchdog_timeo; int * ethtool_ops; int * netdev_ops; int name; int * dev_addr; int * perm_addr; scalar_t__ needed_headroom; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct net_device* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ,char*,int,int) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static struct net_device *FUNC_4(u8 VAR_11[],
        struct vio_dev *VAR_12,
        u64 VAR_13,
        u64 VAR_14)
{
 struct net_device *VAR_15;
 struct vnet_port *VAR_16;
 int VAR_17;

 VAR_15 = FUNC_2(sizeof(*VAR_16), VAR_6, 1);
 if (!VAR_15)
  return FUNC_0(-VAR_0);
 VAR_15->needed_headroom = VAR_7 + 8;
 VAR_15->needed_tailroom = 8;

 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
  VAR_15->dev_addr[VAR_17] = VAR_11[VAR_17];
  VAR_15->perm_addr[VAR_17] = VAR_15->dev_addr[VAR_17];
 }

 FUNC_3(VAR_15->name, "vif%d.%d", (int)VAR_13, (int)VAR_14);

 VAR_15->netdev_ops = &VAR_10;
 VAR_15->ethtool_ops = &VAR_9;
 VAR_15->watchdog_timeo = VAR_8;

 VAR_15->hw_features = VAR_3 | VAR_4;
 VAR_15->features = VAR_15->hw_features;


 VAR_15->min_mtu = VAR_2;
 VAR_15->max_mtu = VAR_5;

 FUNC_1(VAR_15, &VAR_12->dev);

 return VAR_15;
}
