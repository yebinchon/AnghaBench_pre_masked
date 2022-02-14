
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u16 ;
struct bnx2x_func_afex_update_params {int allowed_priorities; void* afex_default_vlan; void* vif_id; } ;
struct TYPE_2__ {struct bnx2x_func_afex_update_params afex_update; } ;
struct bnx2x_func_state_params {int cmd; int * f_obj; TYPE_1__ params; int * member_0; } ;
struct bnx2x {int func_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bnx2x*,struct bnx2x_func_state_params*) ;
 int FUNC_1 (struct bnx2x*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct bnx2x *VAR_2, u16 VAR_3,
      u16 VAR_4, u8 VAR_5)
{
 struct bnx2x_func_state_params VAR_6 = {((void*)0)};
 struct bnx2x_func_afex_update_params *VAR_7 =
  &VAR_6.params.afex_update;

 VAR_6.f_obj = &VAR_2->func_obj;
 VAR_6.cmd = VAR_0;





 VAR_7->vif_id = VAR_3;
 VAR_7->afex_default_vlan = VAR_4;
 VAR_7->allowed_priorities = VAR_5;


 if (FUNC_0(VAR_2, &VAR_6) < 0)
  FUNC_1(VAR_2, VAR_1, 0);

 return 0;
}
