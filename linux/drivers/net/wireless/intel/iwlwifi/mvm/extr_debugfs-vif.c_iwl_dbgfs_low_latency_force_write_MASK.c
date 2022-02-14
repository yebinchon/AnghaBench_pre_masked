
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct iwl_mvm_vif {struct iwl_mvm* mvm; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct iwl_mvm*,struct ieee80211_vif*,int,int ) ;
 struct iwl_mvm_vif* FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (char*,int ,scalar_t__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t
FUNC_5(struct ieee80211_vif *VAR_6, char *VAR_7,
      size_t VAR_8, loff_t *VAR_9)
{
 struct iwl_mvm_vif *VAR_10 = FUNC_1(VAR_6);
 struct iwl_mvm *VAR_11 = VAR_10->mvm;
 u8 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_2(VAR_7, 0, &VAR_12);
 if (VAR_13)
  return VAR_13;

 if (VAR_12 > VAR_5)
  return -VAR_0;

 FUNC_3(&VAR_11->mutex);
 if (VAR_12 == VAR_4) {
  FUNC_0(VAR_11, VAR_6, 0,
        VAR_1);
  FUNC_0(VAR_11, VAR_6, 0,
        VAR_2);
 } else {
  FUNC_0(VAR_11, VAR_6,
        VAR_12 == VAR_3,
        VAR_1);
  FUNC_0(VAR_11, VAR_6, 1,
        VAR_2);
 }
 FUNC_4(&VAR_11->mutex);
 return VAR_8;
}
