
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scsi_qla_host {int dummy; } ;
struct TYPE_3__ {int code; int data; } ;
struct TYPE_4__ {TYPE_1__ aen; } ;
struct qla_work_evt {TYPE_2__ u; } ;
typedef enum fc_host_event_code { ____Placeholder_fc_host_event_code } fc_host_event_code ;


 int VAR_0 ;
 int VAR_1 ;
 struct qla_work_evt* FUNC_0 (struct scsi_qla_host*,int ) ;
 int FUNC_1 (struct scsi_qla_host*,struct qla_work_evt*) ;

int
FUNC_2(struct scsi_qla_host *VAR_2, enum fc_host_event_code VAR_3,
    u32 VAR_4)
{
 struct qla_work_evt *VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_0);
 if (!VAR_5)
  return VAR_1;

 VAR_5->u.aen.code = VAR_3;
 VAR_5->u.aen.data = VAR_4;
 return FUNC_1(VAR_2, VAR_5);
}
