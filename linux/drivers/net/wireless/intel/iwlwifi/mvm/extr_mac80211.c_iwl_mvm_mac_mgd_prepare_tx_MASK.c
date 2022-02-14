
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*,scalar_t__,scalar_t__,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_2,
           struct ieee80211_vif *VAR_3,
           u16 VAR_4)
{
 struct iwl_mvm *VAR_5 = FUNC_0(VAR_2);
 u32 VAR_6 = VAR_0;
 u32 VAR_7 = VAR_1;

 if (VAR_4 > VAR_6)
  VAR_6 = VAR_4;

 FUNC_2(&VAR_5->mutex);

 FUNC_1(VAR_5, VAR_3, VAR_6, VAR_7, 500, 0);
 FUNC_3(&VAR_5->mutex);
}
