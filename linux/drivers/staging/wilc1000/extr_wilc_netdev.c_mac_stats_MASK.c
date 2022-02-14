
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct wilc_vif {struct net_device_stats netstats; } ;
struct net_device {int dummy; } ;


 struct wilc_vif* FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_1(struct net_device *VAR_0)
{
 struct wilc_vif *VAR_1 = FUNC_0(VAR_0);

 return &VAR_1->netstats;
}
