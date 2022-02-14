
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct bnx2x_func_afex_viflists_params {int afex_vif_list_command; int func_to_clear; int func_bit_map; int vif_list_index; } ;
struct TYPE_2__ {struct bnx2x_func_afex_viflists_params afex_viflists; } ;
struct bnx2x_func_state_params {TYPE_1__ params; struct bnx2x_func_sp_obj* f_obj; } ;
struct bnx2x_func_sp_obj {scalar_t__ afex_rdata; } ;
struct bnx2x {int dummy; } ;
struct afex_vif_list_ramrod_data {int func_to_clear; int func_bit_map; int vif_list_index; int afex_vif_list_command; int echo; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnx2x*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct afex_vif_list_ramrod_data*,int ,int) ;

__attribute__((used)) static
inline int FUNC_6(struct bnx2x *VAR_3,
      struct bnx2x_func_state_params *VAR_4)
{
 struct bnx2x_func_sp_obj *VAR_5 = VAR_4->f_obj;
 struct afex_vif_list_ramrod_data *VAR_6 =
  (struct afex_vif_list_ramrod_data *)VAR_5->afex_rdata;
 struct bnx2x_func_afex_viflists_params *VAR_7 =
  &VAR_4->params.afex_viflists;
 u64 *VAR_8 = (u64 *)VAR_6;

 FUNC_5(VAR_6, 0, sizeof(*VAR_6));


 VAR_6->vif_list_index = FUNC_4(VAR_7->vif_list_index);
 VAR_6->func_bit_map = VAR_7->func_bit_map;
 VAR_6->afex_vif_list_command = VAR_7->afex_vif_list_command;
 VAR_6->func_to_clear = VAR_7->func_to_clear;


 VAR_6->echo = VAR_7->afex_vif_list_command;
 FUNC_0(VAR_0, "afex: ramrod lists, cmd 0x%x index 0x%x func_bit_map 0x%x func_to_clr 0x%x\n",
    VAR_6->afex_vif_list_command, VAR_6->vif_list_index,
    VAR_6->func_bit_map, VAR_6->func_to_clear);


 return FUNC_3(VAR_3, VAR_2, 0,
        FUNC_1(*VAR_8), FUNC_2(*VAR_8),
        VAR_1);
}
