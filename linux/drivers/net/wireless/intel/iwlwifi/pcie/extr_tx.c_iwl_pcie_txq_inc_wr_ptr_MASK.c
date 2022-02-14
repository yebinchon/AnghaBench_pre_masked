
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct iwl_txq {int id; int need_update; int write_ptr; int block; int lock; } ;
struct iwl_trans_pcie {int cmd_queue; } ;
struct iwl_trans {TYPE_3__* trans_cfg; int status; } ;
struct TYPE_6__ {TYPE_2__* csr; TYPE_1__* base_params; } ;
struct TYPE_5__ {int flag_mac_access_req; } ;
struct TYPE_4__ {int shadow_reg_enable; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwl_trans*,char*,int,int) ;
 int FUNC_2 (struct iwl_trans*,char*,int,int) ;
 struct iwl_trans_pcie* FUNC_3 (struct iwl_trans*) ;
 int VAR_4 ;
 int FUNC_4 (struct iwl_trans*,int ) ;
 int FUNC_5 (struct iwl_trans*,int ,int ) ;
 int FUNC_6 (struct iwl_trans*,int ,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct iwl_trans *VAR_5,
        struct iwl_txq *VAR_6)
{
 struct iwl_trans_pcie *VAR_7 = FUNC_3(VAR_5);
 u32 VAR_8 = 0;
 int VAR_9 = VAR_6->id;

 FUNC_7(&VAR_6->lock);







 if (!VAR_5->trans_cfg->base_params->shadow_reg_enable &&
     VAR_9 != VAR_7->cmd_queue &&
     FUNC_8(VAR_4, &VAR_5->status)) {





  VAR_8 = FUNC_4(VAR_5, VAR_1);

  if (VAR_8 & VAR_2) {
   FUNC_1(VAR_5, "Tx queue %d requesting wakeup, GP1 = 0x%x\n",
           VAR_9, VAR_8);
   FUNC_5(VAR_5, VAR_0,
        FUNC_0(VAR_5->trans_cfg->csr->flag_mac_access_req));
   VAR_6->need_update = 1;
   return;
  }
 }





 FUNC_2(VAR_5, "Q:%d WR: 0x%x\n", VAR_9, VAR_6->write_ptr);
 if (!VAR_6->block)
  FUNC_6(VAR_5, VAR_3,
       VAR_6->write_ptr | (VAR_9 << 8));
}
