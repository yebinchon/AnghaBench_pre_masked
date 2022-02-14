
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int tx_queue_len; int * ethtool_ops; scalar_t__ mtu; int type; int watchdog_timeo; int * netdev_ops; } ;
struct hso_net {int net_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_6 ;
 struct hso_net* FUNC_1 (struct net_device*) ;
 int VAR_7 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_8)
{
 struct hso_net *VAR_9 = FUNC_1(VAR_8);

 FUNC_0(0x1, "sizeof hso_net is %zu\n", sizeof(*VAR_9));


 VAR_8->netdev_ops = &VAR_6;
 VAR_8->watchdog_timeo = VAR_2;
 VAR_8->flags = VAR_5 | VAR_4 | VAR_3;
 VAR_8->type = VAR_0;
 VAR_8->mtu = VAR_1 - 14;
 VAR_8->tx_queue_len = 10;
 VAR_8->ethtool_ops = &VAR_7;


 FUNC_2(&VAR_9->net_lock);
}
