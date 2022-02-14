
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_op_mode {int dummy; } ;
struct iwl_mvm {int notif_wait; int status; int rfkill_safe_init_done; } ;


 int VAR_0 ;
 struct iwl_mvm* FUNC_0 (struct iwl_op_mode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static bool FUNC_7(struct iwl_op_mode *VAR_1, bool VAR_2)
{
 struct iwl_mvm *VAR_3 = FUNC_0(VAR_1);
 bool VAR_4 = FUNC_1(VAR_3->rfkill_safe_init_done);
 bool VAR_5 = FUNC_4(VAR_3);

 if (VAR_2)
  FUNC_6(VAR_0, &VAR_3->status);
 else
  FUNC_2(VAR_0, &VAR_3->status);

 FUNC_5(VAR_3);


 if (VAR_4)
  FUNC_3(&VAR_3->notif_wait);





 if (VAR_5)
  return 0;





 return VAR_2 && VAR_4;
}
