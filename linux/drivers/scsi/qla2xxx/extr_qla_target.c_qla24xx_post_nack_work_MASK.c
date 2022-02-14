
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_qla_host {int dummy; } ;
struct TYPE_3__ {int type; int iocb; int * fcport; } ;
struct TYPE_4__ {TYPE_1__ nack; } ;
struct qla_work_evt {TYPE_2__ u; } ;
struct imm_ntfy_from_isp {int dummy; } ;
typedef int fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct imm_ntfy_from_isp*,int) ;
 struct qla_work_evt* FUNC_1 (struct scsi_qla_host*,int ) ;
 int FUNC_2 (struct scsi_qla_host*,struct qla_work_evt*) ;

__attribute__((used)) static int FUNC_3(struct scsi_qla_host *VAR_2, fc_port_t *VAR_3,
 struct imm_ntfy_from_isp *VAR_4, int VAR_5)
{
 struct qla_work_evt *VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_0);
 if (!VAR_6)
  return VAR_1;

 VAR_6->u.nack.fcport = VAR_3;
 VAR_6->u.nack.type = VAR_5;
 FUNC_0(VAR_6->u.nack.iocb, VAR_4, sizeof(struct imm_ntfy_from_isp));
 return FUNC_2(VAR_2, VAR_6);
}
