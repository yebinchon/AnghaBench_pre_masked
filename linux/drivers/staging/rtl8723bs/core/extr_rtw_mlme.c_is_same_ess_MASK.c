
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ SsidLength; int Ssid; } ;
struct wlan_bssid_ex {TYPE_1__ Ssid; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

inline int FUNC_1(struct wlan_bssid_ex *VAR_0, struct wlan_bssid_ex *VAR_1)
{


 return (VAR_0->Ssid.SsidLength == VAR_1->Ssid.SsidLength)
  && !FUNC_0(VAR_0->Ssid.Ssid, VAR_1->Ssid.Ssid, VAR_0->Ssid.SsidLength);
}
