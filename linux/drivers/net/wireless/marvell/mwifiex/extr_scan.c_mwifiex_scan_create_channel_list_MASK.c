
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct mwifiex_user_scan_cfg {TYPE_3__* chan_list; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct mwifiex_private {TYPE_2__ wdev; struct mwifiex_adapter* adapter; } ;
struct mwifiex_chan_scan_param_set {int radio_type; int chan_scan_mode_bitmap; void* max_scan_time; scalar_t__ chan_number; } ;
struct mwifiex_adapter {int specific_scan_time; int active_scan_time; int passive_scan_time; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int flags; scalar_t__ hw_value; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_6__ {scalar_t__ scan_time; } ;
struct TYPE_4__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct mwifiex_private *VAR_7,
     const struct mwifiex_user_scan_cfg
       *VAR_8,
     struct mwifiex_chan_scan_param_set
       *VAR_9,
     u8 VAR_10)
{
 enum nl80211_band VAR_11;
 struct ieee80211_supported_band *VAR_12;
 struct ieee80211_channel *VAR_13;
 struct mwifiex_adapter *VAR_14 = VAR_7->adapter;
 int VAR_15 = 0, VAR_16;

 for (VAR_11 = 0; (VAR_11 < VAR_6) ; VAR_11++) {

  if (!VAR_7->wdev.wiphy->bands[VAR_11])
   continue;

  VAR_12 = VAR_7->wdev.wiphy->bands[VAR_11];

  for (VAR_16 = 0; (VAR_16 < VAR_12->n_channels) ; VAR_16++) {
   VAR_13 = &VAR_12->channels[VAR_16];
   if (VAR_13->flags & VAR_0)
    continue;
   VAR_9[VAR_15].radio_type = VAR_11;

   if (VAR_8 &&
       VAR_8->chan_list[0].scan_time)
    VAR_9[VAR_15].max_scan_time =
     FUNC_0((u16) VAR_8->
     chan_list[0].scan_time);
   else if ((VAR_13->flags & VAR_1) ||
     (VAR_13->flags & VAR_2))
    VAR_9[VAR_15].max_scan_time =
     FUNC_0(VAR_14->passive_scan_time);
   else
    VAR_9[VAR_15].max_scan_time =
     FUNC_0(VAR_14->active_scan_time);

   if (VAR_13->flags & VAR_1)
    VAR_9[VAR_15].chan_scan_mode_bitmap
     |= (VAR_5 |
         VAR_4);
   else
    VAR_9[VAR_15].chan_scan_mode_bitmap
     &= ~VAR_5;
   VAR_9[VAR_15].chan_number =
       (u32) VAR_13->hw_value;

   VAR_9[VAR_15].chan_scan_mode_bitmap
     |= VAR_3;

   if (VAR_10 &&
       !((VAR_13->flags & VAR_1) ||
         (VAR_13->flags & VAR_2)))
    VAR_9[VAR_15].max_scan_time =
    FUNC_0(VAR_14->specific_scan_time);

   VAR_15++;
  }

 }
 return VAR_15;
}
