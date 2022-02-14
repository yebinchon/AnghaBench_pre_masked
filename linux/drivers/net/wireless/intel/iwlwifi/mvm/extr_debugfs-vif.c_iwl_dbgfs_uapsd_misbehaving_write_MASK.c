
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {int uapsd_misbehaving_bssid; struct iwl_mvm* mvm; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 size_t VAR_0 ;
 struct iwl_mvm_vif* FUNC_0 (struct ieee80211_vif*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct ieee80211_vif *VAR_1,
       char *VAR_2, size_t VAR_3,
       loff_t *VAR_4)
{
 struct iwl_mvm_vif *VAR_5 = FUNC_0(VAR_1);
 struct iwl_mvm *VAR_6 = VAR_5->mvm;
 bool VAR_7;

 FUNC_2(&VAR_6->mutex);
 VAR_7 = FUNC_1(VAR_2, VAR_5->uapsd_misbehaving_bssid);
 FUNC_3(&VAR_6->mutex);

 return VAR_7 ? VAR_3 : -VAR_0;
}
