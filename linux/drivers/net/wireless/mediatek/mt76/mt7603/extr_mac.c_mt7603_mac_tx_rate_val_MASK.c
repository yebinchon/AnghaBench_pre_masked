
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
struct mt7603_dev {TYPE_3__ mt76; } ;
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
 TYPE_6__* FUNC_1 (struct mt7603_dev*) ;

__attribute__((used)) static u16
FUNC_2(struct mt7603_dev *VAR_9,
         const struct ieee80211_tx_rate *VAR_10, bool VAR_11, u8 *VAR_12)
{
 u8 VAR_13, VAR_14, VAR_15;
 u16 VAR_16;

 *VAR_12 = 0;
 if (VAR_10->flags & VAR_2) {
  VAR_15 = VAR_10->idx;
  VAR_14 = 1 + (VAR_10->idx >> 3);
  VAR_13 = VAR_4;
  if (VAR_10->flags & VAR_1)
   VAR_13 = VAR_5;
  if (VAR_10->flags & VAR_0)
   *VAR_12 = 1;
 } else {
  const struct ieee80211_rate *VAR_17;
  int VAR_18 = VAR_9->mt76.chandef.chan->band;
  u16 VAR_19;

  VAR_14 = 1;
  VAR_17 = &FUNC_1(VAR_9)->wiphy->bands[VAR_18]->bitrates[VAR_10->idx];
  if (VAR_10->flags & VAR_3)
   VAR_19 = VAR_17->hw_value_short;
  else
   VAR_19 = VAR_17->hw_value;

  VAR_13 = VAR_19 >> 8;
  VAR_15 = VAR_19 & 0xff;
 }

 VAR_16 = (FUNC_0(VAR_6, VAR_15) |
     FUNC_0(VAR_7, VAR_13));

 if (VAR_11 && VAR_14 == 1)
  VAR_16 |= VAR_8;

 return VAR_16;
}
