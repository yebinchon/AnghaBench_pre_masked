
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p54_common {struct ieee80211_supported_band** band_table; TYPE_1__* survey; } ;
struct p54_channel_list {unsigned int entries; unsigned int* band_channel_num; struct p54_channel_entry* channels; } ;
struct p54_channel_entry {int band; int data; int max_power; int freq; int index; } ;
struct ieee80211_supported_band {int band; unsigned int hw_value; unsigned int n_channels; struct ieee80211_supported_band* channels; int max_power; int center_freq; } ;
struct ieee80211_hw {int wiphy; struct p54_common* priv; } ;
struct ieee80211_channel {int band; unsigned int hw_value; unsigned int n_channels; struct ieee80211_channel* channels; int max_power; int center_freq; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_2__ {int filled; struct ieee80211_supported_band* channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct ieee80211_supported_band* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (struct ieee80211_supported_band*) ;
 struct ieee80211_supported_band* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ieee80211_hw*,struct ieee80211_supported_band*,int) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_13,
        struct p54_channel_list *VAR_14,
        unsigned int *VAR_15,
        enum nl80211_band VAR_16)
{
 struct p54_common *VAR_17 = VAR_13->priv;
 struct ieee80211_supported_band *VAR_18, *VAR_19;
 unsigned int VAR_20, VAR_21;
 int VAR_22 = -VAR_6;

 if ((!VAR_14->entries) || (!VAR_14->band_channel_num[VAR_16]))
  return -VAR_4;

 VAR_18 = FUNC_2(sizeof(*VAR_18), VAR_7);
 if (!VAR_18)
  goto err_out;

 VAR_18->channels = FUNC_0(VAR_14->band_channel_num[VAR_16],
    sizeof(struct ieee80211_channel),
    VAR_7);
 if (!VAR_18->channels)
  goto err_out;

 VAR_22 = FUNC_3(VAR_13, VAR_18, VAR_16);
 if (VAR_22)
  goto err_out;

 for (VAR_20 = 0, VAR_21 = 0; (VAR_21 < VAR_14->band_channel_num[VAR_16]) &&
      (VAR_20 < VAR_14->entries); VAR_20++) {
  struct p54_channel_entry *VAR_23 = &VAR_14->channels[VAR_20];
  struct ieee80211_channel *VAR_24 = &VAR_18->channels[VAR_21];

  if (VAR_23->band != VAR_16)
   continue;

  if (VAR_23->data != VAR_0) {
   FUNC_4(VAR_13->wiphy, "%s%s%s is/are missing for "
      "channel:%d [%d MHz].\n",
      (VAR_23->data & VAR_1 ? "" :
       " [iqauto calibration data]"),
      (VAR_23->data & VAR_3 ? "" :
       " [output power limits]"),
      (VAR_23->data & VAR_2 ? "" :
       " [curve data]"),
      VAR_23->index, VAR_23->freq);
   continue;
  }

  VAR_24->band = VAR_23->band;
  VAR_24->center_freq = VAR_23->freq;
  VAR_24->max_power = VAR_23->max_power;
  VAR_17->survey[*VAR_15].channel = &VAR_18->channels[VAR_21];
  VAR_17->survey[*VAR_15].filled = VAR_9 |
   VAR_10 |
   VAR_11 |
   VAR_12;
  VAR_24->hw_value = (*VAR_15);
  VAR_21++;
  (*VAR_15)++;
 }

 if (VAR_21 == 0) {
  FUNC_4(VAR_13->wiphy, "Disabling totally damaged %d GHz band\n",
     (VAR_16 == VAR_8) ? 2 : 5);

  VAR_22 = -VAR_5;
  goto err_out;
 }

 VAR_18->n_channels = VAR_21;
 VAR_19 = VAR_17->band_table[VAR_16];
 VAR_17->band_table[VAR_16] = VAR_18;
 if (VAR_19) {
  FUNC_1(VAR_19->channels);
  FUNC_1(VAR_19);
 }

 return 0;

err_out:
 if (VAR_18) {
  FUNC_1(VAR_18->channels);
  FUNC_1(VAR_18);
 }

 return VAR_22;
}
