
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iwl_fwrt_shared_mem_cfg {int num_lmacs; TYPE_2__* lmac; int rxfifo2_size; } ;
struct iwl_fw_runtime {TYPE_3__* trans; struct iwl_fwrt_shared_mem_cfg smem_cfg; } ;
struct iwl_fw_error_dump_data {int dummy; } ;
struct TYPE_7__ {TYPE_1__* trans_cfg; } ;
struct TYPE_6__ {int rxfifo1_size; } ;
struct TYPE_5__ {scalar_t__ umac_prph_offset; } ;


 int FUNC_0 (struct iwl_fw_runtime*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct iwl_fw_runtime*,int ) ;
 int FUNC_2 (struct iwl_fw_runtime*,struct iwl_fw_error_dump_data**,int ,scalar_t__,int) ;
 int FUNC_3 (TYPE_3__*,unsigned long*) ;
 int FUNC_4 (TYPE_3__*,unsigned long*) ;

__attribute__((used)) static void FUNC_5(struct iwl_fw_runtime *VAR_3,
       struct iwl_fw_error_dump_data **VAR_4)
{
 struct iwl_fwrt_shared_mem_cfg *VAR_5 = &VAR_3->smem_cfg;
 unsigned long VAR_6;

 FUNC_0(VAR_3, "WRT RX FIFO dump\n");

 if (!FUNC_3(VAR_3->trans, &VAR_6))
  return;

 if (FUNC_1(VAR_3, VAR_0)) {

  FUNC_2(VAR_3, VAR_4,
      VAR_5->lmac[0].rxfifo1_size, 0, 0);

  FUNC_2(VAR_3, VAR_4, VAR_5->rxfifo2_size,
      VAR_2 +
      VAR_3->trans->trans_cfg->umac_prph_offset, 1);

  if (VAR_3->smem_cfg.num_lmacs > 1)
   FUNC_2(VAR_3, VAR_4,
       VAR_5->lmac[1].rxfifo1_size,
       VAR_1, 2);
 }

 FUNC_4(VAR_3->trans, &VAR_6);
}
