
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_add_sta_cmd_v7 {int dummy; } ;
struct iwl_mvm_add_sta_cmd {int dummy; } ;
struct iwl_mvm {TYPE_1__* fw; } ;
struct TYPE_2__ {int ucode_capa; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct iwl_mvm*) ;

__attribute__((used)) static inline int FUNC_2(struct iwl_mvm *VAR_1)
{
 if (FUNC_1(VAR_1) ||
     FUNC_0(&VAR_1->fw->ucode_capa, VAR_0))
  return sizeof(struct iwl_mvm_add_sta_cmd);
 else
  return sizeof(struct iwl_mvm_add_sta_cmd_v7);
}
