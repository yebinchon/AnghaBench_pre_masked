
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iwl_mvm {scalar_t__ temperature; scalar_t__ temperature_test; } ;


 int FUNC_0 (struct iwl_mvm*) ;

void FUNC_1(struct iwl_mvm *VAR_0, u32 VAR_1)
{

 if (VAR_0->temperature_test)
  return;

 if (VAR_0->temperature == VAR_1)
  return;

 VAR_0->temperature = VAR_1;
 FUNC_0(VAR_0);
}
