
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_qla_host {int mbox_status_count; TYPE_2__* isp_ops; TYPE_1__* reg; } ;
struct TYPE_4__ {int (* interrupt_service_routine ) (struct scsi_qla_host*,int) ;} ;
struct TYPE_3__ {int ctrl_status; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct scsi_qla_host*,int) ;

void FUNC_2(struct scsi_qla_host *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_1->reg->ctrl_status);
 if (VAR_3 & VAR_0) {





  VAR_1->mbox_status_count = VAR_2;
  VAR_1->isp_ops->interrupt_service_routine(VAR_1, VAR_3);
 }
}
