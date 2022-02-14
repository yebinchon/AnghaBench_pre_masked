
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_qla_host {int mbox_status_count; TYPE_2__* isp_ops; TYPE_1__* qla4_83xx_reg; } ;
struct TYPE_4__ {int (* interrupt_service_routine ) (struct scsi_qla_host*,int) ;} ;
struct TYPE_3__ {int risc_intr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct scsi_qla_host*,int) ;

void FUNC_2(struct scsi_qla_host *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_0->qla4_83xx_reg->risc_intr);
 if (VAR_2) {
  VAR_0->mbox_status_count = VAR_1;
  VAR_0->isp_ops->interrupt_service_routine(VAR_0, VAR_2);
 }
}
