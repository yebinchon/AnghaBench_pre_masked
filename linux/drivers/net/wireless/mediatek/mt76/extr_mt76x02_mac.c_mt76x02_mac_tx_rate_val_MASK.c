
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
struct TYPE_12__ {TYPE_5__* hw; TYPE_2__ chandef; } ;
struct mt76x02_dev {TYPE_6__ mt76; } ;
struct ieee80211_tx_rate {int flags; int idx; } ;
struct ieee80211_rate {int hw_value_short; int hw_value; } ;
typedef int __le16 ;
struct TYPE_11__ {TYPE_4__* wiphy; } ;
struct TYPE_10__ {TYPE_3__** bands; } ;
struct TYPE_9__ {struct ieee80211_rate* bitrates; } ;
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
 int FUNC_1 (int) ;

__attribute__((used)) static __le16
FUNC_2(struct mt76x02_dev *VAR_14,
   const struct ieee80211_tx_rate *VAR_15, u8 *VAR_16)
{
 u8 VAR_17, VAR_18, VAR_19, VAR_20 = 0;
 u16 VAR_21;

 if (VAR_15->flags & VAR_6) {
  VAR_18 = VAR_15->idx;
  VAR_19 = 1 + (VAR_15->idx >> 4);
  VAR_17 = VAR_9;
  if (VAR_15->flags & VAR_1)
   VAR_20 = 2;
  else if (VAR_15->flags & VAR_0)
   VAR_20 = 1;
 } else if (VAR_15->flags & VAR_3) {
  VAR_18 = VAR_15->idx;
  VAR_19 = 1 + (VAR_15->idx >> 3);
  VAR_17 = VAR_7;
  if (VAR_15->flags & VAR_2)
   VAR_17 = VAR_8;
  if (VAR_15->flags & VAR_0)
   VAR_20 = 1;
 } else {
  const struct ieee80211_rate *VAR_22;
  int VAR_23 = VAR_14->mt76.chandef.chan->band;
  u16 VAR_24;

  VAR_22 = &VAR_14->mt76.hw->wiphy->bands[VAR_23]->bitrates[VAR_15->idx];
  if (VAR_15->flags & VAR_5)
   VAR_24 = VAR_22->hw_value_short;
  else
   VAR_24 = VAR_22->hw_value;

  VAR_17 = VAR_24 >> 8;
  VAR_18 = VAR_24 & 0xff;
  VAR_19 = 1;
 }

 VAR_21 = FUNC_0(VAR_11, VAR_18);
 VAR_21 |= FUNC_0(VAR_12, VAR_17);
 VAR_21 |= FUNC_0(VAR_10, VAR_20);
 if (VAR_15->flags & VAR_4)
  VAR_21 |= VAR_13;

 *VAR_16 = VAR_19;
 return FUNC_1(VAR_21);
}
