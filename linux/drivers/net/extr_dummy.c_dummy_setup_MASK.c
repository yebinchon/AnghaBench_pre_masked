
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int priv_flags; int features; int hw_features; int hw_enc_features; scalar_t__ max_mtu; scalar_t__ min_mtu; int flags; int * ethtool_ops; int * netdev_ops; } ;


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
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_13)
{
 FUNC_1(VAR_13);


 VAR_13->netdev_ops = &VAR_12;
 VAR_13->ethtool_ops = &VAR_11;
 VAR_13->needs_free_netdev = 1;


 VAR_13->flags |= VAR_2;
 VAR_13->flags &= ~VAR_1;
 VAR_13->priv_flags |= VAR_0 | VAR_3;
 VAR_13->features |= VAR_10 | VAR_5;
 VAR_13->features |= VAR_4;
 VAR_13->features |= VAR_8 | VAR_7 | VAR_9;
 VAR_13->features |= VAR_6;
 VAR_13->hw_features |= VAR_13->features;
 VAR_13->hw_enc_features |= VAR_13->features;
 FUNC_0(VAR_13);

 VAR_13->min_mtu = 0;
 VAR_13->max_mtu = 0;
}
