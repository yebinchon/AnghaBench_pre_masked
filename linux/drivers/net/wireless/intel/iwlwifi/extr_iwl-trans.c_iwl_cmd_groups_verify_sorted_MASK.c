
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans_config {int command_groups_size; struct iwl_hcmd_arr* command_groups; } ;
struct iwl_hcmd_arr {int size; TYPE_1__* arr; } ;
struct TYPE_2__ {scalar_t__ cmd_id; } ;



int FUNC_0(const struct iwl_trans_config *VAR_0)
{
 int VAR_1, VAR_2;
 const struct iwl_hcmd_arr *VAR_3;

 for (VAR_1 = 0; VAR_1 < VAR_0->command_groups_size; VAR_1++) {
  VAR_3 = &VAR_0->command_groups[VAR_1];
  if (!VAR_3->arr)
   continue;
  for (VAR_2 = 0; VAR_2 < VAR_3->size - 1; VAR_2++)
   if (VAR_3->arr[VAR_2].cmd_id > VAR_3->arr[VAR_2 + 1].cmd_id)
    return -1;
 }
 return 0;
}
