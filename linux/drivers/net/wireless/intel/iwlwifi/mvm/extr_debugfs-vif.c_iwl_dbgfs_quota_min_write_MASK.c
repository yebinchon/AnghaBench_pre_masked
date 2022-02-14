
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iwl_mvm_vif {int dbgfs_quota_min; struct iwl_mvm* mvm; } ;
struct iwl_mvm {int mutex; int hw; } ;
struct ieee80211_vif {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int VAR_2 ;
 int FUNC_1 (struct iwl_mvm*,int,int *) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;
 int FUNC_3 (char*,int ,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct ieee80211_vif *VAR_3, char *VAR_4,
      size_t VAR_5, loff_t *VAR_6)
{
 struct iwl_mvm_vif *VAR_7 = FUNC_2(VAR_3);
 struct iwl_mvm *VAR_8 = VAR_7->mvm;
 u16 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_4, 0, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9 > 95)
  return -VAR_0;

 FUNC_4(&VAR_8->mutex);

 VAR_7->dbgfs_quota_min = 0;
 FUNC_0(VAR_8->hw, VAR_1,
         VAR_2, &VAR_10);
 if (VAR_10 == 0) {
  VAR_7->dbgfs_quota_min = VAR_9;
  FUNC_1(VAR_8, 0, ((void*)0));
 }
 FUNC_5(&VAR_8->mutex);

 return VAR_10 ?: VAR_5;
}
