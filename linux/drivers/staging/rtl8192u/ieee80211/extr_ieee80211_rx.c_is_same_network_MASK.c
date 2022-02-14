
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_network {scalar_t__ ssid_len; scalar_t__ channel; int capability; int ssid; int bssid; } ;
struct ieee80211_device {scalar_t__ iw_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct ieee80211_network *VAR_4,
      struct ieee80211_network *VAR_5, struct ieee80211_device *VAR_6)
{




 return
  (((VAR_4->ssid_len == VAR_5->ssid_len) || (VAR_6->iw_mode == VAR_1)) &&
  (VAR_4->channel == VAR_5->channel) &&
  !FUNC_0(VAR_4->bssid, VAR_5->bssid, VAR_0) &&

  (!FUNC_0(VAR_4->ssid, VAR_5->ssid, VAR_4->ssid_len) || (VAR_6->iw_mode == VAR_1)) &&
  ((VAR_4->capability & VAR_3) ==
  (VAR_5->capability & VAR_3)) &&
  ((VAR_4->capability & VAR_2) ==
  (VAR_5->capability & VAR_2)));
}
