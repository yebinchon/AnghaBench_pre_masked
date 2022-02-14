
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {TYPE_1__* trans; } ;
struct iwl_ltr_config_cmd {int flags; } ;
typedef int cmd ;
struct TYPE_2__ {int ltr_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_mvm*,int ,int ,int,struct iwl_ltr_config_cmd*) ;

__attribute__((used)) static int FUNC_2(struct iwl_mvm *VAR_2)
{
 struct iwl_ltr_config_cmd VAR_3 = {
  .flags = FUNC_0(VAR_0),
 };

 if (!VAR_2->trans->ltr_enabled)
  return 0;

 return FUNC_1(VAR_2, VAR_1, 0,
        sizeof(VAR_3), &VAR_3);
}
