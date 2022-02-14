
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_mvm_sta {int tx_ant; } ;
struct iwl_mvm {int mgmt_last_antenna_idx; TYPE_1__* cfg; } ;
struct ieee80211_tx_info {scalar_t__ band; } ;
struct ieee80211_sta {int dummy; } ;
typedef int __le16 ;
struct TYPE_2__ {int non_shared_ant; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_mvm*) ;
 struct iwl_mvm_sta* FUNC_3 (struct ieee80211_sta*) ;

__attribute__((used)) static u32 FUNC_4(struct iwl_mvm *VAR_2,
         struct ieee80211_tx_info *VAR_3,
         struct ieee80211_sta *VAR_4, __le16 VAR_5)
{
 if (VAR_3->band == VAR_0 &&
     !FUNC_2(VAR_2))
  return VAR_2->cfg->non_shared_ant << VAR_1;

 if (VAR_4 && FUNC_1(VAR_5)) {
  struct iwl_mvm_sta *VAR_6 = FUNC_3(VAR_4);

  return FUNC_0(VAR_6->tx_ant) << VAR_1;
 }

 return FUNC_0(VAR_2->mgmt_last_antenna_idx) << VAR_1;
}
