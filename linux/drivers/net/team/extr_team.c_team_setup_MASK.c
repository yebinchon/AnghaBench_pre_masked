
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int priv_flags; int features; int hw_features; int priv_destructor; int * ethtool_ops; int * netdev_ops; int max_mtu; } ;


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
 int VAR_16 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_20)
{
 FUNC_0(VAR_20);
 VAR_20->max_mtu = VAR_0;

 VAR_20->netdev_ops = &VAR_19;
 VAR_20->ethtool_ops = &VAR_18;
 VAR_20->needs_free_netdev = 1;
 VAR_20->priv_destructor = VAR_17;
 VAR_20->priv_flags &= ~(VAR_6 | VAR_4);
 VAR_20->priv_flags |= VAR_2;
 VAR_20->priv_flags |= VAR_3;






 VAR_20->priv_flags |= VAR_5 | VAR_1;

 VAR_20->features |= VAR_14;
 VAR_20->features |= VAR_7;


 VAR_20->features |= VAR_15;

 VAR_20->hw_features = VAR_16 |
      VAR_11 |
      VAR_10;

 VAR_20->hw_features |= VAR_8 | VAR_9;
 VAR_20->features |= VAR_20->hw_features;
 VAR_20->features |= VAR_12 | VAR_13;
}
