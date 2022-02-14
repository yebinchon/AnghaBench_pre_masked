
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * wireless_handlers; int * wireless_data; int * netdev_ops; int * ethtool_ops; int watchdog_timeo; } ;
struct gelic_wl_info {int wireless_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*) ;
 struct gelic_wl_info* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_4)
{
 struct gelic_wl_info *VAR_5;
 VAR_5 = FUNC_2(FUNC_1(VAR_4));
 FUNC_0(!VAR_5);
 VAR_4->watchdog_timeo = VAR_0;

 VAR_4->ethtool_ops = &VAR_1;
 VAR_4->netdev_ops = &VAR_2;
 VAR_4->wireless_data = &VAR_5->wireless_data;
 VAR_4->wireless_handlers = &VAR_3;
}
