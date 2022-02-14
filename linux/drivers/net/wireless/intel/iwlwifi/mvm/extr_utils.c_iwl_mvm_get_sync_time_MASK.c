
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct iwl_mvm {int ps_disabled; int mutex; } ;


 int FUNC_0 (struct iwl_mvm*) ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

void FUNC_4(struct iwl_mvm *VAR_0, u32 *VAR_1, u64 *VAR_2)
{
 bool VAR_3;

 FUNC_3(&VAR_0->mutex);


 VAR_3 = VAR_0->ps_disabled;
 if (!VAR_3) {
  VAR_0->ps_disabled = 1;
  FUNC_1(VAR_0);
 }

 *VAR_1 = FUNC_0(VAR_0);
 *VAR_2 = FUNC_2();

 if (!VAR_3) {
  VAR_0->ps_disabled = VAR_3;
  FUNC_1(VAR_0);
 }
}
