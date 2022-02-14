
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct survey_info {int filled; struct ieee80211_channel* channel; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_hw {struct ar9170* priv; } ;
struct ieee80211_channel {int hw_value; } ;
struct TYPE_6__ {scalar_t__ hw_counters; } ;
struct ar9170 {TYPE_3__ fw; struct ieee80211_channel* channel; int * survey; TYPE_2__* hw; int mutex; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct TYPE_4__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ar9170*,int,int) ;
 int FUNC_1 (struct survey_info*,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_8, int VAR_9,
    struct survey_info *VAR_10)
{
 struct ar9170 *VAR_11 = VAR_8->priv;
 struct ieee80211_channel *VAR_12;
 struct ieee80211_supported_band *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_12 = VAR_11->channel;
 if (!VAR_12)
  return -VAR_0;

 if (VAR_9 == VAR_12->hw_value) {
  FUNC_2(&VAR_11->mutex);
  VAR_14 = FUNC_0(VAR_11, 0, 1);
  FUNC_3(&VAR_11->mutex);
  if (VAR_14)
   return VAR_14;
 }

 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
  VAR_13 = VAR_11->hw->wiphy->bands[VAR_15];

  if (!VAR_13)
   continue;

  for (VAR_16 = 0; VAR_16 < VAR_13->n_channels; VAR_16++) {
   if (VAR_13->channels[VAR_16].hw_value == VAR_9) {
    VAR_12 = &VAR_13->channels[VAR_16];
    goto found;
   }
  }
 }
 return -VAR_1;

found:
 FUNC_1(VAR_10, &VAR_11->survey[VAR_9], sizeof(*VAR_10));

 VAR_10->channel = VAR_12;
 VAR_10->filled = VAR_4;

 if (VAR_11->channel == VAR_12)
  VAR_10->filled |= VAR_3;

 if (VAR_11->fw.hw_counters) {
  VAR_10->filled |= VAR_5 |
      VAR_6 |
      VAR_7;
 }

 return 0;
}
