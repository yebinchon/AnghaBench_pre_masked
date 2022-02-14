
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int tx_queue_len; int features; int flags; scalar_t__ addr_len; scalar_t__ hard_header_len; int mtu; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_4)
{
 VAR_4->type = VAR_0;
 VAR_4->mtu = VAR_1;
 VAR_4->hard_header_len = 0;
 VAR_4->addr_len = 0;
 VAR_4->tx_queue_len = 10;


 VAR_4->flags = VAR_2;
 VAR_4->features = VAR_3;
}
