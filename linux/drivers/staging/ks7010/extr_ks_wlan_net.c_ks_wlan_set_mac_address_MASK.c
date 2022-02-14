
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct ks_wlan_private {int mac_address_valid; int eth_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ks_wlan_private*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct net_device*,char*,int ) ;
 struct ks_wlan_private* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static
int FUNC_6(struct net_device *VAR_2, void *VAR_3)
{
 struct ks_wlan_private *VAR_4 = FUNC_4(VAR_2);
 struct sockaddr *VAR_5 = (struct sockaddr *)VAR_3;

 if (FUNC_5(VAR_2))
  return -VAR_0;
 FUNC_2(VAR_2->dev_addr, VAR_5->sa_data, VAR_2->addr_len);
 FUNC_0(VAR_4->eth_addr, VAR_5->sa_data);

 VAR_4->mac_address_valid = 0;
 FUNC_1(VAR_4, VAR_1);
 FUNC_3(VAR_2, "ks_wlan:  MAC ADDRESS = %pM\n", VAR_4->eth_addr);
 return 0;
}
