
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


typedef int u8 ;
typedef int u16 ;
struct TYPE_8__ {TYPE_1__* chan; } ;
struct TYPE_9__ {TYPE_2__ chandef; } ;
struct mt7615_dev {TYPE_3__ mt76; } ;
struct ieee80211_tx_rate {int flags; int idx; } ;
struct ieee80211_rate {int hw_value_short; int hw_value; } ;
struct TYPE_12__ {TYPE_5__* wiphy; } ;
struct TYPE_11__ {TYPE_4__** bands; } ;
struct TYPE_10__ {struct ieee80211_rate* bitrates; } ;
struct TYPE_7__ {int band; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct ieee80211_tx_rate const*) ;
 int FUNC_2 (struct ieee80211_tx_rate const*) ;
 TYPE_6__* FUNC_3 (struct mt7615_dev*) ;

__attribute__((used)) static u16
FUNC_4(struct mt7615_dev *VAR_14,
         const struct ieee80211_tx_rate *VAR_15,
         bool VAR_16, u8 *VAR_17)
{
 u8 VAR_18, VAR_19, VAR_20;
 u16 VAR_21 = 0;

 *VAR_17 = 0;

 if (VAR_15->flags & VAR_6) {
  VAR_20 = FUNC_1(VAR_15);
  VAR_19 = FUNC_2(VAR_15);
  VAR_18 = VAR_9;
  if (VAR_15->flags & VAR_1)
   *VAR_17 = 1;
  else if (VAR_15->flags & VAR_2)
   *VAR_17 = 2;
  else if (VAR_15->flags & VAR_0)
   *VAR_17 = 3;
 } else if (VAR_15->flags & VAR_4) {
  VAR_20 = VAR_15->idx;
  VAR_19 = 1 + (VAR_15->idx >> 3);
  VAR_18 = VAR_7;
  if (VAR_15->flags & VAR_3)
   VAR_18 = VAR_8;
  if (VAR_15->flags & VAR_1)
   *VAR_17 = 1;
 } else {
  const struct ieee80211_rate *VAR_22;
  int VAR_23 = VAR_14->mt76.chandef.chan->band;
  u16 VAR_24;

  VAR_19 = 1;
  VAR_22 = &FUNC_3(VAR_14)->wiphy->bands[VAR_23]->bitrates[VAR_15->idx];
  if (VAR_15->flags & VAR_5)
   VAR_24 = VAR_22->hw_value_short;
  else
   VAR_24 = VAR_22->hw_value;

  VAR_18 = VAR_24 >> 8;
  VAR_20 = VAR_24 & 0xff;
 }

 if (VAR_16 && VAR_19 == 1) {
  VAR_19++;
  VAR_21 |= VAR_13;
 }

 VAR_21 |= (FUNC_0(VAR_10, VAR_20) |
      FUNC_0(VAR_11, VAR_18) |
      FUNC_0(VAR_12, VAR_19 - 1));

 return VAR_21;
}
