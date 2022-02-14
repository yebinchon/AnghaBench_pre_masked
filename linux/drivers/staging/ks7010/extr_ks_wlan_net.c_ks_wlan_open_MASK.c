
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct ks_wlan_private {int mac_address_valid; scalar_t__ cur_rx; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*,int ) ;
 struct ks_wlan_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static
int FUNC_3(struct net_device *VAR_1)
{
 struct ks_wlan_private *VAR_2 = FUNC_1(VAR_1);

 VAR_2->cur_rx = 0;

 if (!VAR_2->mac_address_valid) {
  FUNC_0(VAR_1, "ks_wlan : %s Not READY !!\n", VAR_1->name);
  return -VAR_0;
 }
 FUNC_2(VAR_1);

 return 0;
}
