
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int * ethtool_ops; int * header_ops; int * netdev_ops; int priv_flags; int max_mtu; scalar_t__ min_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_6)
{
 FUNC_0(VAR_6);

 VAR_6->min_mtu = 0;
 VAR_6->max_mtu = VAR_0;
 VAR_6->priv_flags &= ~VAR_1;
 FUNC_1(VAR_6);
 VAR_6->priv_flags |= VAR_2;
 VAR_6->netdev_ops = &VAR_5;
 VAR_6->needs_free_netdev = 1;
 VAR_6->header_ops = &VAR_4;
 VAR_6->ethtool_ops = &VAR_3;
}
