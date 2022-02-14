
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ieee80211_supported_band {unsigned int n_bitrates; TYPE_3__* bitrates; } ;
struct ieee80211_rx_status {int rate_idx; int enc_flags; int bw; int encoding; } ;
struct ieee80211_hw {TYPE_2__* wiphy; } ;
struct ath_rx_status {int rs_rate; int bw; int enc_flags; } ;
struct ath_hw {TYPE_4__* curchan; } ;
struct ath_common {struct ath_hw* ah; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_9__ {TYPE_1__* chan; } ;
struct TYPE_8__ {int hw_value; int hw_value_short; } ;
struct TYPE_7__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_6__ {int band; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_2(struct ath_common *VAR_5,
      struct ieee80211_hw *VAR_6,
      struct ath_rx_status *VAR_7,
      struct ieee80211_rx_status *VAR_8)
{
 struct ieee80211_supported_band *VAR_9;
 enum nl80211_band VAR_10;
 unsigned int VAR_11 = 0;
 struct ath_hw *VAR_12 = VAR_5->ah;

 VAR_10 = VAR_12->curchan->chan->band;
 VAR_9 = VAR_6->wiphy->bands[VAR_10];

 if (FUNC_1(VAR_12->curchan))
  VAR_8->bw = VAR_2;
 else if (FUNC_0(VAR_12->curchan))
  VAR_8->bw = VAR_1;

 if (VAR_7->rs_rate & 0x80) {

  VAR_8->encoding = VAR_4;
  VAR_8->enc_flags |= VAR_7->enc_flags;
  VAR_8->bw = VAR_7->bw;
  VAR_8->rate_idx = VAR_7->rs_rate & 0x7f;
  return 0;
 }

 for (VAR_11 = 0; VAR_11 < VAR_9->n_bitrates; VAR_11++) {
  if (VAR_9->bitrates[VAR_11].hw_value == VAR_7->rs_rate) {
   VAR_8->rate_idx = VAR_11;
   return 0;
  }
  if (VAR_9->bitrates[VAR_11].hw_value_short == VAR_7->rs_rate) {
   VAR_8->enc_flags |= VAR_3;
   VAR_8->rate_idx = VAR_11;
   return 0;
  }
 }

 return -VAR_0;
}
