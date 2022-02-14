
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {struct iwl_mvm* mvm; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
typedef enum iwl_dbgfs_pm_mask { ____Placeholder_iwl_dbgfs_pm_mask } iwl_dbgfs_pm_mask ;


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
 int FUNC_0 (struct iwl_mvm*,struct ieee80211_vif*,int,int) ;
 int FUNC_1 (struct iwl_mvm*) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int*) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct ieee80211_vif *VAR_13, char *VAR_14,
      size_t VAR_15, loff_t *VAR_16)
{
 struct iwl_mvm_vif *VAR_17 = FUNC_2(VAR_13);
 struct iwl_mvm *VAR_18 = VAR_17->mvm;
 enum iwl_dbgfs_pm_mask VAR_19;
 int VAR_20, VAR_21;

 if (!FUNC_6("keep_alive=", VAR_14, 11)) {
  if (FUNC_5(VAR_14 + 11, "%d", &VAR_20) != 1)
   return -VAR_0;
  VAR_19 = VAR_1;
 } else if (!FUNC_6("skip_over_dtim=", VAR_14, 15)) {
  if (FUNC_5(VAR_14 + 15, "%d", &VAR_20) != 1)
   return -VAR_0;
  VAR_19 = VAR_6;
 } else if (!FUNC_6("skip_dtim_periods=", VAR_14, 18)) {
  if (FUNC_5(VAR_14 + 18, "%d", &VAR_20) != 1)
   return -VAR_0;
  VAR_19 = VAR_5;
 } else if (!FUNC_6("rx_data_timeout=", VAR_14, 16)) {
  if (FUNC_5(VAR_14 + 16, "%d", &VAR_20) != 1)
   return -VAR_0;
  VAR_19 = VAR_4;
 } else if (!FUNC_6("tx_data_timeout=", VAR_14, 16)) {
  if (FUNC_5(VAR_14 + 16, "%d", &VAR_20) != 1)
   return -VAR_0;
  VAR_19 = VAR_8;
 } else if (!FUNC_6("lprx=", VAR_14, 5)) {
  if (FUNC_5(VAR_14 + 5, "%d", &VAR_20) != 1)
   return -VAR_0;
  VAR_19 = VAR_2;
 } else if (!FUNC_6("lprx_rssi_threshold=", VAR_14, 20)) {
  if (FUNC_5(VAR_14 + 20, "%d", &VAR_20) != 1)
   return -VAR_0;
  if (VAR_20 > VAR_11 || VAR_20 <
      VAR_12)
   return -VAR_0;
  VAR_19 = VAR_3;
 } else if (!FUNC_6("snooze_enable=", VAR_14, 14)) {
  if (FUNC_5(VAR_14 + 14, "%d", &VAR_20) != 1)
   return -VAR_0;
  VAR_19 = VAR_7;
 } else if (!FUNC_6("uapsd_misbehaving=", VAR_14, 18)) {
  if (FUNC_5(VAR_14 + 18, "%d", &VAR_20) != 1)
   return -VAR_0;
  VAR_19 = VAR_9;
 } else if (!FUNC_6("use_ps_poll=", VAR_14, 12)) {
  if (FUNC_5(VAR_14 + 12, "%d", &VAR_20) != 1)
   return -VAR_0;
  VAR_19 = VAR_10;
 } else {
  return -VAR_0;
 }

 FUNC_3(&VAR_18->mutex);
 FUNC_0(VAR_18, VAR_13, VAR_19, VAR_20);
 VAR_21 = FUNC_1(VAR_18);
 FUNC_4(&VAR_18->mutex);

 return VAR_21 ?: VAR_15;
}
