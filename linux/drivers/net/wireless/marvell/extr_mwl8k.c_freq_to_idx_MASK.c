
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mwl8k_priv {TYPE_3__* hw; } ;
struct ieee80211_supported_band {int n_channels; TYPE_1__* channels; } ;
struct TYPE_6__ {TYPE_2__* wiphy; } ;
struct TYPE_5__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_4__ {int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct mwl8k_priv *VAR_2, int VAR_3)
{
 struct ieee80211_supported_band *VAR_4;
 int VAR_5, VAR_6, VAR_7 = 0;

 for (VAR_5 = VAR_0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = VAR_2->hw->wiphy->bands[VAR_5];
  if (!VAR_4)
   continue;

  for (VAR_6 = 0; VAR_6 < VAR_4->n_channels; VAR_6++, VAR_7++)
   if (VAR_4->channels[VAR_6].center_freq == VAR_3)
    goto exit;
 }

exit:
 return VAR_7;
}
