
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int features; int hw_features; int hw_enc_features; int max_mtu; int min_mtu; int priv_flags; int * ethtool_ops; int * l3mdev_ops; int * netdev_ops; } ;


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
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_18)
{
 FUNC_1(VAR_18);


 VAR_18->netdev_ops = &VAR_17;
 VAR_18->l3mdev_ops = &VAR_16;
 VAR_18->ethtool_ops = &VAR_15;
 VAR_18->needs_free_netdev = 1;


 FUNC_0(VAR_18);


 VAR_18->features |= VAR_9;


 VAR_18->features |= VAR_10;


 VAR_18->features |= VAR_14;


 VAR_18->features |= VAR_6;
 VAR_18->features |= VAR_11 | VAR_8 | VAR_12;
 VAR_18->features |= VAR_13 | VAR_5 | VAR_7;

 VAR_18->hw_features = VAR_18->features;
 VAR_18->hw_enc_features = VAR_18->features;


 VAR_18->priv_flags |= VAR_2;
 VAR_18->priv_flags |= VAR_3;
 VAR_18->priv_flags |= VAR_1;





 VAR_18->min_mtu = VAR_4;
 VAR_18->max_mtu = VAR_0;
}
