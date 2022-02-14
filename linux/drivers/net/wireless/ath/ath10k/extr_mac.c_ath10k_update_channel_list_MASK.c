
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_scan_chan_list_arg {int n_channels; struct wmi_channel_arg* channels; int member_0; } ;
struct wmi_channel_arg {int allow_ht; int allow_vht; int allow_ibss; int ht40plus; int chan_radar; int passive; int max_power; int max_reg_power; int max_antenna_gain; scalar_t__ mode; int freq; scalar_t__ reg_class_id; scalar_t__ min_power; int band_center_freq1; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_hw {TYPE_1__* wiphy; } ;
struct ieee80211_channel {int flags; int max_power; int max_reg_power; int max_antenna_gain; scalar_t__ band; int center_freq; } ;
struct ath10k {int conf_mutex; struct ieee80211_hw* hw; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_2__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,int ,char*,int,int,int ,int,int,int,scalar_t__) ;
 int FUNC_2 (struct ath10k*,struct wmi_scan_chan_list_arg*) ;
 int FUNC_3 (struct wmi_channel_arg*) ;
 struct wmi_channel_arg* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_12)
{
 struct ieee80211_hw *VAR_13 = VAR_12->hw;
 struct ieee80211_supported_band **VAR_14;
 enum nl80211_band VAR_15;
 struct ieee80211_channel *VAR_16;
 struct wmi_scan_chan_list_arg VAR_17 = {0};
 struct wmi_channel_arg *VAR_18;
 bool VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;

 FUNC_5(&VAR_12->conf_mutex);

 VAR_14 = VAR_13->wiphy->bands;
 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
  if (!VAR_14[VAR_15])
   continue;

  for (VAR_22 = 0; VAR_22 < VAR_14[VAR_15]->n_channels; VAR_22++) {
   if (VAR_14[VAR_15]->channels[VAR_22].flags &
       VAR_3)
    continue;

   VAR_17.n_channels++;
  }
 }

 VAR_20 = sizeof(struct wmi_channel_arg) * VAR_17.n_channels;
 VAR_17.channels = FUNC_4(VAR_20, VAR_2);
 if (!VAR_17.channels)
  return -VAR_1;

 VAR_18 = VAR_17.channels;
 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
  if (!VAR_14[VAR_15])
   continue;

  for (VAR_22 = 0; VAR_22 < VAR_14[VAR_15]->n_channels; VAR_22++) {
   VAR_16 = &VAR_14[VAR_15]->channels[VAR_22];

   if (VAR_16->flags & VAR_3)
    continue;

   VAR_18->allow_ht = 1;


   VAR_18->allow_vht = 1;

   VAR_18->allow_ibss =
    !(VAR_16->flags & VAR_5);

   VAR_18->ht40plus =
    !(VAR_16->flags & VAR_4);

   VAR_18->chan_radar =
    !!(VAR_16->flags & VAR_6);

   VAR_19 = VAR_16->flags & VAR_5;
   VAR_18->passive = VAR_19;






   VAR_18->passive |= VAR_18->chan_radar;

   VAR_18->freq = VAR_16->center_freq;
   VAR_18->band_center_freq1 = VAR_16->center_freq;
   VAR_18->min_power = 0;
   VAR_18->max_power = VAR_16->max_power * 2;
   VAR_18->max_reg_power = VAR_16->max_reg_power * 2;
   VAR_18->max_antenna_gain = VAR_16->max_antenna_gain * 2;
   VAR_18->reg_class_id = 0;





   if (VAR_16->band == VAR_10)
    VAR_18->mode = VAR_8;
   else
    VAR_18->mode = VAR_7;

   if (FUNC_0(VAR_18->mode == VAR_9))
    continue;

   FUNC_1(VAR_12, VAR_0,
       "mac channel [%zd/%d] freq %d maxpower %d regpower %d antenna %d mode %d\n",
        VAR_18 - VAR_17.channels, VAR_17.n_channels,
       VAR_18->freq, VAR_18->max_power, VAR_18->max_reg_power,
       VAR_18->max_antenna_gain, VAR_18->mode);

   VAR_18++;
  }
 }

 VAR_21 = FUNC_2(VAR_12, &VAR_17);
 FUNC_3(VAR_17.channels);

 return VAR_21;
}
