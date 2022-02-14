
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vnet {int local_mac; int list; int * port_hash; int port_list; struct net_device* dev; int lock; } ;
struct vio_dev {int dev; } ;
struct net_device {int needed_tailroom; int* dev_addr; int hw_features; int features; int max_mtu; int min_mtu; int watchdog_timeo; int * ethtool_ops; int * netdev_ops; scalar_t__ needed_headroom; } ;


 int VAR_0 ;
 struct vnet* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct net_device*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct net_device* FUNC_4 (int,int ,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct net_device*,char*,int*) ;
 struct vnet* FUNC_8 (struct net_device*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static struct vnet *FUNC_12(const u64 *VAR_16,
        struct vio_dev *VAR_17)
{
 struct net_device *VAR_18;
 struct vnet *VAR_19;
 int VAR_20, VAR_21;

 VAR_18 = FUNC_4(sizeof(*VAR_19), VAR_9, 1);
 if (!VAR_18)
  return FUNC_0(-VAR_0);
 VAR_18->needed_headroom = VAR_10 + 8;
 VAR_18->needed_tailroom = 8;

 for (VAR_21 = 0; VAR_21 < VAR_1; VAR_21++)
  VAR_18->dev_addr[VAR_21] = (*VAR_16 >> (5 - VAR_21) * 8) & 0xff;

 VAR_19 = FUNC_8(VAR_18);

 FUNC_11(&VAR_19->lock);
 VAR_19->dev = VAR_18;

 FUNC_2(&VAR_19->port_list);
 for (VAR_21 = 0; VAR_21 < VAR_11; VAR_21++)
  FUNC_1(&VAR_19->port_hash[VAR_21]);
 FUNC_2(&VAR_19->list);
 VAR_19->local_mac = *VAR_16;

 VAR_18->netdev_ops = &VAR_15;
 VAR_18->ethtool_ops = &VAR_13;
 VAR_18->watchdog_timeo = VAR_12;

 VAR_18->hw_features = VAR_7 | VAR_4 | VAR_3 |
      VAR_5 | VAR_6;
 VAR_18->features = VAR_18->hw_features;


 VAR_18->min_mtu = VAR_2;
 VAR_18->max_mtu = VAR_8;

 FUNC_3(VAR_18, &VAR_17->dev);

 VAR_20 = FUNC_10(VAR_18);
 if (VAR_20) {
  FUNC_9("Cannot register net device, aborting\n");
  goto err_out_free_dev;
 }

 FUNC_7(VAR_18, "Sun LDOM vnet %pM\n", VAR_18->dev_addr);

 FUNC_6(&VAR_19->list, &VAR_14);

 return VAR_19;

err_out_free_dev:
 FUNC_5(VAR_18);

 return FUNC_0(VAR_20);
}
