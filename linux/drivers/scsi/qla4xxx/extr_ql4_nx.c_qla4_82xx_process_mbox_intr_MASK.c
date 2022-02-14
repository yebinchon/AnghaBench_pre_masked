
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int tgt_mask_reg; } ;
struct scsi_qla_host {int mbox_status_count; TYPE_3__ nx_legacy_intr; TYPE_2__* pdev; int flags; TYPE_1__* isp_ops; TYPE_4__* qla4_82xx_reg; } ;
struct TYPE_8__ {int host_status; int host_int; } ;
struct TYPE_6__ {int msix_enabled; int msi_enabled; } ;
struct TYPE_5__ {int (* interrupt_service_routine ) (struct scsi_qla_host*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_qla_host*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct scsi_qla_host*,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

void FUNC_4(struct scsi_qla_host *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_2->qla4_82xx_reg->host_int);
 if (VAR_4 & VAR_1) {
  VAR_2->mbox_status_count = VAR_3;
  VAR_4 = FUNC_1(&VAR_2->qla4_82xx_reg->host_status);
  VAR_2->isp_ops->interrupt_service_routine(VAR_2, VAR_4);

  if (FUNC_3(VAR_0, &VAR_2->flags) &&
      (!VAR_2->pdev->msi_enabled && !VAR_2->pdev->msix_enabled))
   FUNC_0(VAR_2, VAR_2->nx_legacy_intr.tgt_mask_reg,
     0xfbff);
 }
}
