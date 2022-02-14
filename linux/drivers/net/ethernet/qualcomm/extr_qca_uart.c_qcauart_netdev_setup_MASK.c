
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int tx_queue_len; int max_mtu; int min_mtu; int priv_flags; int watchdog_timeo; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_5)
{
 VAR_5->netdev_ops = &VAR_4;
 VAR_5->watchdog_timeo = VAR_3;
 VAR_5->priv_flags &= ~VAR_0;
 VAR_5->tx_queue_len = 100;


 VAR_5->min_mtu = VAR_2;
 VAR_5->max_mtu = VAR_1;
}
