
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_tcm_iter_data {int any_sent; struct iwl_mvm* mvm; } ;
struct iwl_mvm {int mutex; TYPE_1__* fw; int hw; } ;
struct TYPE_2__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int ,struct iwl_mvm_tcm_iter_data*) ;
 int FUNC_2 (struct iwl_mvm*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct iwl_mvm *VAR_3)
{
 struct iwl_mvm_tcm_iter_data VAR_4 = {
  .mvm = VAR_3,
  .any_sent = 0,
 };

 FUNC_3(&VAR_3->mutex);

 FUNC_1(
  VAR_3->hw, VAR_0,
  VAR_2, &VAR_4);

 if (FUNC_0(&VAR_3->fw->ucode_capa, VAR_1))
  FUNC_2(VAR_3);

 FUNC_4(&VAR_3->mutex);
}
