
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wmi_peer_assoc_complete_arg {int peer_phymode; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct TYPE_10__ {int ht_supported; } ;
struct TYPE_9__ {int vht_supported; } ;
struct ieee80211_sta {int addr; int bandwidth; TYPE_5__ ht_cap; TYPE_4__ vht_cap; } ;
struct cfg80211_chan_def {TYPE_1__* chan; } ;
struct TYPE_8__ {TYPE_2__* control; } ;
struct ath10k_vif {TYPE_3__ bitrate_mask; } ;
struct ath10k {int dummy; } ;
typedef enum wmi_phy_mode { ____Placeholder_wmi_phy_mode } wmi_phy_mode ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_7__ {int * vht_mcs; int * ht_mcs; } ;
struct TYPE_6__ {int band; } ;


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


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,int ,char*,int ,int ) ;
 int FUNC_2 (struct ath10k*,struct ieee80211_sta*) ;
 int FUNC_3 (struct ieee80211_sta*) ;
 int FUNC_4 (struct ieee80211_vif*,struct cfg80211_chan_def*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct ath10k *VAR_12,
     struct ieee80211_vif *VAR_13,
     struct ieee80211_sta *VAR_14,
     struct wmi_peer_assoc_complete_arg *VAR_15)
{
 struct ath10k_vif *VAR_16 = (void *)VAR_13->drv_priv;
 struct cfg80211_chan_def VAR_17;
 enum nl80211_band VAR_18;
 const u8 *VAR_19;
 const u16 *VAR_20;
 enum wmi_phy_mode VAR_21 = VAR_11;

 if (FUNC_0(FUNC_4(VAR_13, &VAR_17)))
  return;

 VAR_18 = VAR_17.chan->band;
 VAR_19 = VAR_16->bitrate_mask.control[VAR_18].ht_mcs;
 VAR_20 = VAR_16->bitrate_mask.control[VAR_18].vht_mcs;

 switch (VAR_18) {
 case 129:
  if (VAR_14->vht_cap.vht_supported &&
      !FUNC_6(VAR_20)) {
   if (VAR_14->bandwidth == VAR_1)
    VAR_21 = VAR_4;
   else
    VAR_21 = VAR_3;
  } else if (VAR_14->ht_cap.ht_supported &&
      !FUNC_5(VAR_19)) {
   if (VAR_14->bandwidth == VAR_1)
    VAR_21 = VAR_10;
   else
    VAR_21 = VAR_9;
  } else if (FUNC_3(VAR_14)) {
   VAR_21 = VAR_6;
  } else {
   VAR_21 = VAR_5;
  }

  break;
 case 128:



  if (VAR_14->vht_cap.vht_supported &&
      !FUNC_6(VAR_20)) {
   VAR_21 = FUNC_2(VAR_12, VAR_14);
  } else if (VAR_14->ht_cap.ht_supported &&
      !FUNC_5(VAR_19)) {
   if (VAR_14->bandwidth >= VAR_1)
    VAR_21 = VAR_8;
   else
    VAR_21 = VAR_7;
  } else {
   VAR_21 = VAR_2;
  }

  break;
 default:
  break;
 }

 FUNC_1(VAR_12, VAR_0, "mac peer %pM phymode %s\n",
     VAR_14->addr, FUNC_7(VAR_21));

 VAR_15->peer_phymode = VAR_21;
 FUNC_0(VAR_21 == VAR_11);
}
