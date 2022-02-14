
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm_time_event_data {int dummy; } ;
struct iwl_mvm {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,struct iwl_mvm_time_event_data*,int *) ;
 struct iwl_mvm_time_event_data* FUNC_1 (struct iwl_mvm*) ;

void FUNC_2(struct iwl_mvm *VAR_0)
{
 struct iwl_mvm_time_event_data *VAR_1;
 u32 VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  FUNC_0(VAR_0, VAR_1, &VAR_2);
}
