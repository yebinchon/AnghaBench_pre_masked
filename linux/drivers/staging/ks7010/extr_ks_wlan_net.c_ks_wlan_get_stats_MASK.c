
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct net_device {int dummy; } ;
struct ks_wlan_private {scalar_t__ dev_state; struct net_device_stats nstats; } ;


 scalar_t__ VAR_0 ;
 struct ks_wlan_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static
struct net_device_stats *FUNC_1(struct net_device *VAR_1)
{
 struct ks_wlan_private *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->dev_state < VAR_0)
  return ((void*)0);

 return &VAR_2->nstats;
}
