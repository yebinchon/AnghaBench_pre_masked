
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ieee80211_channel* channels; } ;
struct mt76_sband {struct mt76_channel_state* chan; TYPE_1__ sband; } ;
struct mt76_dev {struct mt76_sband sband_5g; struct mt76_sband sband_2g; } ;
struct mt76_channel_state {int dummy; } ;
struct ieee80211_channel {scalar_t__ band; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline struct mt76_channel_state *
FUNC_0(struct mt76_dev *VAR_1, struct ieee80211_channel *VAR_2)
{
 struct mt76_sband *VAR_3;
 int VAR_4;

 if (VAR_2->band == VAR_0)
  VAR_3 = &VAR_1->sband_2g;
 else
  VAR_3 = &VAR_1->sband_5g;

 VAR_4 = VAR_2 - &VAR_3->sband.channels[0];
 return &VAR_3->chan[VAR_4];
}
