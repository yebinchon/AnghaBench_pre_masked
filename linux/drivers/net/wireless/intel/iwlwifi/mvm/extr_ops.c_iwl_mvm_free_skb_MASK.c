
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct iwl_op_mode {int dummy; } ;
struct iwl_mvm {int hw; int trans; } ;
struct ieee80211_tx_info {int * driver_data; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 struct iwl_mvm* FUNC_1 (struct iwl_op_mode*) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct iwl_op_mode *VAR_0, struct sk_buff *VAR_1)
{
 struct iwl_mvm *VAR_2 = FUNC_1(VAR_0);
 struct ieee80211_tx_info *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 FUNC_3(VAR_2->trans, VAR_3->driver_data[1]);
 FUNC_2(VAR_2->hw, VAR_1);
}
