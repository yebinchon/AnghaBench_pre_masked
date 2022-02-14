
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int se_cmd_flags; struct se_cmd* t_state; struct qla_tgt_cmd* transport_state; int tag; } ;
struct scsi_qla_host {struct qla_tgt_cmd* vp_idx; } ;
struct qla_tgt_cmd {int aborted; int atio; int qpair; int cmd_lock; int trc_flags; struct se_cmd se_cmd; struct qla_tgt* tgt; } ;
struct qla_tgt {struct scsi_qla_host* vha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,struct qla_tgt_cmd*,struct qla_tgt_cmd*,struct se_cmd*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,struct qla_tgt_cmd*,int *,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct qla_tgt_cmd *VAR_3)
{
 struct qla_tgt *VAR_4 = VAR_3->tgt;
 struct scsi_qla_host *VAR_5 = VAR_4->vha;
 struct se_cmd *VAR_6 = &VAR_3->se_cmd;
 unsigned long VAR_7;

 FUNC_0(VAR_2, VAR_5, 0xf014,
     "qla_target(%d): terminating exchange for aborted cmd=%p "
     "(se_cmd=%p, tag=%llu)", VAR_5->vp_idx, VAR_3, &VAR_3->se_cmd,
     VAR_6->tag);

 FUNC_2(&VAR_3->cmd_lock, VAR_7);
 if (VAR_3->aborted) {
  FUNC_3(&VAR_3->cmd_lock, VAR_7);





  FUNC_0(VAR_2, VAR_5, 0xf016,
      "multiple abort. %p transport_state %x, t_state %x, "
      "se_cmd_flags %x\n", VAR_3, VAR_3->se_cmd.transport_state,
      VAR_3->se_cmd.t_state, VAR_3->se_cmd.se_cmd_flags);
  return VAR_0;
 }
 VAR_3->aborted = 1;
 VAR_3->trc_flags |= VAR_1;
 FUNC_3(&VAR_3->cmd_lock, VAR_7);

 FUNC_1(VAR_3->qpair, VAR_3, &VAR_3->atio, 0, 1);
 return 0;
}
