
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct scsi_qla_host {int dummy; } ;
struct TYPE_5__ {int opt; TYPE_3__* fcport; } ;
struct TYPE_6__ {TYPE_1__ fcport; } ;
struct qla_work_evt {TYPE_2__ u; } ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_3__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qla_work_evt* FUNC_0 (struct scsi_qla_host*,int ) ;
 int FUNC_1 (struct scsi_qla_host*,struct qla_work_evt*) ;

int FUNC_2(struct scsi_qla_host *VAR_3, fc_port_t *VAR_4, u8 VAR_5)
{
 struct qla_work_evt *VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_1);
 if (!VAR_6)
  return VAR_2;

 VAR_6->u.fcport.fcport = VAR_4;
 VAR_6->u.fcport.opt = VAR_5;
 VAR_4->flags |= VAR_0;
 return FUNC_1(VAR_3, VAR_6);
}
