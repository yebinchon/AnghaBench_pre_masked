
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct scsi_qla_host {int dummy; } ;
struct TYPE_3__ {int count; int mbx; int evtcode; } ;
struct TYPE_4__ {TYPE_1__ aenfx; } ;
struct qla_work_evt {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 struct qla_work_evt* FUNC_1 (struct scsi_qla_host*,int ) ;
 int FUNC_2 (struct scsi_qla_host*,struct qla_work_evt*) ;

int
FUNC_3(struct scsi_qla_host *VAR_2, uint32_t VAR_3,
   uint32_t *VAR_4, int VAR_5)
{
 struct qla_work_evt *VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_0);
 if (!VAR_6)
  return VAR_1;

 VAR_6->u.aenfx.evtcode = VAR_3;
 VAR_6->u.aenfx.count = VAR_5;
 FUNC_0(VAR_6->u.aenfx.mbx, VAR_4, sizeof(*VAR_4) * VAR_5);
 return FUNC_2(VAR_2, VAR_6);
}
