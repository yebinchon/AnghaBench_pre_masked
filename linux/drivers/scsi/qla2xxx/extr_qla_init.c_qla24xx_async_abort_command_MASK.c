
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct scsi_qla_host {TYPE_2__* hw; } ;
struct req_que {size_t num_outstanding_cmds; TYPE_3__** outstanding_cmds; } ;
struct qla_qpair {int qp_lock_ptr; struct req_que* req; } ;
struct TYPE_9__ {scalar_t__ type; struct qla_qpair* qpair; TYPE_4__* fcport; } ;
typedef TYPE_3__ srb_t ;
struct TYPE_10__ {struct scsi_qla_host* vha; } ;
typedef TYPE_4__ fc_port_t ;
struct TYPE_7__ {int fcport; } ;
struct TYPE_8__ {TYPE_1__ mr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (struct scsi_qla_host*,int *,int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

int
FUNC_4(srb_t *VAR_3)
{
 unsigned long VAR_4 = 0;

 uint32_t VAR_5;
 fc_port_t *VAR_6 = VAR_3->fcport;
 struct qla_qpair *VAR_7 = VAR_3->qpair;
 struct scsi_qla_host *VAR_8 = VAR_6->vha;
 struct req_que *VAR_9 = VAR_7->req;

 FUNC_2(VAR_7->qp_lock_ptr, VAR_4);
 for (VAR_5 = 1; VAR_5 < VAR_9->num_outstanding_cmds; VAR_5++) {
  if (VAR_9->outstanding_cmds[VAR_5] == VAR_3)
   break;
 }
 FUNC_3(VAR_7->qp_lock_ptr, VAR_4);

 if (VAR_5 == VAR_9->num_outstanding_cmds) {

  return VAR_1;
 }
 if (VAR_3->type == VAR_2)
  return FUNC_1(VAR_8, &VAR_8->hw->mr.fcport,
      VAR_0);

 return FUNC_0(VAR_3, 1);
}
