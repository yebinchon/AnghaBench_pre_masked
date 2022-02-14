
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x_func_set_timesync_params {int offset_cmd; int drift_adjust_cmd; } ;
struct TYPE_2__ {struct bnx2x_func_set_timesync_params set_timesync; } ;
struct bnx2x_func_state_params {int cmd; int * f_obj; int ramrod_flags; TYPE_1__ params; int * member_0; } ;
struct bnx2x {int func_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_func_state_params*) ;

__attribute__((used)) static int FUNC_2(struct bnx2x *VAR_5)
{
 struct bnx2x_func_state_params VAR_6 = {((void*)0)};
 struct bnx2x_func_set_timesync_params *VAR_7 =
  &VAR_6.params.set_timesync;


 FUNC_0(VAR_1, &VAR_6.ramrod_flags);
 FUNC_0(VAR_2, &VAR_6.ramrod_flags);

 VAR_6.f_obj = &VAR_5->func_obj;
 VAR_6.cmd = VAR_0;


 VAR_7->drift_adjust_cmd = VAR_3;
 VAR_7->offset_cmd = VAR_4;

 return FUNC_1(VAR_5, &VAR_6);
}
