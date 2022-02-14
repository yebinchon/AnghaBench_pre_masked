
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_sta {int tt_tx_protection; } ;
struct iwl_mvm {int fw_id_to_mac_id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_mvm*,char*,char*) ;
 int FUNC_2 (struct iwl_mvm*,char*,char*) ;
 struct iwl_mvm_sta* FUNC_3 (struct iwl_mvm*,int) ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_mvm_sta*,int) ;

__attribute__((used)) static void FUNC_5(struct iwl_mvm *VAR_0, bool VAR_1)
{
 struct iwl_mvm_sta *VAR_2;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0->fw_id_to_mac_id); VAR_3++) {
  VAR_2 = FUNC_3(VAR_0, VAR_3);
  if (!VAR_2)
   continue;

  if (VAR_1 == VAR_2->tt_tx_protection)
   continue;
  VAR_4 = FUNC_4(VAR_0, VAR_2, VAR_1);
  if (VAR_4) {
   FUNC_2(VAR_0, "Failed to %s Tx protection\n",
    VAR_1 ? "enable" : "disable");
  } else {
   FUNC_1(VAR_0, "%s Tx protection\n",
           VAR_1 ? "Enable" : "Disable");
   VAR_2->tt_tx_protection = VAR_1;
  }
 }
}
