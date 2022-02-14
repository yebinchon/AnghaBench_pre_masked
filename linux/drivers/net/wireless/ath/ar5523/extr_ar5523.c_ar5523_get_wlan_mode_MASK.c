
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_supported_band {int n_bitrates; TYPE_6__* bitrates; } ;
struct ieee80211_sta {int* supp_rates; } ;
struct ieee80211_bss_conf {int bssid; } ;
struct ar5523 {TYPE_5__* hw; int vif; } ;
struct TYPE_12__ {int bitrate; } ;
struct TYPE_9__ {TYPE_2__* chan; } ;
struct TYPE_10__ {TYPE_3__ chandef; } ;
struct TYPE_11__ {TYPE_4__ conf; TYPE_1__* wiphy; } ;
struct TYPE_8__ {size_t band; } ;
struct TYPE_7__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar5523*,char*) ;
 struct ieee80211_sta* FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ar5523 *VAR_2,
    struct ieee80211_bss_conf *VAR_3)
{
 struct ieee80211_supported_band *VAR_4;
 int VAR_5;
 struct ieee80211_sta *VAR_6;
 u32 VAR_7;

 VAR_4 = VAR_2->hw->wiphy->bands[VAR_2->hw->conf.chandef.chan->band];
 VAR_6 = FUNC_1(VAR_2->vif, VAR_3->bssid);
 if (!VAR_6) {
  FUNC_0(VAR_2, "STA not found!\n");
  return VAR_0;
 }
 VAR_7 = VAR_6->supp_rates[VAR_2->hw->conf.chandef.chan->band];

 for (VAR_5 = 0; VAR_5 < VAR_4->n_bitrates; VAR_5++) {
  if (VAR_7 & 1) {
   int VAR_8 = VAR_4->bitrates[VAR_5].bitrate;
   switch (VAR_8) {
   case 60:
   case 90:
   case 120:
   case 180:
   case 240:
   case 360:
   case 480:
   case 540:
    return VAR_1;
   }
  }
  VAR_7 >>= 1;
 }
 return VAR_0;
}
