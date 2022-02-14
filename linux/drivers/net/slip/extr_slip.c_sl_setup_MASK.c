
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int tx_queue_len; int min_mtu; int max_mtu; int flags; scalar_t__ addr_len; scalar_t__ hard_header_len; int priv_destructor; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_5)
{
 VAR_5->netdev_ops = &VAR_4;
 VAR_5->needs_free_netdev = 1;
 VAR_5->priv_destructor = VAR_3;

 VAR_5->hard_header_len = 0;
 VAR_5->addr_len = 0;
 VAR_5->tx_queue_len = 10;


 VAR_5->min_mtu = 68;
 VAR_5->max_mtu = 65534;


 VAR_5->flags = VAR_1|VAR_2|VAR_0;
}
