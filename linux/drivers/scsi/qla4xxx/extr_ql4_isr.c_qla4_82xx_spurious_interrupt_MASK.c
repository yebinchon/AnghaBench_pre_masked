
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_6__ {int tgt_mask_reg; } ;
struct scsi_qla_host {int spurious_int_count; TYPE_3__ nx_legacy_intr; TYPE_2__* pdev; TYPE_1__* qla4_82xx_reg; } ;
struct TYPE_5__ {int msix_enabled; int msi_enabled; } ;
struct TYPE_4__ {int host_int; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (int ,struct scsi_qla_host*,char*) ;
 int FUNC_3 (struct scsi_qla_host*,int ,int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct scsi_qla_host *VAR_1,
    uint8_t VAR_2)
{
 if (VAR_2)
  return;

 FUNC_0(FUNC_2(VAR_0, VAR_1, "Spurious Interrupt\n"));
 if (FUNC_1(VAR_1)) {
  FUNC_4(0, &VAR_1->qla4_82xx_reg->host_int);
  if (!VAR_1->pdev->msi_enabled && !VAR_1->pdev->msix_enabled)
   FUNC_3(VAR_1, VAR_1->nx_legacy_intr.tgt_mask_reg,
       0xfbff);
 }
 VAR_1->spurious_int_count++;
}
