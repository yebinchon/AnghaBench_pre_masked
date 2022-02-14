
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_supported_band {int n_channels; TYPE_1__* channels; } ;
struct ath10k {scalar_t__ low_5ghz_chan; scalar_t__ high_5ghz_chan; } ;
struct TYPE_2__ {scalar_t__ center_freq; int flags; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ath10k *VAR_1,
        struct ieee80211_supported_band *VAR_2)
{
 int VAR_3;

 if (VAR_1->low_5ghz_chan && VAR_1->high_5ghz_chan) {
  for (VAR_3 = 0; VAR_3 < VAR_2->n_channels; VAR_3++) {
   if (VAR_2->channels[VAR_3].center_freq < VAR_1->low_5ghz_chan ||
       VAR_2->channels[VAR_3].center_freq > VAR_1->high_5ghz_chan)
    VAR_2->channels[VAR_3].flags |=
     VAR_0;
  }
 }
}
