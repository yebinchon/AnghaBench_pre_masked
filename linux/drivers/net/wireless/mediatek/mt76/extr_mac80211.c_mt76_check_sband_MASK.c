
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mt76_dev {TYPE_3__* hw; } ;
struct ieee80211_supported_band {int n_channels; TYPE_1__* channels; } ;
struct TYPE_6__ {TYPE_2__* wiphy; } ;
struct TYPE_5__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct mt76_dev *VAR_1, int VAR_2)
{
 struct ieee80211_supported_band *VAR_3 = VAR_1->hw->wiphy->bands[VAR_2];
 bool VAR_4 = 0;
 int VAR_5;

 if (!VAR_3)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_3->n_channels; VAR_5++) {
  if (VAR_3->channels[VAR_5].flags & VAR_0)
   continue;

  VAR_4 = 1;
  break;
 }

 if (VAR_4)
  return;

 VAR_3->n_channels = 0;
 VAR_1->hw->wiphy->bands[VAR_2] = ((void*)0);
}
