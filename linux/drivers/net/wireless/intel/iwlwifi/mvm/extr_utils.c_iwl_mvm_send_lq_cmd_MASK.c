
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int dummy; } ;
struct iwl_lq_cmd {scalar_t__ sta_id; } ;
struct iwl_host_cmd {int data; int flags; int len; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (struct iwl_mvm*,struct iwl_host_cmd*) ;

int FUNC_3(struct iwl_mvm *VAR_4, struct iwl_lq_cmd *VAR_5)
{
 struct iwl_host_cmd VAR_6 = {
  .id = VAR_3,
  .len = sizeof(struct iwl_lq_cmd), 
  .flags = VAR_0,
  .data = VAR_5, 
 };

 if (FUNC_0(VAR_5->sta_id == VAR_2 ||
      FUNC_1(VAR_4)))
  return -VAR_1;

 return FUNC_2(VAR_4, &VAR_6);
}
