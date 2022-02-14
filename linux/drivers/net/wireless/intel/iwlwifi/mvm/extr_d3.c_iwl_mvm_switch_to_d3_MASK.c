
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {scalar_t__ ptk_icvlen; scalar_t__ ptk_ivlen; int fw_key_table; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*) ;
 int FUNC_1 (struct iwl_mvm*,int ,int) ;
 int FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct iwl_mvm *VAR_2)
{
 FUNC_1(VAR_2, VAR_0, 1);

 FUNC_2(VAR_2);
 FUNC_4(VAR_1, &VAR_2->status);


 FUNC_3(VAR_2->fw_key_table, 0, sizeof(VAR_2->fw_key_table));

 VAR_2->ptk_ivlen = 0;
 VAR_2->ptk_icvlen = 0;
 VAR_2->ptk_ivlen = 0;
 VAR_2->ptk_icvlen = 0;

 return FUNC_0(VAR_2);
}
