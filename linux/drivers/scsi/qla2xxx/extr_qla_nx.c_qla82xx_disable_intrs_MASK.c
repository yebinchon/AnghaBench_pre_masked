
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tgt_mask_reg; } ;
struct qla_hw_data {scalar_t__ interrupts_on; int hardware_lock; TYPE_1__ nx_legacy_intr; int pdev; } ;
typedef int scsi_qla_host_t ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_0 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (struct qla_hw_data*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qla_hw_data*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct qla_hw_data *VAR_1)
{
 scsi_qla_host_t *VAR_2 = FUNC_1(VAR_1->pdev);

 if (VAR_1->interrupts_on)
  FUNC_3(VAR_2);

 FUNC_5(&VAR_1->hardware_lock);
 if (FUNC_0(VAR_1))
  FUNC_2(VAR_1, VAR_0, 1);
 else
  FUNC_4(VAR_1, VAR_1->nx_legacy_intr.tgt_mask_reg, 0x0400);
 FUNC_6(&VAR_1->hardware_lock);
 VAR_1->interrupts_on = 0;
}
