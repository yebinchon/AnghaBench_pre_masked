
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucc_geth_private {int * ug_regs; int ind_hash_q; int group_hash_q; TYPE_2__* p_init_enet_param_shadow; TYPE_1__* ug_info; int * p_rx_bd_qs_tbl; int rx_bd_qs_tbl_offset; int * p_rx_irq_coalescing_tbl; int rx_irq_coalescing_tbl_offset; int * p_rx_fw_statistics_pram; int rx_fw_statistics_pram_offset; int * p_tx_fw_statistics_pram; int tx_fw_statistics_pram_offset; int * p_scheduler; int scheduler_offset; int * p_send_q_mem_reg; int send_q_mem_reg_offset; int * p_tx_glbl_pram; int tx_glbl_pram_offset; int * p_rx_glbl_pram; int rx_glbl_pram_offset; int * p_exf_glbl_param; int exf_glbl_param_offset; int * p_thread_data_rx; int thread_dat_rx_offset; int * p_thread_data_tx; int thread_dat_tx_offset; int * uccf; } ;
struct TYPE_4__ {int * txthread; int * rxthread; } ;
struct TYPE_3__ {int riscTx; int riscRx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ucc_geth_private*,int *,int ,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ucc_geth_private*) ;
 int FUNC_10 (struct ucc_geth_private*) ;

__attribute__((used)) static void FUNC_11(struct ucc_geth_private *VAR_2)
{
 if (!VAR_2)
  return;

 if (VAR_2->uccf) {
  FUNC_8(VAR_2->uccf);
  VAR_2->uccf = ((void*)0);
 }

 if (VAR_2->p_thread_data_tx) {
  FUNC_6(VAR_2->thread_dat_tx_offset);
  VAR_2->p_thread_data_tx = ((void*)0);
 }
 if (VAR_2->p_thread_data_rx) {
  FUNC_6(VAR_2->thread_dat_rx_offset);
  VAR_2->p_thread_data_rx = ((void*)0);
 }
 if (VAR_2->p_exf_glbl_param) {
  FUNC_6(VAR_2->exf_glbl_param_offset);
  VAR_2->p_exf_glbl_param = ((void*)0);
 }
 if (VAR_2->p_rx_glbl_pram) {
  FUNC_6(VAR_2->rx_glbl_pram_offset);
  VAR_2->p_rx_glbl_pram = ((void*)0);
 }
 if (VAR_2->p_tx_glbl_pram) {
  FUNC_6(VAR_2->tx_glbl_pram_offset);
  VAR_2->p_tx_glbl_pram = ((void*)0);
 }
 if (VAR_2->p_send_q_mem_reg) {
  FUNC_6(VAR_2->send_q_mem_reg_offset);
  VAR_2->p_send_q_mem_reg = ((void*)0);
 }
 if (VAR_2->p_scheduler) {
  FUNC_6(VAR_2->scheduler_offset);
  VAR_2->p_scheduler = ((void*)0);
 }
 if (VAR_2->p_tx_fw_statistics_pram) {
  FUNC_6(VAR_2->tx_fw_statistics_pram_offset);
  VAR_2->p_tx_fw_statistics_pram = ((void*)0);
 }
 if (VAR_2->p_rx_fw_statistics_pram) {
  FUNC_6(VAR_2->rx_fw_statistics_pram_offset);
  VAR_2->p_rx_fw_statistics_pram = ((void*)0);
 }
 if (VAR_2->p_rx_irq_coalescing_tbl) {
  FUNC_6(VAR_2->rx_irq_coalescing_tbl_offset);
  VAR_2->p_rx_irq_coalescing_tbl = ((void*)0);
 }
 if (VAR_2->p_rx_bd_qs_tbl) {
  FUNC_6(VAR_2->rx_bd_qs_tbl_offset);
  VAR_2->p_rx_bd_qs_tbl = ((void*)0);
 }
 if (VAR_2->p_init_enet_param_shadow) {
  FUNC_7(VAR_2,
      &(VAR_2->p_init_enet_param_shadow->
        rxthread[0]),
      VAR_0,
      VAR_2->ug_info->riscRx, 1);
  FUNC_7(VAR_2,
      &(VAR_2->p_init_enet_param_shadow->
        txthread[0]),
      VAR_1,
      VAR_2->ug_info->riscTx, 0);
  FUNC_3(VAR_2->p_init_enet_param_shadow);
  VAR_2->p_init_enet_param_shadow = ((void*)0);
 }
 FUNC_10(VAR_2);
 FUNC_9(VAR_2);
 while (!FUNC_4(&VAR_2->group_hash_q))
  FUNC_5(FUNC_0
     (FUNC_1(&VAR_2->group_hash_q)));
 while (!FUNC_4(&VAR_2->ind_hash_q))
  FUNC_5(FUNC_0
     (FUNC_1(&VAR_2->ind_hash_q)));
 if (VAR_2->ug_regs) {
  FUNC_2(VAR_2->ug_regs);
  VAR_2->ug_regs = ((void*)0);
 }
}
