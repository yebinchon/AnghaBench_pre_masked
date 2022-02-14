
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ieee80211_tx_rate {size_t idx; int flags; } ;
struct ieee80211_rate {int dummy; } ;
struct cw1200_common {TYPE_2__* channel; TYPE_1__* hw; struct ieee80211_rate const* mcs_rates; } ;
struct TYPE_8__ {TYPE_3__** bands; } ;
struct TYPE_7__ {struct ieee80211_rate const* bitrates; } ;
struct TYPE_6__ {size_t band; } ;
struct TYPE_5__ {TYPE_4__* wiphy; } ;


 int VAR_0 ;

__attribute__((used)) static const struct ieee80211_rate *
FUNC_0(const struct cw1200_common *VAR_1,
     const struct ieee80211_tx_rate *VAR_2)
{
 if (VAR_2->idx < 0)
  return ((void*)0);
 if (VAR_2->flags & VAR_0)
  return &VAR_1->mcs_rates[VAR_2->idx];
 return &VAR_1->hw->wiphy->bands[VAR_1->channel->band]->
  bitrates[VAR_2->idx];
}
