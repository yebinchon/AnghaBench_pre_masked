
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ ssid_length; int ssid; } ;
struct wlan_bssid_ex {TYPE_1__ ssid; int MacAddress; int ies; } ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct wlan_bssid_ex *VAR_3, struct wlan_bssid_ex *VAR_4)
{
 u16 VAR_5, VAR_6;
 __le16 VAR_7, VAR_8;

 FUNC_2((u8 *)&VAR_7, FUNC_3(VAR_3->ies), 2);
 FUNC_2((u8 *)&VAR_8, FUNC_3(VAR_4->ies), 2);

 VAR_5 = FUNC_0(VAR_7);
 VAR_6 = FUNC_0(VAR_8);

 return ((VAR_3->ssid.ssid_length == VAR_4->ssid.ssid_length) &&
  (!FUNC_1(VAR_3->MacAddress, VAR_4->MacAddress, VAR_0)) &&
  (!FUNC_1(VAR_3->ssid.ssid, VAR_4->ssid.ssid, VAR_3->ssid.ssid_length)) &&
  ((VAR_5 & VAR_2) ==
  (VAR_6 & VAR_2)) &&
  ((VAR_5 & VAR_1) ==
  (VAR_6 & VAR_1)));
}
