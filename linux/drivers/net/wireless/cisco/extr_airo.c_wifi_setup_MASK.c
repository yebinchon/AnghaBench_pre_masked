
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int min_mtu; int tx_queue_len; int flags; int broadcast; int addr_len; int max_mtu; int mtu; int hard_header_len; int type; int * wireless_handlers; int * header_ops; int * netdev_ops; } ;


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
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_10)
{
 VAR_10->netdev_ops = &VAR_7;
 VAR_10->header_ops = &VAR_9;
 VAR_10->wireless_handlers = &VAR_8;

 VAR_10->type = VAR_1;
 VAR_10->hard_header_len = VAR_3;
 VAR_10->mtu = VAR_0;
 VAR_10->min_mtu = 68;
 VAR_10->max_mtu = VAR_6;
 VAR_10->addr_len = VAR_2;
 VAR_10->tx_queue_len = 100;

 FUNC_0(VAR_10->broadcast);

 VAR_10->flags = VAR_4|VAR_5;
}
