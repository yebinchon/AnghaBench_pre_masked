
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; void* max_mtu; void* min_mtu; void* mtu; int * netdev_ops; int watchdog_timeo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*) ;
 void** VAR_3 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_4)
{
 FUNC_0(VAR_4);

 VAR_4->watchdog_timeo = VAR_0;
 VAR_4->netdev_ops = &VAR_2;
 FUNC_1(VAR_4);
 VAR_4->mtu = VAR_3[3];
 VAR_4->min_mtu = VAR_3[0];
 VAR_4->max_mtu = VAR_3[3];
 VAR_4->features |= VAR_1;
}
