
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {TYPE_1__* isp_ops; } ;
struct TYPE_2__ {int (* idc_unlock ) (struct scsi_qla_host*) ;int (* idc_lock ) (struct scsi_qla_host*) ;} ;


 int FUNC_0 (struct scsi_qla_host*) ;
 int FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (struct scsi_qla_host*) ;
 int FUNC_3 (struct scsi_qla_host*) ;
 int FUNC_4 (struct scsi_qla_host*) ;

void FUNC_5(struct scsi_qla_host *VAR_0)
{
 VAR_0->isp_ops->idc_lock(VAR_0);

 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 VAR_0->isp_ops->idc_unlock(VAR_0);
}
