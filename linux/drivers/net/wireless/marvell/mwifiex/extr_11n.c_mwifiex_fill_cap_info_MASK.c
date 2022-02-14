
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef size_t u8 ;
struct TYPE_7__ {TYPE_1__* wiphy; } ;
struct mwifiex_private {scalar_t__ bss_mode; TYPE_5__* adapter; TYPE_2__ wdev; } ;
struct TYPE_9__ {int ampdu_factor; int ampdu_density; int cap; int mcs; } ;
struct ieee80211_supported_band {TYPE_4__ ht_cap; } ;
struct TYPE_8__ {int rx_mask; } ;
struct ieee80211_ht_cap {int ampdu_params_info; int tx_BF_cap_info; void* extended_ht_cap_info; void* cap_info; TYPE_3__ mcs; } ;
struct TYPE_10__ {scalar_t__ sec_chan_offset; int hw_dot_11n_dev_cap; } ;
struct TYPE_6__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (size_t*,int *,int) ;
 int FUNC_7 (TYPE_5__*,int ,char*) ;

int FUNC_8(struct mwifiex_private *VAR_10, u8 VAR_11,
     struct ieee80211_ht_cap *VAR_12)
{
 uint16_t VAR_13 = FUNC_5(VAR_12->extended_ht_cap_info);
 struct ieee80211_supported_band *VAR_14 =
     VAR_10->wdev.wiphy->bands[VAR_11];

 if (FUNC_2(!VAR_14)) {
  FUNC_7(VAR_10->adapter, VAR_1, "Invalid radio type!\n");
  return -VAR_0;
 }

 VAR_12->ampdu_params_info =
  (VAR_14->ht_cap.ampdu_factor &
   VAR_4) |
  ((VAR_14->ht_cap.ampdu_density <<
   VAR_3) &
   VAR_2);

 FUNC_6((u8 *)&VAR_12->mcs, &VAR_14->ht_cap.mcs,
        sizeof(VAR_14->ht_cap.mcs));

 if (VAR_10->bss_mode == VAR_9 ||
     (VAR_14->ht_cap.cap & VAR_5 &&
      (VAR_10->adapter->sec_chan_offset !=
     VAR_7)))

  FUNC_1(VAR_12->mcs.rx_mask);


 VAR_13 &= ~VAR_6;

 VAR_12->cap_info = FUNC_3(VAR_14->ht_cap.cap);
 VAR_12->extended_ht_cap_info = FUNC_3(VAR_13);

 if (FUNC_0(VAR_10->adapter->hw_dot_11n_dev_cap))
  VAR_12->tx_BF_cap_info = FUNC_4(VAR_8);

 return 0;
}
