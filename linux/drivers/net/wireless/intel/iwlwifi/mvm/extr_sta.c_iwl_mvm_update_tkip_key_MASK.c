
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct iwl_mvm_sta {int sta_id; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int mfp; } ;
struct ieee80211_key_conf {int flags; int hw_key_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct iwl_mvm_sta* FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_2 (struct iwl_mvm*,int ,struct ieee80211_key_conf*,int,int ,int *,int ,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(struct iwl_mvm *VAR_2,
        struct ieee80211_vif *VAR_3,
        struct ieee80211_key_conf *VAR_4,
        struct ieee80211_sta *VAR_5, u32 VAR_6,
        u16 *VAR_7)
{
 struct iwl_mvm_sta *VAR_8;
 bool VAR_9 = !(VAR_4->flags & VAR_1);
 bool VAR_10 = VAR_5 ? VAR_5->mfp : 0;

 FUNC_3();

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_5);
 if (FUNC_0(!VAR_8))
  goto unlock;
 FUNC_2(VAR_2, VAR_8->sta_id, VAR_4, VAR_9,
        VAR_6, VAR_7, VAR_0, VAR_4->hw_key_idx,
        VAR_10);

 unlock:
 FUNC_4();
}
