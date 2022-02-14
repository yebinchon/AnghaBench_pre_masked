
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int tx_queue_len; int features; int flags; int type; int mtu; scalar_t__ addr_len; scalar_t__ hard_header_len; int priv_destructor; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_6)
{
 VAR_6->netdev_ops = &VAR_5;
 VAR_6->needs_free_netdev = 1;
 VAR_6->priv_destructor = VAR_4;

 VAR_6->hard_header_len = 0;
 VAR_6->addr_len = 0;
 VAR_6->tx_queue_len = 10;

 VAR_6->mtu = VAR_1;
 VAR_6->type = VAR_0;


 VAR_6->flags = VAR_2;
 VAR_6->features = VAR_3;
}
