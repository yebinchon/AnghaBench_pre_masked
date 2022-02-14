
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int link_ksettings; int group; int owner; } ;
struct net_device {int needs_free_netdev; int tx_queue_len; int priv_destructor; int * ethtool_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tun_struct* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_5)
{
 struct tun_struct *VAR_6 = FUNC_0(VAR_5);

 VAR_6->owner = VAR_1;
 VAR_6->group = VAR_0;
 FUNC_1(VAR_5, &VAR_6->link_ksettings);

 VAR_5->ethtool_ops = &VAR_3;
 VAR_5->needs_free_netdev = 1;
 VAR_5->priv_destructor = VAR_4;

 VAR_5->tx_queue_len = VAR_2;
}
