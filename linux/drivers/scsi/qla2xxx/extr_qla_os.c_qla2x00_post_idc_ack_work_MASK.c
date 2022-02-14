
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct scsi_qla_host {int dummy; } ;
struct TYPE_3__ {int mb; } ;
struct TYPE_4__ {TYPE_1__ idc_ack; } ;
struct qla_work_evt {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int) ;
 struct qla_work_evt* FUNC_1 (struct scsi_qla_host*,int ) ;
 int FUNC_2 (struct scsi_qla_host*,struct qla_work_evt*) ;

int
FUNC_3(struct scsi_qla_host *VAR_3, uint16_t *VAR_4)
{
 struct qla_work_evt *VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_5)
  return VAR_1;

 FUNC_0(VAR_5->u.idc_ack.mb, VAR_4, VAR_2 * sizeof(uint16_t));
 return FUNC_2(VAR_3, VAR_5);
}
