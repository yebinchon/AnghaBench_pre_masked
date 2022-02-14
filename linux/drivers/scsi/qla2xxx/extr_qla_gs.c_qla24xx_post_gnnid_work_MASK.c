
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_qla_host {int dpc_flags; int loop_state; } ;
struct TYPE_3__ {int * fcport; } ;
struct TYPE_4__ {TYPE_1__ fcport; } ;
struct qla_work_evt {TYPE_2__ u; } ;
typedef int fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 struct qla_work_evt* FUNC_1 (struct scsi_qla_host*,int ) ;
 int FUNC_2 (struct scsi_qla_host*,struct qla_work_evt*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

int FUNC_4(struct scsi_qla_host *VAR_5, fc_port_t *VAR_6)
{
 struct qla_work_evt *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(&VAR_5->loop_state);
 if (((VAR_8 != VAR_0) && (VAR_8 != VAR_1)) ||
  FUNC_3(VAR_4, &VAR_5->dpc_flags))
  return 0;

 VAR_7 = FUNC_1(VAR_5, VAR_2);
 if (!VAR_7)
  return VAR_3;

 VAR_7->u.fcport.fcport = VAR_6;
 return FUNC_2(VAR_5, VAR_7);
}
