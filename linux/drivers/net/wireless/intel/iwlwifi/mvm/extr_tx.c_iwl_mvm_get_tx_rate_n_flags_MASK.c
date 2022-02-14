
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_tx_info {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
typedef int __le16 ;


 int FUNC_0 (struct iwl_mvm*,struct ieee80211_tx_info*,struct ieee80211_sta*,int ) ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_tx_info*,struct ieee80211_sta*) ;

__attribute__((used)) static u32 FUNC_2(struct iwl_mvm *VAR_0,
           struct ieee80211_tx_info *VAR_1,
           struct ieee80211_sta *VAR_2, __le16 VAR_3)
{
 return FUNC_1(VAR_0, VAR_1, VAR_2) |
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
