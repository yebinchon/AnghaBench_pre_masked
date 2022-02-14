
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; int flags; int * ethtool_ops; int * netdev_ops; int watchdog_timeo; int tx_queue_len; void* max_mtu; scalar_t__ min_mtu; void* mtu; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int *,char*,struct net_device*) ;
 int FUNC_1 (int,int *,char*,struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_3(struct net_device *VAR_10)
{
 FUNC_1(3, ((void*)0), "(net_dev %p)\n", VAR_10);
 FUNC_2(VAR_10);
 VAR_10->mtu = VAR_0;
 VAR_10->min_mtu = 0;
 VAR_10->max_mtu = VAR_0;
 VAR_10->tx_queue_len = VAR_1;
 VAR_10->features =
    VAR_7
  | VAR_6;
 VAR_10->flags =
  VAR_5
  & (~VAR_3
     & ~VAR_4);
 VAR_10->watchdog_timeo = VAR_2;
 VAR_10->netdev_ops = &VAR_9;
 VAR_10->ethtool_ops = &VAR_8;
 FUNC_0(3, ((void*)0), "(net_dev %p) = void\n", VAR_10);
}
