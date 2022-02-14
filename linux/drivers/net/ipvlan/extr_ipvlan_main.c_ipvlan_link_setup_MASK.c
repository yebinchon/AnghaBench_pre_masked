
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int priv_flags; int needs_free_netdev; int * ethtool_ops; int * header_ops; int * netdev_ops; int max_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_1(struct net_device *VAR_8)
{
 FUNC_0(VAR_8);

 VAR_8->max_mtu = VAR_0;
 VAR_8->priv_flags &= ~(VAR_4 | VAR_2);
 VAR_8->priv_flags |= VAR_3 | VAR_1;
 VAR_8->netdev_ops = &VAR_7;
 VAR_8->needs_free_netdev = 1;
 VAR_8->header_ops = &VAR_6;
 VAR_8->ethtool_ops = &VAR_5;
}
