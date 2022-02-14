
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans_pcie {int cmd_queue; int irq_lock; } ;
struct iwl_trans {int op_mode; TYPE_1__* cfg; } ;
struct TYPE_2__ {int min_txq_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_trans*) ;
 scalar_t__ FUNC_4 (struct iwl_trans*) ;
 scalar_t__ FUNC_5 (struct iwl_trans*,int ,int) ;
 int FUNC_6 (struct iwl_trans*,int ,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(struct iwl_trans *VAR_4)
{
 struct iwl_trans_pcie *VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = FUNC_7(VAR_3, VAR_2,
          VAR_4->cfg->min_txq_size);


 FUNC_8(&VAR_5->irq_lock);
 FUNC_3(VAR_4);
 FUNC_9(&VAR_5->irq_lock);

 FUNC_2(VAR_4->op_mode);


 if (FUNC_4(VAR_4))
  return -VAR_1;


 if (FUNC_5(VAR_4, VAR_5->cmd_queue, VAR_6))
  return -VAR_1;


 FUNC_6(VAR_4, VAR_0, 0x800FFFFF);
 FUNC_0(VAR_4, "Enabling shadow registers in device\n");

 return 0;
}
