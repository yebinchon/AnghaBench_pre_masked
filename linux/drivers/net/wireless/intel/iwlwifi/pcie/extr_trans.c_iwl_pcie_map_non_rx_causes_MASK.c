
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans_pcie {int def_irq; } ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct iwl_causes_list {int cause_num; int mask_reg; int addr; } ;
struct TYPE_2__ {scalar_t__ device_family; } ;


 int FUNC_0 (struct iwl_causes_list*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 int VAR_1 ;
 struct iwl_causes_list* VAR_2 ;
 struct iwl_causes_list* VAR_3 ;
 int FUNC_3 (struct iwl_trans*,int ,int ) ;
 int FUNC_4 (struct iwl_trans*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct iwl_trans *VAR_4)
{
 struct iwl_trans_pcie *VAR_5 = FUNC_2(VAR_4);
 int VAR_6 = VAR_5->def_irq | VAR_1;
 int VAR_7, VAR_8 =
  (VAR_4->trans_cfg->device_family != VAR_0) ?
  FUNC_0(VAR_2) : FUNC_0(VAR_3);






 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  struct iwl_causes_list *VAR_9 =
   (VAR_4->trans_cfg->device_family !=
    VAR_0) ?
   VAR_2 : VAR_3;

  FUNC_4(VAR_4, FUNC_1(VAR_9[VAR_7].addr), VAR_6);
  FUNC_3(VAR_4, VAR_9[VAR_7].mask_reg,
         VAR_9[VAR_7].cause_num);
 }
}
