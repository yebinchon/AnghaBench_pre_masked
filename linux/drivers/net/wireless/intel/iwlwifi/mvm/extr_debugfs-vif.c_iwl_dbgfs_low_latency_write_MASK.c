
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm_vif {struct iwl_mvm* mvm; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,struct ieee80211_vif*,int,int ) ;
 struct iwl_mvm_vif* FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (char*,int ,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct ieee80211_vif *VAR_2, char *VAR_3,
        size_t VAR_4, loff_t *VAR_5)
{
 struct iwl_mvm_vif *VAR_6 = FUNC_1(VAR_2);
 struct iwl_mvm *VAR_7 = VAR_6->mvm;
 u8 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_3, 0, &VAR_8);
 if (VAR_9)
  return VAR_9;
 if (VAR_8 > 1)
  return -VAR_0;

 FUNC_3(&VAR_7->mutex);
 FUNC_0(VAR_7, VAR_2, VAR_8, VAR_1);
 FUNC_4(&VAR_7->mutex);

 return VAR_4;
}
