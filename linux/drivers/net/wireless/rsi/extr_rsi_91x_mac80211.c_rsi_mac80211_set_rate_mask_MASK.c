
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rsi_hw {struct rsi_common* priv; } ;
struct rsi_common {int* fixedrate_mask; int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_6__ {TYPE_1__* chan; } ;
struct TYPE_7__ {TYPE_2__ chandef; } ;
struct ieee80211_hw {TYPE_3__ conf; struct rsi_hw* priv; } ;
struct cfg80211_bitrate_mask {TYPE_4__* control; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_8__ {int legacy; int* ht_mcs; } ;
struct TYPE_5__ {int band; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_0,
          struct ieee80211_vif *VAR_1,
          const struct cfg80211_bitrate_mask *VAR_2)
{
 struct rsi_hw *VAR_3 = VAR_0->priv;
 struct rsi_common *VAR_4 = VAR_3->priv;
 enum nl80211_band VAR_5 = VAR_0->conf.chandef.chan->band;

 FUNC_0(&VAR_4->mutex);
 VAR_4->fixedrate_mask[VAR_5] = 0;

 if (VAR_2->control[VAR_5].legacy == 0xfff) {
  VAR_4->fixedrate_mask[VAR_5] =
   (VAR_2->control[VAR_5].ht_mcs[0] << 12);
 } else {
  VAR_4->fixedrate_mask[VAR_5] =
   VAR_2->control[VAR_5].legacy;
 }
 FUNC_1(&VAR_4->mutex);

 return 0;
}
