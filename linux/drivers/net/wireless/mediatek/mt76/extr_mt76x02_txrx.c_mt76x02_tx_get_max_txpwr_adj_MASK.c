
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {TYPE_4__** bands; } ;
struct mt76_rate_power {int * ofdm; int * cck; int * ht; int * vht; } ;
struct TYPE_7__ {TYPE_1__* chan; } ;
struct TYPE_10__ {struct mt76_rate_power rate_power; TYPE_3__* hw; TYPE_2__ chandef; } ;
struct mt76x02_dev {TYPE_5__ mt76; } ;
struct ieee80211_tx_rate {int flags; int idx; } ;
struct ieee80211_rate {int flags; int hw_value; } ;
typedef int s8 ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_9__ {struct ieee80211_rate* bitrates; } ;
struct TYPE_8__ {struct wiphy* wiphy; } ;
struct TYPE_6__ {int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ieee80211_tx_rate const*) ;
 int FUNC_1 (struct ieee80211_tx_rate const*) ;

s8 FUNC_2(struct mt76x02_dev *VAR_4,
    const struct ieee80211_tx_rate *VAR_5)
{
 s8 VAR_6;

 if (VAR_5->flags & VAR_2) {
  u8 VAR_7 = FUNC_0(VAR_5);

  if (VAR_7 == 8 || VAR_7 == 9) {
   VAR_6 = VAR_4->mt76.rate_power.vht[8];
  } else {
   u8 VAR_8, VAR_9;

   VAR_8 = FUNC_1(VAR_5);
   VAR_9 = ((VAR_8 - 1) << 3) + VAR_7;
   VAR_6 = VAR_4->mt76.rate_power.ht[VAR_9 & 0xf];
  }
 } else if (VAR_5->flags & VAR_1) {
  VAR_6 = VAR_4->mt76.rate_power.ht[VAR_5->idx & 0xf];
 } else {
  enum nl80211_band VAR_10 = VAR_4->mt76.chandef.chan->band;

  if (VAR_10 == VAR_3) {
   const struct ieee80211_rate *VAR_11;
   struct wiphy *VAR_12 = VAR_4->mt76.hw->wiphy;
   struct mt76_rate_power *VAR_13 = &VAR_4->mt76.rate_power;

   VAR_11 = &VAR_12->bands[VAR_10]->bitrates[VAR_5->idx];
   if (VAR_11->flags & VAR_0)
    VAR_6 = VAR_13->cck[VAR_11->hw_value & 0x3];
   else
    VAR_6 = VAR_13->ofdm[VAR_11->hw_value & 0x7];
  } else {
   VAR_6 = VAR_4->mt76.rate_power.ofdm[VAR_5->idx & 0x7];
  }
 }

 return VAR_6;
}
