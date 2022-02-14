
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pci_int_reg; int tgt_mask_reg; int tgt_status_reg; int int_vec_bit; } ;
struct qla_hw_data {int qdr_sn_window; int ddr_mn_window; int curr_window; size_t portnum; TYPE_2__ nx_legacy_intr; TYPE_1__* pdev; int hw_lock; } ;
struct qla82xx_legacy_intr_set {int pci_int_reg; int tgt_mask_reg; int tgt_status_reg; int int_vec_bit; } ;
struct TYPE_3__ {int devfn; } ;


 size_t FUNC_0 (int ) ;
 struct qla82xx_legacy_intr_set* VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct qla_hw_data *VAR_1)
{
 struct qla82xx_legacy_intr_set *VAR_2;


 FUNC_1(&VAR_1->hw_lock);
 VAR_1->qdr_sn_window = -1;
 VAR_1->ddr_mn_window = -1;
 VAR_1->curr_window = 255;
 VAR_1->portnum = FUNC_0(VAR_1->pdev->devfn);
 VAR_2 = &VAR_0[VAR_1->portnum];
 VAR_1->nx_legacy_intr.int_vec_bit = VAR_2->int_vec_bit;
 VAR_1->nx_legacy_intr.tgt_status_reg = VAR_2->tgt_status_reg;
 VAR_1->nx_legacy_intr.tgt_mask_reg = VAR_2->tgt_mask_reg;
 VAR_1->nx_legacy_intr.pci_int_reg = VAR_2->pci_int_reg;
}
