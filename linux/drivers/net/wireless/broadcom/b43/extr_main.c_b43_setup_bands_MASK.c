
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_hw {TYPE_2__* wiphy; } ;
struct b43_phy {int radio_ver; int radio_rev; scalar_t__ type; int supports_2ghz; int supports_5ghz; } ;
struct b43_wldev {struct b43_phy phy; TYPE_1__* wl; } ;
struct TYPE_4__ {int ** bands; } ;
struct TYPE_3__ {struct ieee80211_hw* hw; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_0(struct b43_wldev *VAR_8,
      bool VAR_9, bool VAR_10)
{
 struct ieee80211_hw *VAR_11 = VAR_8->wl->hw;
 struct b43_phy *VAR_12 = &VAR_8->phy;
 bool VAR_13;
 bool VAR_14;


 VAR_13 = VAR_12->radio_ver == 0x2057 &&
       (VAR_12->radio_rev == 9 || VAR_12->radio_rev == 14);
 VAR_14 = VAR_12->radio_ver == 0x2057 &&
       VAR_12->radio_rev == 9;

 if (VAR_9)
  VAR_11->wiphy->bands[VAR_1] = VAR_13 ?
   &VAR_4 : &VAR_3;
 if (VAR_8->phy.type == VAR_0) {
  if (VAR_10)
   VAR_11->wiphy->bands[VAR_2] = VAR_14 ?
    &VAR_7 :
    &VAR_6;
 } else {
  if (VAR_10)
   VAR_11->wiphy->bands[VAR_2] = &VAR_5;
 }

 VAR_8->phy.supports_2ghz = VAR_9;
 VAR_8->phy.supports_5ghz = VAR_10;

 return 0;
}
