
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int needs_free_netdev; int perm_addr; int addr_assign_type; int * ethtool_ops; scalar_t__ hard_header_len; int type; int * header_ops; int tx_queue_len; int dev_addr; int needed_headroom; int mtu; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_1(struct net_device *VAR_9)
{
 VAR_9->netdev_ops = &VAR_8;
 VAR_9->mtu = VAR_4;
 VAR_9->needed_headroom = VAR_5;
 FUNC_0(VAR_9->dev_addr);
 VAR_9->tx_queue_len = VAR_6;


 VAR_9->header_ops = ((void*)0);
 VAR_9->type = VAR_0;
 VAR_9->hard_header_len = 0;
 VAR_9->flags &= ~(VAR_1 | VAR_2);

 VAR_9->needs_free_netdev = 1;
 VAR_9->ethtool_ops = &VAR_7;


 VAR_9->addr_assign_type = VAR_3;
 FUNC_0(VAR_9->perm_addr);
}
