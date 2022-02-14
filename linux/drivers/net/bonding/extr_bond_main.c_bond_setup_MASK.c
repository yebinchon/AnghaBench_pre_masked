
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int priv_flags; int features; int hw_features; int flags; int priv_destructor; int * ethtool_ops; int * netdev_ops; int max_mtu; } ;
struct bonding {struct net_device* dev; int params; int mode_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int FUNC_0 (struct net_device*,int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (struct net_device*) ;
 struct bonding* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct net_device *VAR_21)
{
 struct bonding *VAR_22 = FUNC_2(VAR_21);

 FUNC_3(&VAR_22->mode_lock);
 VAR_22->params = VAR_20;


 VAR_22->dev = VAR_21;


 FUNC_1(VAR_21);
 VAR_21->max_mtu = VAR_1;
 VAR_21->netdev_ops = &VAR_18;
 VAR_21->ethtool_ops = &VAR_17;

 VAR_21->needs_free_netdev = 1;
 VAR_21->priv_destructor = VAR_16;

 FUNC_0(VAR_21, &VAR_19);


 VAR_21->flags |= VAR_3;
 VAR_21->priv_flags |= VAR_2 | VAR_6 | VAR_4;
 VAR_21->priv_flags &= ~(VAR_7 | VAR_5);


 VAR_21->features |= VAR_14;
 VAR_21->features |= VAR_15;

 VAR_21->hw_features = VAR_0 |
    VAR_11 |
    VAR_10;

 VAR_21->hw_features |= VAR_8 | VAR_9;
 VAR_21->features |= VAR_21->hw_features;
 VAR_21->features |= VAR_12 | VAR_13;
}
