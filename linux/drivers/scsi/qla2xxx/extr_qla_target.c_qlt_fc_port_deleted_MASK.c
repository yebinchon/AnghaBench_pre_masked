
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct qla_tgt* qla_tgt; } ;
struct scsi_qla_host {TYPE_3__* hw; TYPE_1__ vha_tgt; } ;
struct qla_tgt {scalar_t__ tgt_stop; } ;
struct fc_port {int generation; int local; int port_name; int se_sess; } ;
typedef struct fc_port fc_port_t ;
struct TYPE_5__ {int sess_lock; int tgt_ops; } ;
struct TYPE_6__ {TYPE_2__ tgt; } ;


 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,struct fc_port*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct fc_port*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void
FUNC_4(struct scsi_qla_host *VAR_1, fc_port_t *VAR_2, int VAR_3)
{
 struct qla_tgt *VAR_4 = VAR_1->vha_tgt.qla_tgt;
 struct fc_port *VAR_5 = VAR_2;
 unsigned long VAR_6;

 if (!VAR_1->hw->tgt.tgt_ops)
  return;

 if (!VAR_4)
  return;

 FUNC_2(&VAR_1->hw->tgt.sess_lock, VAR_6);
 if (VAR_4->tgt_stop) {
  FUNC_3(&VAR_1->hw->tgt.sess_lock, VAR_6);
  return;
 }
 if (!VAR_5->se_sess) {
  FUNC_3(&VAR_1->hw->tgt.sess_lock, VAR_6);
  return;
 }

 if (VAR_3 - VAR_5->generation < 0) {
  FUNC_3(&VAR_1->hw->tgt.sess_lock, VAR_6);
  FUNC_0(VAR_0, VAR_1, 0xf092,
      "Ignoring stale deletion request for se_sess %p / sess %p"
      " for port %8phC, req_gen %d, sess_gen %d\n",
      VAR_5->se_sess, VAR_5, VAR_5->port_name, VAR_3,
      VAR_5->generation);
  return;
 }

 FUNC_0(VAR_0, VAR_1, 0xf008, "qla_tgt_fc_port_deleted %p", VAR_5);

 VAR_5->local = 1;
 FUNC_3(&VAR_1->hw->tgt.sess_lock, VAR_6);
 FUNC_1(VAR_5);
}
