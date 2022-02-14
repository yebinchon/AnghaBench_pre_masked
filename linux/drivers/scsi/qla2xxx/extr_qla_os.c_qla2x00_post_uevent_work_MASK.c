
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scsi_qla_host {int dummy; } ;
struct TYPE_3__ {int code; } ;
struct TYPE_4__ {TYPE_1__ uevent; } ;
struct qla_work_evt {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qla_work_evt* FUNC_0 (struct scsi_qla_host*,int ) ;
 int FUNC_1 (struct scsi_qla_host*,struct qla_work_evt*) ;

int
FUNC_2(struct scsi_qla_host *VAR_2, u32 VAR_3)
{
 struct qla_work_evt *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (!VAR_4)
  return VAR_1;

 VAR_4->u.uevent.code = VAR_3;
 return FUNC_1(VAR_2, VAR_4);
}
