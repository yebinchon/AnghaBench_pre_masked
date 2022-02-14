
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct iwl_mvm {TYPE_2__* cfg; } ;
struct ieee80211_supported_band {TYPE_5__* iftype_data; } ;
struct ieee80211_sta_vht_cap {int vht_supported; int cap; } ;
struct ieee80211_sta_ht_cap {int cap; } ;
struct TYPE_12__ {int* phy_cap_info; } ;
struct ieee80211_sta_he_cap {TYPE_6__ he_cap_elem; scalar_t__ has_he; } ;
struct ieee80211_sta {struct ieee80211_sta_he_cap he_cap; struct ieee80211_sta_vht_cap vht_cap; struct ieee80211_sta_ht_cap ht_cap; } ;
struct TYPE_9__ {int* phy_cap_info; } ;
struct TYPE_10__ {TYPE_3__ he_cap_elem; scalar_t__ has_he; } ;
struct TYPE_11__ {TYPE_4__ he_cap; } ;
struct TYPE_8__ {TYPE_1__* ht_params; } ;
struct TYPE_7__ {scalar_t__ ldpc; scalar_t__ stbc; } ;


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
 int FUNC_0 (struct iwl_mvm*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u16 FUNC_2(struct iwl_mvm *VAR_12,
      struct ieee80211_sta *VAR_13,
      struct ieee80211_supported_band *VAR_14)
{
 struct ieee80211_sta_ht_cap *VAR_15 = &VAR_13->ht_cap;
 struct ieee80211_sta_vht_cap *VAR_16 = &VAR_13->vht_cap;
 struct ieee80211_sta_he_cap *VAR_17 = &VAR_13->he_cap;
 bool VAR_18 = VAR_16->vht_supported;
 u16 VAR_19 = 0;

 if (VAR_12->cfg->ht_params->stbc &&
     (FUNC_1(FUNC_0(VAR_12)) > 1)) {
  if (VAR_17->has_he) {
   if (VAR_17->he_cap_elem.phy_cap_info[2] &
       VAR_1)
    VAR_19 |= VAR_11;

   if (VAR_17->he_cap_elem.phy_cap_info[7] &
       VAR_3)
    VAR_19 |= VAR_9;
  } else if ((VAR_15->cap & VAR_5) ||
      (VAR_18 &&
       (VAR_16->cap & VAR_7)))
   VAR_19 |= VAR_11;
 }

 if (VAR_12->cfg->ht_params->ldpc &&
     ((VAR_15->cap & VAR_4) ||
      (VAR_18 && (VAR_16->cap & VAR_6))))
  VAR_19 |= VAR_10;


 if (VAR_14->iftype_data && VAR_14->iftype_data->he_cap.has_he &&
     !(VAR_14->iftype_data->he_cap.he_cap_elem.phy_cap_info[1] &
      VAR_0))
  VAR_19 &= ~VAR_10;

 if (VAR_17->has_he &&
     (VAR_17->he_cap_elem.phy_cap_info[3] &
      VAR_2))
  VAR_19 |= VAR_8;

 return VAR_19;
}
