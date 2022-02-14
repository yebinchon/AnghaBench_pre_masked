
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ SsidLength; int Ssid; } ;
struct wlan_bssid_ex {TYPE_1__ Ssid; int MacAddress; int IEs; } ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct wlan_bssid_ex*,struct wlan_bssid_ex*,int*,int*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct wlan_bssid_ex *VAR_3, struct wlan_bssid_ex *VAR_4, u8 VAR_5)
{
 u16 VAR_6, VAR_7;
 __le16 VAR_8, VAR_9;

 if (FUNC_3(VAR_4, VAR_3, &VAR_6, &VAR_7) == 0)
   return 0;

 FUNC_2((u8 *)&VAR_8, FUNC_4(VAR_3->IEs), 2);
 FUNC_2((u8 *)&VAR_9, FUNC_4(VAR_4->IEs), 2);


 VAR_6 = FUNC_0(VAR_8);
 VAR_7 = FUNC_0(VAR_9);

 return (VAR_3->Ssid.SsidLength == VAR_4->Ssid.SsidLength) &&

   ((!FUNC_1(VAR_3->MacAddress, VAR_4->MacAddress, VAR_0))) &&
   ((!FUNC_1(VAR_3->Ssid.Ssid, VAR_4->Ssid.Ssid, VAR_3->Ssid.SsidLength))) &&
   ((VAR_6 & VAR_2) ==
   (VAR_7 & VAR_2)) &&
   ((VAR_6 & VAR_1) ==
   (VAR_7 & VAR_1));

}
