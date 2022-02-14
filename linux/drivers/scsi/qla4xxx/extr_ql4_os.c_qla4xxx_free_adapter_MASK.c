
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_qla_host {TYPE_4__* isp_ops; scalar_t__ task_wq; scalar_t__ dpc_thread; scalar_t__ timer_active; TYPE_3__* qla4_83xx_reg; TYPE_2__* qla4_82xx_reg; TYPE_1__* reg; } ;
struct TYPE_8__ {int (* idc_unlock ) (struct scsi_qla_host*) ;int (* idc_lock ) (struct scsi_qla_host*) ;int (* reset_firmware ) (struct scsi_qla_host*) ;int (* disable_intrs ) (struct scsi_qla_host*) ;} ;
struct TYPE_7__ {int risc_intr; } ;
struct TYPE_6__ {int host_int; } ;
struct TYPE_5__ {int ctrl_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_2 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_3 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_4 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_5 (struct scsi_qla_host*) ;
 int FUNC_6 (struct scsi_qla_host*) ;
 int FUNC_7 (struct scsi_qla_host*,int) ;
 int FUNC_8 (struct scsi_qla_host*) ;
 int FUNC_9 (struct scsi_qla_host*) ;
 int FUNC_10 (struct scsi_qla_host*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct scsi_qla_host*) ;
 int FUNC_14 (struct scsi_qla_host*) ;
 int FUNC_15 (struct scsi_qla_host*) ;
 int FUNC_16 (struct scsi_qla_host*) ;
 int FUNC_17 (int ,int *) ;

__attribute__((used)) static void FUNC_18(struct scsi_qla_host *VAR_2)
{
 FUNC_7(VAR_2, VAR_1 << 16);


 VAR_2->isp_ops->disable_intrs(VAR_2);

 if (FUNC_1(VAR_2)) {
  FUNC_17(FUNC_12(VAR_0),
         &VAR_2->reg->ctrl_status);
  FUNC_11(&VAR_2->reg->ctrl_status);
 } else if (FUNC_2(VAR_2)) {
  FUNC_17(0, &VAR_2->qla4_82xx_reg->host_int);
  FUNC_11(&VAR_2->qla4_82xx_reg->host_int);
 } else if (FUNC_3(VAR_2) || FUNC_4(VAR_2)) {
  FUNC_17(0, &VAR_2->qla4_83xx_reg->risc_intr);
  FUNC_11(&VAR_2->qla4_83xx_reg->risc_intr);
 }


 if (VAR_2->timer_active)
  FUNC_10(VAR_2);


 if (VAR_2->dpc_thread)
  FUNC_0(VAR_2->dpc_thread);


 if (VAR_2->task_wq)
  FUNC_0(VAR_2->task_wq);


 VAR_2->isp_ops->reset_firmware(VAR_2);

 if (FUNC_5(VAR_2)) {
  VAR_2->isp_ops->idc_lock(VAR_2);
  FUNC_6(VAR_2);
  VAR_2->isp_ops->idc_unlock(VAR_2);
 }


 FUNC_8(VAR_2);


 FUNC_9(VAR_2);
}
