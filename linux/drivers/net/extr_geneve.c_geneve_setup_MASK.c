
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int features; int hw_features; int priv_flags; scalar_t__ hard_header_len; scalar_t__ max_mtu; int min_mtu; int * ethtool_ops; int * netdev_ops; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_14)
{
 FUNC_2(VAR_14);

 VAR_14->netdev_ops = &VAR_12;
 VAR_14->ethtool_ops = &VAR_11;
 VAR_14->needs_free_netdev = 1;

 FUNC_0(VAR_14, &VAR_13);

 VAR_14->features |= VAR_8;
 VAR_14->features |= VAR_10 | VAR_7;
 VAR_14->features |= VAR_9;
 VAR_14->features |= VAR_6;

 VAR_14->hw_features |= VAR_10 | VAR_7 | VAR_9;
 VAR_14->hw_features |= VAR_6;


 VAR_14->min_mtu = VAR_0;




 VAR_14->max_mtu = VAR_5 - VAR_1 - VAR_14->hard_header_len;

 FUNC_3(VAR_14);
 VAR_14->priv_flags &= ~VAR_4;
 VAR_14->priv_flags |= VAR_2 | VAR_3;
 FUNC_1(VAR_14);
}
