
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x_func_switch_update_params {int changes; } ;
struct TYPE_2__ {struct bnx2x_func_switch_update_params switch_update; } ;
struct bnx2x_func_state_params {int cmd; int * f_obj; int ramrod_flags; TYPE_1__ params; int * member_0; } ;
struct bnx2x {int func_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_func_state_params*) ;

__attribute__((used)) static inline int FUNC_2(struct bnx2x *VAR_5, int VAR_6)
{
 int VAR_7;
 struct bnx2x_func_state_params VAR_8 = {((void*)0)};
 struct bnx2x_func_switch_update_params *VAR_9 =
  &VAR_8.params.switch_update;


 FUNC_0(VAR_3, &VAR_8.ramrod_flags);
 FUNC_0(VAR_4, &VAR_8.ramrod_flags);

 VAR_8.f_obj = &VAR_5->func_obj;
 VAR_8.cmd = VAR_0;


 FUNC_0(VAR_2,
    &VAR_9->changes);
 if (VAR_6)
  FUNC_0(VAR_1,
     &VAR_9->changes);

 VAR_7 = FUNC_1(VAR_5, &VAR_8);

 return VAR_7;
}
