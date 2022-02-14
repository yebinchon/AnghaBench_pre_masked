
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ks_wlan_private {int is_device_open; } ;


 int FUNC_0 (int *) ;
 struct ks_wlan_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_0 ;

int FUNC_4(struct net_device *VAR_1)
{
 struct ks_wlan_private *VAR_2 = FUNC_1(VAR_1);

 VAR_2->is_device_open = 0;
 FUNC_0(&VAR_0);

 if (FUNC_2(VAR_1))
  FUNC_3(VAR_1);

 return 0;
}
