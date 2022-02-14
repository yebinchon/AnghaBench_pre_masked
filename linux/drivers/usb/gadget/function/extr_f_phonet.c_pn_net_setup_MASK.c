
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int hard_header_len; int addr_len; int tx_queue_len; int needs_free_netdev; int * header_ops; int * netdev_ops; int * dev_addr; int max_mtu; int min_mtu; int mtu; int type; scalar_t__ features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_9)
{
 VAR_9->features = 0;
 VAR_9->type = VAR_0;
 VAR_9->flags = VAR_2 | VAR_1;
 VAR_9->mtu = VAR_3;
 VAR_9->min_mtu = VAR_5;
 VAR_9->max_mtu = VAR_4;
 VAR_9->hard_header_len = 1;
 VAR_9->dev_addr[0] = VAR_6;
 VAR_9->addr_len = 1;
 VAR_9->tx_queue_len = 1;

 VAR_9->netdev_ops = &VAR_8;
 VAR_9->needs_free_netdev = 1;
 VAR_9->header_ops = &VAR_7;
}
