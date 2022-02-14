
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wlan_bssid_ex {int IEs; } ;
typedef int __le16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ) ;

u16 FUNC_3(struct wlan_bssid_ex *VAR_0)
{
 __le16 VAR_1;

 FUNC_1((u8 *)&VAR_1, FUNC_2(VAR_0->IEs), 2);

 return FUNC_0(VAR_1);
}
