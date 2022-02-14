
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
typedef int u16 ;
struct TYPE_7__ {TYPE_1__* chan; } ;
struct mt7601u_dev {TYPE_5__* hw; TYPE_2__ chandef; } ;
struct ieee80211_tx_rate {int flags; int idx; } ;
struct ieee80211_rate {int hw_value_short; int hw_value; } ;
struct TYPE_10__ {TYPE_4__* wiphy; } ;
struct TYPE_9__ {TYPE_3__** bands; } ;
struct TYPE_8__ {struct ieee80211_rate* bitrates; } ;
struct TYPE_6__ {int band; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

u16 FUNC_1(struct mt7601u_dev *VAR_11,
    const struct ieee80211_tx_rate *VAR_12, u8 *VAR_13)
{
 u16 VAR_14;
 u8 VAR_15, VAR_16;
 u8 VAR_17 = 1;
 u8 VAR_18 = 0;

 if (VAR_12->flags & VAR_2) {
  VAR_16 = VAR_12->idx;
  VAR_17 = 1 + (VAR_12->idx >> 3);
  VAR_15 = VAR_5;
  if (VAR_12->flags & VAR_1)
   VAR_15 = VAR_6;
  if (VAR_12->flags & VAR_0)
   VAR_18 = 1;
 } else {
  const struct ieee80211_rate *VAR_19;
  int VAR_20 = VAR_11->chandef.chan->band;
  u16 VAR_21;

  VAR_19 = &VAR_11->hw->wiphy->bands[VAR_20]->bitrates[VAR_12->idx];
  if (VAR_12->flags & VAR_4)
   VAR_21 = VAR_19->hw_value_short;
  else
   VAR_21 = VAR_19->hw_value;

  VAR_15 = VAR_21 >> 8;
  VAR_16 = VAR_21 & 0xff;
  VAR_18 = 0;
 }

 VAR_14 = FUNC_0(VAR_8, VAR_16);
 VAR_14 |= FUNC_0(VAR_9, VAR_15);
 VAR_14 |= FUNC_0(VAR_7, VAR_18);
 if (VAR_12->flags & VAR_3)
  VAR_14 |= VAR_10;

 *VAR_13 = VAR_17;
 return VAR_14;
}
