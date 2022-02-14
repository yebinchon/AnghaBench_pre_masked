
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int hard_header_len; int mtu; scalar_t__ addr_len; int type; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_2)
{
 VAR_2->netdev_ops = &VAR_1;
 VAR_2->needs_free_netdev = 1;
 VAR_2->type = VAR_0;
 VAR_2->hard_header_len = 3;
 VAR_2->mtu = 1000;
 VAR_2->addr_len = 0;
}
