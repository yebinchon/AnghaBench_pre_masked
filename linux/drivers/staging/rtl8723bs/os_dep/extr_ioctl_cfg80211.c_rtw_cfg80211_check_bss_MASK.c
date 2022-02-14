
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int SsidLength; int Ssid; } ;
struct TYPE_8__ {int DSConfig; } ;
struct wlan_bssid_ex {TYPE_4__ Ssid; int MacAddress; TYPE_3__ Configuration; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_bss {int dummy; } ;
struct TYPE_6__ {struct wlan_bssid_ex network; } ;
struct TYPE_7__ {TYPE_1__ mlmext_info; } ;
struct adapter {TYPE_5__* rtw_wdev; TYPE_2__ mlmeextpriv; } ;
struct TYPE_10__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cfg80211_bss* FUNC_0 (int ,struct ieee80211_channel*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,struct cfg80211_bss*) ;
 struct ieee80211_channel* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct adapter *VAR_2)
{
 struct wlan_bssid_ex *VAR_3 = &(VAR_2->mlmeextpriv.mlmext_info.network);
 struct cfg80211_bss *VAR_4 = ((void*)0);
 struct ieee80211_channel *VAR_5 = ((void*)0);
 u32 VAR_6;

 if (!(VAR_3) || !(VAR_2->rtw_wdev))
  return 0;

 VAR_6 = FUNC_3(VAR_3->Configuration.DSConfig, VAR_0);

 VAR_5 = FUNC_2(VAR_2->rtw_wdev->wiphy, VAR_6);
 VAR_4 = FUNC_0(VAR_2->rtw_wdev->wiphy, VAR_5,
   VAR_3->MacAddress, VAR_3->Ssid.Ssid,
   VAR_3->Ssid.SsidLength,
   VAR_1, VAR_1);

 FUNC_1(VAR_2->rtw_wdev->wiphy, VAR_4);

 return (VAR_4!= ((void*)0));
}
