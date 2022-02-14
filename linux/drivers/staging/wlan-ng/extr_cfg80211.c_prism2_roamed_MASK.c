
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlandevice {int netdev; int bssid; } ;
struct cfg80211_roam_info {int bssid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct cfg80211_roam_info*,int ) ;

void FUNC_1(struct wlandevice *VAR_1)
{
 struct cfg80211_roam_info VAR_2 = {
  .bssid = VAR_1->bssid,
 };

 FUNC_0(VAR_1->netdev, &VAR_2, VAR_0);
}
