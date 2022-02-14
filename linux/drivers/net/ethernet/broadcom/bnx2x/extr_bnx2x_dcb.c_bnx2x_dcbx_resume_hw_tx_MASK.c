
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x_func_tx_start_params {int dummy; } ;
struct TYPE_2__ {struct bnx2x_func_tx_start_params tx_start; } ;
struct bnx2x_func_state_params {int ramrod_flags; int cmd; int * f_obj; TYPE_1__ params; int * member_0; } ;
struct bnx2x {int func_obj; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_func_tx_start_params*) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_func_state_params*) ;
 int FUNC_5 () ;

int FUNC_6(struct bnx2x *VAR_4)
{
 struct bnx2x_func_state_params VAR_5 = {((void*)0)};
 struct bnx2x_func_tx_start_params *VAR_6 =
  &VAR_5.params.tx_start;
 int VAR_7;

 VAR_5.f_obj = &VAR_4->func_obj;
 VAR_5.cmd = VAR_0;

 FUNC_2(VAR_2, &VAR_5.ramrod_flags);
 FUNC_2(VAR_3, &VAR_5.ramrod_flags);

 FUNC_3(VAR_4, VAR_6);

 FUNC_1(VAR_1, "START TRAFFIC\n");

 VAR_7 = FUNC_4(VAR_4, &VAR_5);
 if (VAR_7) {
  FUNC_0("Unable to resume traffic after HW configuration\n");
  FUNC_5();
 }

 return VAR_7;
}
