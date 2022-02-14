
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dpc_flags; } ;
struct qla_work_evt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qla_work_evt* FUNC_0 (struct scsi_qla_host*,int ) ;
 int FUNC_1 (struct scsi_qla_host*,struct qla_work_evt*) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct scsi_qla_host *VAR_3)
{
 struct qla_work_evt *VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);

 if (!VAR_4) {
  FUNC_2(VAR_2, &VAR_3->dpc_flags);
  return VAR_1;
 }

 return FUNC_1(VAR_3, VAR_4);
}
