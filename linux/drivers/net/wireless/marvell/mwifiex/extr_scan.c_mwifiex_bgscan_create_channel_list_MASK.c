
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct mwifiex_private {TYPE_2__ wdev; struct mwifiex_adapter* adapter; } ;
struct mwifiex_chan_scan_param_set {int radio_type; scalar_t__ chan_number; int chan_scan_mode_bitmap; void* max_scan_time; } ;
struct mwifiex_bg_scan_cfg {TYPE_3__* chan_list; } ;
struct mwifiex_adapter {int specific_scan_time; int passive_scan_time; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int flags; scalar_t__ hw_value; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_6__ {scalar_t__ scan_time; } ;
struct TYPE_4__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct mwifiex_private *VAR_4,
       const struct mwifiex_bg_scan_cfg
      *VAR_5,
       struct mwifiex_chan_scan_param_set
      *VAR_6)
{
 enum nl80211_band VAR_7;
 struct ieee80211_supported_band *VAR_8;
 struct ieee80211_channel *VAR_9;
 struct mwifiex_adapter *VAR_10 = VAR_4->adapter;
 int VAR_11 = 0, VAR_12;

 for (VAR_7 = 0; (VAR_7 < VAR_3); VAR_7++) {
  if (!VAR_4->wdev.wiphy->bands[VAR_7])
   continue;

  VAR_8 = VAR_4->wdev.wiphy->bands[VAR_7];

  for (VAR_12 = 0; (VAR_12 < VAR_8->n_channels) ; VAR_12++) {
   VAR_9 = &VAR_8->channels[VAR_12];
   if (VAR_9->flags & VAR_0)
    continue;
   VAR_6[VAR_11].radio_type = VAR_7;

   if (VAR_5->chan_list[0].scan_time)
    VAR_6[VAR_11].max_scan_time =
     FUNC_0((u16)VAR_5->
     chan_list[0].scan_time);
   else if (VAR_9->flags & VAR_1)
    VAR_6[VAR_11].max_scan_time =
     FUNC_0(VAR_10->passive_scan_time);
   else
    VAR_6[VAR_11].max_scan_time =
     FUNC_0(VAR_10->
          specific_scan_time);

   if (VAR_9->flags & VAR_1)
    VAR_6[VAR_11].chan_scan_mode_bitmap
     |= VAR_2;
   else
    VAR_6[VAR_11].chan_scan_mode_bitmap
     &= ~VAR_2;

   VAR_6[VAR_11].chan_number =
       (u32)VAR_9->hw_value;
   VAR_11++;
  }
 }
 return VAR_11;
}
