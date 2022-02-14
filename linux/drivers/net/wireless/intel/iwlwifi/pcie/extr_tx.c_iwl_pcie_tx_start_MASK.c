
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int dma; } ;
struct iwl_trans_pcie {scalar_t__ scd_base_addr; int cmd_q_wdg_timeout; int cmd_fifo; int cmd_queue; TYPE_1__ scd_bc_tbls; int queue_used; int queue_stopped; } ;
struct iwl_trans {TYPE_3__* trans_cfg; } ;
struct TYPE_6__ {scalar_t__ device_family; TYPE_2__* base_params; } ;
struct TYPE_5__ {int num_of_queues; scalar_t__ scd_chain_ext_wa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct iwl_trans*,int ,int ) ;
 scalar_t__ FUNC_5 (struct iwl_trans*,int ) ;
 scalar_t__ FUNC_6 (struct iwl_trans*,int ) ;
 int FUNC_7 (struct iwl_trans*) ;
 int FUNC_8 (struct iwl_trans*,int ,int ,int ) ;
 int FUNC_9 (struct iwl_trans*,int,int *,int) ;
 int FUNC_10 (struct iwl_trans*,int ,scalar_t__) ;
 int FUNC_11 (struct iwl_trans*,int ,int) ;
 int FUNC_12 (int ,int ,int) ;

void FUNC_13(struct iwl_trans *VAR_12, u32 VAR_13)
{
 struct iwl_trans_pcie *VAR_14 = FUNC_1(VAR_12);
 int VAR_15 = VAR_12->trans_cfg->base_params->num_of_queues;
 int VAR_16;
 u32 VAR_17;
 int VAR_18 = (FUNC_2(VAR_15) -
    VAR_9) / sizeof(u32);


 FUNC_12(VAR_14->queue_stopped, 0, sizeof(VAR_14->queue_stopped));
 FUNC_12(VAR_14->queue_used, 0, sizeof(VAR_14->queue_used));

 VAR_14->scd_base_addr =
  FUNC_6(VAR_12, VAR_11);

 FUNC_3(VAR_13 != 0 &&
  VAR_13 != VAR_14->scd_base_addr);


 FUNC_9(VAR_12, VAR_14->scd_base_addr +
       VAR_9,
       ((void*)0), VAR_18);

 FUNC_11(VAR_12, VAR_10,
         VAR_14->scd_bc_tbls.dma >> 10);




 if (VAR_12->trans_cfg->base_params->scd_chain_ext_wa)
  FUNC_11(VAR_12, VAR_8, 0);

 FUNC_8(VAR_12, VAR_14->cmd_queue,
    VAR_14->cmd_fifo,
    VAR_14->cmd_q_wdg_timeout);


 FUNC_7(VAR_12);


 for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++)
  FUNC_10(VAR_12, FUNC_0(VAR_16),
       VAR_3 |
       VAR_4);


 VAR_17 = FUNC_5(VAR_12, VAR_5);
 FUNC_10(VAR_12, VAR_5,
      VAR_17 | VAR_6);


 if (VAR_12->trans_cfg->device_family < VAR_7)
  FUNC_4(VAR_12, VAR_0,
        VAR_1);
}
