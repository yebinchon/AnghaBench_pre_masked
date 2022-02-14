
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans_pcie {int irq_lock; } ;
struct iwl_trans {TYPE_2__* trans_cfg; int op_mode; } ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {scalar_t__ shadow_reg_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans*,int) ;
 scalar_t__ FUNC_6 (struct iwl_trans*) ;
 int FUNC_7 (struct iwl_trans*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct iwl_trans *VAR_2)
{
 struct iwl_trans_pcie *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;


 FUNC_8(&VAR_3->irq_lock);
 VAR_4 = FUNC_3(VAR_2);
 FUNC_9(&VAR_3->irq_lock);

 if (VAR_4)
  return VAR_4;

 FUNC_5(VAR_2, 0);

 FUNC_2(VAR_2->op_mode);


 FUNC_4(VAR_2);


 if (FUNC_6(VAR_2))
  return -VAR_1;

 if (VAR_2->trans_cfg->base_params->shadow_reg_enable) {

  FUNC_7(VAR_2, VAR_0, 0x800FFFFF);
  FUNC_0(VAR_2, "Enabling shadow registers in device\n");
 }

 return 0;
}
