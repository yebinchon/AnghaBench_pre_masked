
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct scsi_qla_host {int dummy; } ;
struct TYPE_3__ {int code; int data; int data_size; } ;
struct TYPE_4__ {TYPE_1__ aen; } ;
struct qla4_work_evt {TYPE_2__ u; } ;
typedef enum iscsi_host_event_code { ____Placeholder_iscsi_host_event_code } iscsi_host_event_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;
 struct qla4_work_evt* FUNC_1 (struct scsi_qla_host*,int ,int ) ;
 int FUNC_2 (struct scsi_qla_host*,struct qla4_work_evt*) ;

int FUNC_3(struct scsi_qla_host *VAR_3,
     enum iscsi_host_event_code VAR_4,
     uint32_t VAR_5, uint8_t *VAR_6)
{
 struct qla4_work_evt *VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_0);
 if (!VAR_7)
  return VAR_1;

 VAR_7->u.aen.code = VAR_4;
 VAR_7->u.aen.data_size = VAR_5;
 FUNC_0(VAR_7->u.aen.data, VAR_6, VAR_5);

 FUNC_2(VAR_3, VAR_7);

 return VAR_2;
}
