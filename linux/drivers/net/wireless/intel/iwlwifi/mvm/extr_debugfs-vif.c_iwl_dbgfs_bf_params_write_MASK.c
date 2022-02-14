
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {struct iwl_mvm* mvm; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
typedef enum iwl_dbgfs_bf_mask { ____Placeholder_iwl_dbgfs_bf_mask } iwl_dbgfs_bf_mask ;


 size_t VAR_0 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct ieee80211_vif*,int,int) ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 struct iwl_mvm_vif* FUNC_3 (struct ieee80211_vif*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,int*) ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_8(struct ieee80211_vif *VAR_28, char *VAR_29,
      size_t VAR_30, loff_t *VAR_31)
{
 struct iwl_mvm_vif *VAR_32 = FUNC_3(VAR_28);
 struct iwl_mvm *VAR_33 = VAR_32->mvm;
 enum iwl_dbgfs_bf_mask VAR_34;
 int VAR_35, VAR_36 = 0;

 if (!FUNC_7("bf_energy_delta=", VAR_29, 16)) {
  if (FUNC_6(VAR_29+16, "%d", &VAR_35) != 1)
   return -VAR_0;
  if (VAR_35 < VAR_4 ||
      VAR_35 > VAR_3)
   return -VAR_0;
  VAR_34 = VAR_21;
 } else if (!FUNC_7("bf_roaming_energy_delta=", VAR_29, 24)) {
  if (FUNC_6(VAR_29+24, "%d", &VAR_35) != 1)
   return -VAR_0;
  if (VAR_35 < VAR_8 ||
      VAR_35 > VAR_7)
   return -VAR_0;
  VAR_34 = VAR_23;
 } else if (!FUNC_7("bf_roaming_state=", VAR_29, 17)) {
  if (FUNC_6(VAR_29+17, "%d", &VAR_35) != 1)
   return -VAR_0;
  if (VAR_35 < VAR_10 ||
      VAR_35 > VAR_9)
   return -VAR_0;
  VAR_34 = VAR_24;
 } else if (!FUNC_7("bf_temp_threshold=", VAR_29, 18)) {
  if (FUNC_6(VAR_29+18, "%d", &VAR_35) != 1)
   return -VAR_0;
  if (VAR_35 < VAR_16 ||
      VAR_35 > VAR_15)
   return -VAR_0;
  VAR_34 = VAR_27;
 } else if (!FUNC_7("bf_temp_fast_filter=", VAR_29, 20)) {
  if (FUNC_6(VAR_29+20, "%d", &VAR_35) != 1)
   return -VAR_0;
  if (VAR_35 < VAR_12 ||
      VAR_35 > VAR_11)
   return -VAR_0;
  VAR_34 = VAR_25;
 } else if (!FUNC_7("bf_temp_slow_filter=", VAR_29, 20)) {
  if (FUNC_6(VAR_29+20, "%d", &VAR_35) != 1)
   return -VAR_0;
  if (VAR_35 < VAR_14 ||
      VAR_35 > VAR_13)
   return -VAR_0;
  VAR_34 = VAR_26;
 } else if (!FUNC_7("bf_enable_beacon_filter=", VAR_29, 24)) {
  if (FUNC_6(VAR_29+24, "%d", &VAR_35) != 1)
   return -VAR_0;
  if (VAR_35 < 0 || VAR_35 > 1)
   return -VAR_0;
  VAR_34 = VAR_20;
 } else if (!FUNC_7("bf_debug_flag=", VAR_29, 14)) {
  if (FUNC_6(VAR_29+14, "%d", &VAR_35) != 1)
   return -VAR_0;
  if (VAR_35 < 0 || VAR_35 > 1)
   return -VAR_0;
  VAR_34 = VAR_19;
 } else if (!FUNC_7("bf_escape_timer=", VAR_29, 16)) {
  if (FUNC_6(VAR_29+16, "%d", &VAR_35) != 1)
   return -VAR_0;
  if (VAR_35 < VAR_6 ||
      VAR_35 > VAR_5)
   return -VAR_0;
  VAR_34 = VAR_22;
 } else if (!FUNC_7("ba_escape_timer=", VAR_29, 16)) {
  if (FUNC_6(VAR_29+16, "%d", &VAR_35) != 1)
   return -VAR_0;
  if (VAR_35 < VAR_2 ||
      VAR_35 > VAR_1)
   return -VAR_0;
  VAR_34 = VAR_18;
 } else if (!FUNC_7("ba_enable_beacon_abort=", VAR_29, 23)) {
  if (FUNC_6(VAR_29+23, "%d", &VAR_35) != 1)
   return -VAR_0;
  if (VAR_35 < 0 || VAR_35 > 1)
   return -VAR_0;
  VAR_34 = VAR_17;
 } else {
  return -VAR_0;
 }

 FUNC_4(&VAR_33->mutex);
 FUNC_0(VAR_28, VAR_34, VAR_35);
 if (VAR_34 == VAR_20 && !VAR_35)
  VAR_36 = FUNC_1(VAR_33, VAR_28, 0);
 else
  VAR_36 = FUNC_2(VAR_33, VAR_28, 0);
 FUNC_5(&VAR_33->mutex);

 return VAR_36 ?: VAR_30;
}
