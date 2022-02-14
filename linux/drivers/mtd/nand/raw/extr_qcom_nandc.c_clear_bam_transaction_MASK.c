
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_nand_controller {int max_cwperpage; TYPE_1__* props; struct bam_transaction* bam_txn; } ;
struct bam_transaction {int wait_second_completion; int txn_done; int data_sgl; int cmd_sgl; int * last_data_desc; scalar_t__ rx_sgl_start; scalar_t__ rx_sgl_pos; scalar_t__ tx_sgl_start; scalar_t__ tx_sgl_pos; scalar_t__ cmd_sgl_start; scalar_t__ cmd_sgl_pos; scalar_t__ bam_ce_start; scalar_t__ bam_ce_pos; } ;
struct TYPE_2__ {int is_bam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct qcom_nand_controller *VAR_2)
{
 struct bam_transaction *VAR_3 = VAR_2->bam_txn;

 if (!VAR_2->props->is_bam)
  return;

 VAR_3->bam_ce_pos = 0;
 VAR_3->bam_ce_start = 0;
 VAR_3->cmd_sgl_pos = 0;
 VAR_3->cmd_sgl_start = 0;
 VAR_3->tx_sgl_pos = 0;
 VAR_3->tx_sgl_start = 0;
 VAR_3->rx_sgl_pos = 0;
 VAR_3->rx_sgl_start = 0;
 VAR_3->last_data_desc = ((void*)0);
 VAR_3->wait_second_completion = 0;

 FUNC_1(VAR_3->cmd_sgl, VAR_2->max_cwperpage *
        VAR_0);
 FUNC_1(VAR_3->data_sgl, VAR_2->max_cwperpage *
        VAR_1);

 FUNC_0(&VAR_3->txn_done);
}
