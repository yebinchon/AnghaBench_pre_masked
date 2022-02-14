
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ssid_length; int ssid; } ;
struct wlan_bssid_ex {TYPE_1__ ssid; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct wlan_bssid_ex *VAR_0, struct wlan_bssid_ex *VAR_1)
{
 return (VAR_0->ssid.ssid_length == VAR_1->ssid.ssid_length) &&
        !FUNC_0(VAR_0->ssid.ssid, VAR_1->ssid.ssid, VAR_0->ssid.ssid_length);
}
