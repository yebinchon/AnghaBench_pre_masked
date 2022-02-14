
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


typedef scalar_t__ u32 ;
struct TYPE_8__ {int width; TYPE_1__* chan; } ;
struct TYPE_9__ {TYPE_2__ chandef; } ;
struct mt7615_dev {int dfs_state; TYPE_3__ mt76; } ;
struct TYPE_10__ {int width; TYPE_5__* chan; } ;
struct TYPE_12__ {TYPE_4__ chandef; } ;
struct ieee80211_hw {TYPE_6__ conf; } ;
typedef enum nl80211_chan_width { ____Placeholder_nl80211_chan_width } nl80211_chan_width ;
struct TYPE_11__ {scalar_t__ center_freq; } ;
struct TYPE_7__ {scalar_t__ center_freq; } ;


 struct ieee80211_hw* FUNC_0 (struct mt7615_dev*) ;

__attribute__((used)) static inline void FUNC_1(struct mt7615_dev *VAR_0)
{
 enum nl80211_chan_width VAR_1 = VAR_0->mt76.chandef.width;
 u32 VAR_2 = VAR_0->mt76.chandef.chan->center_freq;
 struct ieee80211_hw *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3->conf.chandef.chan->center_freq != VAR_2 ||
     VAR_3->conf.chandef.width != VAR_1)
  VAR_0->dfs_state = -1;
}
