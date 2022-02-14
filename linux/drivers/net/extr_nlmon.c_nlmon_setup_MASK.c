
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {int dummy; } ;
struct net_device {int needs_free_netdev; int features; int min_mtu; int mtu; int flags; int * ethtool_ops; int * netdev_ops; int priv_flags; int type; } ;


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

__attribute__((used)) static void FUNC_0(struct net_device *VAR_10)
{
 VAR_10->type = VAR_0;
 VAR_10->priv_flags |= VAR_2;

 VAR_10->netdev_ops = &VAR_9;
 VAR_10->ethtool_ops = &VAR_8;
 VAR_10->needs_free_netdev = 1;

 VAR_10->features = VAR_6 | VAR_3 |
   VAR_4 | VAR_5;
 VAR_10->flags = VAR_1;





 VAR_10->mtu = VAR_7;
 VAR_10->min_mtu = sizeof(struct nlmsghdr);
}
