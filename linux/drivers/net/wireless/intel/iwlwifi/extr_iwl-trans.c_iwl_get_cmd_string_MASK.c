
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct iwl_trans {size_t command_groups_size; struct iwl_hcmd_arr* command_groups; } ;
struct iwl_hcmd_names {char const* cmd_name; } ;
struct iwl_hcmd_arr {int size; int arr; } ;


 struct iwl_hcmd_names* FUNC_0 (size_t*,int ,int ,size_t,int ) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int VAR_0 ;

const char *FUNC_3(struct iwl_trans *VAR_1, u32 VAR_2)
{
 u8 VAR_3, VAR_4;
 struct iwl_hcmd_names *VAR_5;
 const struct iwl_hcmd_arr *VAR_6;
 size_t VAR_7 = sizeof(struct iwl_hcmd_names);

 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = FUNC_2(VAR_2);

 if (!VAR_1->command_groups || VAR_3 >= VAR_1->command_groups_size ||
     !VAR_1->command_groups[VAR_3].arr)
  return "UNKNOWN";

 VAR_6 = &VAR_1->command_groups[VAR_3];
 VAR_5 = FUNC_0(&VAR_4, VAR_6->arr, VAR_6->size, VAR_7, VAR_0);
 if (!VAR_5)
  return "UNKNOWN";
 return VAR_5->cmd_name;
}
