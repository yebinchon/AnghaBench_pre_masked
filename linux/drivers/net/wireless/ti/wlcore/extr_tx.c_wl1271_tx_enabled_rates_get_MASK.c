
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct wl1271 {TYPE_1__* hw; } ;
struct ieee80211_supported_band {int n_bitrates; TYPE_2__* bitrates; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_6__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_5__ {int hw_value; } ;
struct TYPE_4__ {TYPE_3__* wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;

u32 FUNC_0(struct wl1271 *VAR_2, u32 VAR_3,
    enum nl80211_band VAR_4)
{
 struct ieee80211_supported_band *VAR_5;
 u32 VAR_6 = 0;
 int VAR_7;

 VAR_5 = VAR_2->hw->wiphy->bands[VAR_4];
 for (VAR_7 = 0; VAR_7 < VAR_5->n_bitrates; VAR_7++) {
  if (VAR_3 & 0x1)
   VAR_6 |= VAR_5->bitrates[VAR_7].hw_value;
  VAR_3 >>= 1;
 }


 VAR_3 >>= VAR_1 - VAR_5->n_bitrates;

 for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
  if (VAR_3 & 0x1)
   VAR_6 |= (VAR_0 << VAR_7);
  VAR_3 >>= 1;
 }

 return VAR_6;
}
