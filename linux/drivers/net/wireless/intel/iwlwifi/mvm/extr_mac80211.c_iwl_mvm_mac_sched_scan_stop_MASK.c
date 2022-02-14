
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int scan_status; int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_mvm*,int,int) ;
 int FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_1,
           struct ieee80211_vif *VAR_2)
{
 struct iwl_mvm *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 FUNC_3(&VAR_3->mutex);
 if (!(VAR_3->scan_status & VAR_0)) {
  FUNC_4(&VAR_3->mutex);
  return 0;
 }

 VAR_4 = FUNC_1(VAR_3, VAR_0, 0);
 FUNC_4(&VAR_3->mutex);
 FUNC_2(VAR_3);

 return VAR_4;
}
