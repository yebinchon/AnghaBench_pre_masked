
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
struct scsi_qla_host {int dummy; } ;
struct TYPE_4__ {int data; void* data_size; void* pid; void* status; } ;
struct TYPE_3__ {TYPE_2__ ping; } ;
struct qla4_work_evt {TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,void*) ;
 struct qla4_work_evt* FUNC_1 (struct scsi_qla_host*,void*,int ) ;
 int FUNC_2 (struct scsi_qla_host*,struct qla4_work_evt*) ;

int FUNC_3(struct scsi_qla_host *VAR_3,
          uint32_t VAR_4, uint32_t VAR_5,
          uint32_t VAR_6, uint8_t *VAR_7)
{
 struct qla4_work_evt *VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_6, VAR_0);
 if (!VAR_8)
  return VAR_1;

 VAR_8->u.ping.status = VAR_4;
 VAR_8->u.ping.pid = VAR_5;
 VAR_8->u.ping.data_size = VAR_6;
 FUNC_0(VAR_8->u.ping.data, VAR_7, VAR_6);

 FUNC_2(VAR_3, VAR_8);

 return VAR_2;
}
