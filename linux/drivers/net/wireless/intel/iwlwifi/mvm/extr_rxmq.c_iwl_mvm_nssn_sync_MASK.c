
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_struct {int dummy; } ;
struct iwl_mvm_nssn_sync_data {int nssn; int baid; } ;
struct iwl_mvm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,struct napi_struct*,int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct iwl_mvm *VAR_1,
         struct napi_struct *VAR_2, int VAR_3,
         const struct iwl_mvm_nssn_sync_data *VAR_4)
{
 FUNC_0(VAR_1, VAR_2, VAR_4->baid,
       VAR_4->nssn, VAR_3,
       VAR_0);
}
