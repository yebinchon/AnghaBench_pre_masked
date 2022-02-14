
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int watchdog_timeo; int * wireless_handlers; int * netdev_ops; int dev_addr; } ;
struct ks_wlan_private {int mac_address_valid; int is_device_open; int eth_addr; scalar_t__ need_commit; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ks_wlan_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_5(struct net_device *VAR_7)
{
 struct ks_wlan_private *VAR_8;


 VAR_8 = FUNC_2(VAR_7);
 VAR_8->mac_address_valid = 0;
 VAR_8->is_device_open = 1;
 VAR_8->need_commit = 0;

 FUNC_0(&VAR_5, 0);
 FUNC_4(&VAR_6, VAR_4, 0);


 FUNC_1(VAR_8->eth_addr, VAR_1);
 FUNC_1(VAR_7->dev_addr, VAR_8->eth_addr);


 VAR_7->netdev_ops = &VAR_3;
 VAR_7->wireless_handlers = &VAR_2;
 VAR_7->watchdog_timeo = VAR_0;

 FUNC_3(VAR_7);

 return 0;
}
