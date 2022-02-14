
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm_sta {int sta_id; } ;
struct iwl_mvm {scalar_t__* fw_key_deleted; int fw_key_table; int mutex; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {int flags; scalar_t__ cipher; size_t hw_key_idx; int keyidx; } ;
struct TYPE_3__ {int sta_id; } ;
struct TYPE_4__ {TYPE_1__ mcast_sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int FUNC_1 (struct iwl_mvm*,char*,size_t) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (struct iwl_mvm*,int ,struct ieee80211_key_conf*,int) ;
 int FUNC_3 (size_t,int ) ;
 struct iwl_mvm_sta* FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_key_conf*,int ,int) ;
 TYPE_2__* FUNC_6 (struct ieee80211_vif*) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct iwl_mvm *VAR_11,
      struct ieee80211_vif *VAR_12,
      struct ieee80211_sta *VAR_13,
      struct ieee80211_key_conf *VAR_14)
{
 bool VAR_15 = !(VAR_14->flags & VAR_1);
 struct iwl_mvm_sta *VAR_16;
 u8 VAR_17 = VAR_2;
 int VAR_18, VAR_19;

 FUNC_7(&VAR_11->mutex);


 VAR_16 = FUNC_4(VAR_11, VAR_12, VAR_13);
 if (VAR_16)
  VAR_17 = VAR_16->sta_id;
 else if (!VAR_13 && VAR_12->type == VAR_3 && VAR_15)
  VAR_17 = FUNC_6(VAR_12)->mcast_sta.sta_id;


 FUNC_0(VAR_11, "mvm remove dynamic key: idx=%d sta=%d\n",
        VAR_14->keyidx, VAR_17);

 if (VAR_16 && (VAR_14->cipher == VAR_6 ||
   VAR_14->cipher == VAR_7 ||
   VAR_14->cipher == VAR_8))
  return FUNC_5(VAR_11, VAR_14, VAR_17, 1);

 if (!FUNC_3(VAR_14->hw_key_idx, VAR_11->fw_key_table)) {
  FUNC_1(VAR_11, "offset %d not used in fw key table.\n",
   VAR_14->hw_key_idx);
  return -VAR_0;
 }


 for (VAR_19 = 0; VAR_19 < VAR_4; VAR_19++) {
  if (VAR_11->fw_key_deleted[VAR_19] < VAR_5)
   VAR_11->fw_key_deleted[VAR_19]++;
 }
 VAR_11->fw_key_deleted[VAR_14->hw_key_idx] = 0;

 if (VAR_13 && !VAR_16) {
  FUNC_0(VAR_11, "station non-existent, early return.\n");
  return 0;
 }

 VAR_18 = FUNC_2(VAR_11, VAR_17, VAR_14, VAR_15);
 if (VAR_18)
  return VAR_18;


 if (VAR_14->cipher == VAR_10 ||
     VAR_14->cipher == VAR_9)
  VAR_18 = FUNC_2(VAR_11, VAR_17, VAR_14, !VAR_15);

 return VAR_18;
}
