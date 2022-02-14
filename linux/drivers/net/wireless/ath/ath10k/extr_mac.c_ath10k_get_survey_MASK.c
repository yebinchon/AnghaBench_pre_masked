
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct survey_info {int filled; int * channel; } ;
struct ieee80211_supported_band {int n_channels; int * channels; } ;
struct ieee80211_hw {TYPE_1__* wiphy; struct ath10k* priv; } ;
struct ath10k {int conf_mutex; int * rx_channel; int data_lock; struct survey_info* survey; } ;
struct TYPE_2__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath10k*,int *) ;
 int FUNC_1 (struct survey_info*,struct survey_info*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_4, int VAR_5,
        struct survey_info *VAR_6)
{
 struct ath10k *VAR_7 = VAR_4->priv;
 struct ieee80211_supported_band *VAR_8;
 struct survey_info *VAR_9 = &VAR_7->survey[VAR_5];
 int VAR_10 = 0;

 FUNC_2(&VAR_7->conf_mutex);

 VAR_8 = VAR_4->wiphy->bands[VAR_1];
 if (VAR_8 && VAR_5 >= VAR_8->n_channels) {
  VAR_5 -= VAR_8->n_channels;
  VAR_8 = ((void*)0);
 }

 if (!VAR_8)
  VAR_8 = VAR_4->wiphy->bands[VAR_2];

 if (!VAR_8 || VAR_5 >= VAR_8->n_channels) {
  VAR_10 = -VAR_0;
  goto exit;
 }

 FUNC_0(VAR_7, &VAR_8->channels[VAR_5]);

 FUNC_4(&VAR_7->data_lock);
 FUNC_1(VAR_6, VAR_9, sizeof(*VAR_6));
 FUNC_5(&VAR_7->data_lock);

 VAR_6->channel = &VAR_8->channels[VAR_5];

 if (VAR_7->rx_channel == VAR_6->channel)
  VAR_6->filled |= VAR_3;

exit:
 FUNC_3(&VAR_7->conf_mutex);
 return VAR_10;
}
