
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_failover_info {int dummy; } ;
struct TYPE_2__ {struct device* parent; } ;
struct net_device {int priv_flags; int features; int hw_features; int max_mtu; int min_mtu; int addr_len; int dev_addr; int * ethtool_ops; int * netdev_ops; TYPE_1__ dev; } ;
struct failover {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct failover* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct failover*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct failover*) ;
 int FUNC_3 (struct net_device*,struct device*) ;
 struct net_device* FUNC_4 (int,int) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 struct failover* FUNC_8 (struct net_device*,int *) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ,int ,int ) ;
 int VAR_14 ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;

struct failover *FUNC_14(struct net_device *VAR_15)
{
 struct device *VAR_16 = VAR_15->dev.parent;
 struct net_device *VAR_17;
 struct failover *VAR_18;
 int VAR_19;




 VAR_17 = FUNC_4(sizeof(struct net_failover_info), 16);
 if (!VAR_17) {
  FUNC_5(VAR_16, "Unable to allocate failover_netdev!\n");
  return FUNC_0(-VAR_0);
 }

 FUNC_7(VAR_17, FUNC_6(VAR_15));
 FUNC_3(VAR_17, VAR_16);

 VAR_17->netdev_ops = &VAR_12;
 VAR_17->ethtool_ops = &VAR_13;


 VAR_17->priv_flags |= VAR_4 | VAR_2;
 VAR_17->priv_flags &= ~(VAR_5 |
           VAR_3);


 VAR_17->features |= VAR_10;


 VAR_17->features |= VAR_11;

 VAR_17->hw_features = VAR_1 |
        VAR_9 |
        VAR_8 |
        VAR_7;

 VAR_17->hw_features |= VAR_6;
 VAR_17->features |= VAR_17->hw_features;

 FUNC_10(VAR_17->dev_addr, VAR_15->dev_addr,
        VAR_17->addr_len);

 VAR_17->min_mtu = VAR_15->min_mtu;
 VAR_17->max_mtu = VAR_15->max_mtu;

 VAR_19 = FUNC_12(VAR_17);
 if (VAR_19) {
  FUNC_5(VAR_16, "Unable to register failover_dev!\n");
  goto err_register_netdev;
 }

 FUNC_11(VAR_17);

 VAR_18 = FUNC_8(VAR_17, &VAR_14);
 if (FUNC_1(VAR_18)) {
  VAR_19 = FUNC_2(VAR_18);
  goto err_failover_register;
 }

 return VAR_18;

err_failover_register:
 FUNC_13(VAR_17);
err_register_netdev:
 FUNC_9(VAR_17);

 return FUNC_0(VAR_19);
}
