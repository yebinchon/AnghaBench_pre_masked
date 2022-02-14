
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_qla_host {int dpc_flags; scalar_t__ vp_idx; } ;
struct TYPE_3__ {int id; } ;
struct TYPE_4__ {TYPE_1__ gpnid; } ;
struct qla_work_evt {TYPE_2__ u; } ;
typedef int port_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct qla_work_evt* FUNC_0 (struct scsi_qla_host*,int ) ;
 int FUNC_1 (struct scsi_qla_host*,struct qla_work_evt*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

int FUNC_3(struct scsi_qla_host *VAR_4, port_id_t *VAR_5)
{
 struct qla_work_evt *VAR_6;

 if (FUNC_2(VAR_2, &VAR_4->dpc_flags) ||
     (VAR_4->vp_idx && FUNC_2(VAR_3, &VAR_4->dpc_flags)))
  return 0;

 VAR_6 = FUNC_0(VAR_4, VAR_0);
 if (!VAR_6)
  return VAR_1;

 VAR_6->u.gpnid.id = *VAR_5;
 return FUNC_1(VAR_4, VAR_6);
}
