
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int hard_header_len; int tx_queue_len; int* broadcast; int flags; int watchdog_timeo; int addr_len; int mtu; int * header_ops; int * netdev_ops; int type; } ;
struct arc_hardware {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_6)
{
 VAR_6->type = VAR_1;
 VAR_6->netdev_ops = &VAR_5;
 VAR_6->header_ops = &VAR_4;
 VAR_6->hard_header_len = sizeof(struct arc_hardware);
 VAR_6->mtu = FUNC_0();

 VAR_6->addr_len = VAR_0;
 VAR_6->tx_queue_len = 100;
 VAR_6->broadcast[0] = 0x00;
 VAR_6->watchdog_timeo = VAR_3;


 VAR_6->flags = VAR_2;
}
