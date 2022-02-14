
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iwl_mvm_sta {int bt_reduced_txpower; int sta_id; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_bt_coex_reduced_txp_update_cmd {int reduced_txp; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_mvm*,char*,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_mvm*,int ,int ,int,struct iwl_bt_coex_reduced_txp_update_cmd*) ;
 struct iwl_mvm_sta* FUNC_3 (struct iwl_mvm*,int ) ;

__attribute__((used)) static int FUNC_4(struct iwl_mvm *VAR_3, u8 VAR_4,
           bool VAR_5)
{
 struct iwl_bt_coex_reduced_txp_update_cmd VAR_6 = {};
 struct iwl_mvm_sta *VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_3(VAR_3, VAR_4);
 if (!VAR_7)
  return 0;


 if (VAR_7->bt_reduced_txpower == VAR_5)
  return 0;

 VAR_8 = VAR_7->sta_id;

 if (VAR_5)
  VAR_8 |= VAR_1;

 FUNC_0(VAR_3, "%sable reduced Tx Power for sta %d\n",
         VAR_5 ? "en" : "dis", VAR_4);

 VAR_6.reduced_txp = FUNC_1(VAR_8);
 VAR_7->bt_reduced_txpower = VAR_5;

 return FUNC_2(VAR_3, VAR_0,
        VAR_2, sizeof(VAR_6), &VAR_6);
}
