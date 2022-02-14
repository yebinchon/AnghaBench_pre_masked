
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm_vif {int uploaded; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,int ,int,int const*) ;
 struct iwl_mvm_vif* FUNC_3 (struct ieee80211_vif*) ;

int FUNC_4(struct iwl_mvm *VAR_2, struct ieee80211_vif *VAR_3,
        bool VAR_4, const u8 *VAR_5)
{
 struct iwl_mvm_vif *VAR_6 = FUNC_3(VAR_3);

 if (FUNC_0(!VAR_6->uploaded, "Changing inactive MAC %pM/%d\n",
        VAR_3->addr, FUNC_1(VAR_3)))
  return -VAR_0;

 return FUNC_2(VAR_2, VAR_3, VAR_1,
        VAR_4, VAR_5);
}
