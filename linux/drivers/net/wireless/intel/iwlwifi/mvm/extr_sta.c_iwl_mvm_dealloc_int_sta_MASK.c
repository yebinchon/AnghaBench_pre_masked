
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_int_sta {size_t sta_id; } ;
struct iwl_mvm {int * fw_id_to_mac_id; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct iwl_mvm_int_sta*,int ,int) ;

void FUNC_2(struct iwl_mvm *VAR_1, struct iwl_mvm_int_sta *VAR_2)
{
 FUNC_0(VAR_1->fw_id_to_mac_id[VAR_2->sta_id], ((void*)0));
 FUNC_1(VAR_2, 0, sizeof(struct iwl_mvm_int_sta));
 VAR_2->sta_id = VAR_0;
}
