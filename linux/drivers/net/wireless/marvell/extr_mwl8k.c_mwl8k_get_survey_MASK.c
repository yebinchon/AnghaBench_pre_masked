
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct survey_info {int noise; int filled; int * channel; } ;
struct mwl8k_priv {int noise; int * survey; scalar_t__ ap_fw; } ;
struct ieee80211_supported_band {int n_channels; int * channels; } ;
struct TYPE_4__ {int * chan; } ;
struct ieee80211_conf {TYPE_2__ chandef; } ;
struct ieee80211_hw {TYPE_1__* wiphy; struct ieee80211_conf conf; struct mwl8k_priv* priv; } ;
struct TYPE_3__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct survey_info*,int *,int) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_hw *VAR_4, int VAR_5,
    struct survey_info *VAR_6)
{
 struct mwl8k_priv *VAR_7 = VAR_4->priv;
 struct ieee80211_conf *VAR_8 = &VAR_4->conf;
 struct ieee80211_supported_band *VAR_9;

 if (VAR_7->ap_fw) {
  VAR_9 = VAR_4->wiphy->bands[VAR_1];

  if (VAR_9 && VAR_5 >= VAR_9->n_channels) {
   VAR_5 -= VAR_9->n_channels;
   VAR_9 = ((void*)0);
  }

  if (!VAR_9)
   VAR_9 = VAR_4->wiphy->bands[VAR_2];

  if (!VAR_9 || VAR_5 >= VAR_9->n_channels)
   return -VAR_0;

  FUNC_0(VAR_6, &VAR_7->survey[VAR_5], sizeof(*VAR_6));
  VAR_6->channel = &VAR_9->channels[VAR_5];

  return 0;
 }

 if (VAR_5 != 0)
  return -VAR_0;

 VAR_6->channel = VAR_8->chandef.chan;
 VAR_6->filled = VAR_3;
 VAR_6->noise = VAR_7->noise;

 return 0;
}
