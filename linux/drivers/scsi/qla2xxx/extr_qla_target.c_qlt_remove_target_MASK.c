
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qla_tgt; } ;
struct scsi_qla_host {TYPE_1__ vha_tgt; int host_no; scalar_t__ fc_vport; } ;
struct qla_hw_data {int dummy; } ;


 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,int ,struct qla_hw_data*) ;
 int VAR_0 ;
 int FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct qla_hw_data *VAR_1, struct scsi_qla_host *VAR_2)
{
 if (!VAR_2->vha_tgt.qla_tgt)
  return 0;

 if (VAR_2->fc_vport) {
  FUNC_2(VAR_2->vha_tgt.qla_tgt);
  return 0;
 }


 FUNC_1(VAR_2);

 FUNC_0(VAR_0, VAR_2, 0xe03c, "Unregistering target for host %ld(%p)",
     VAR_2->host_no, VAR_1);
 FUNC_2(VAR_2->vha_tgt.qla_tgt);

 return 0;
}
