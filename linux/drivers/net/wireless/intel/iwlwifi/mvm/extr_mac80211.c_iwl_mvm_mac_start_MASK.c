
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int mutex; } ;
struct ieee80211_hw {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_0)
{
 struct iwl_mvm *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 FUNC_2(&VAR_1->mutex);
 VAR_2 = FUNC_1(VAR_1);
 FUNC_3(&VAR_1->mutex);

 return VAR_2;
}
