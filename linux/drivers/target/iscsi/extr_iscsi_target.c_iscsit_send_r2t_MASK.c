
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct scsi_lun {int dummy; } ;
struct iscsi_r2t_rsp {void* statsn; void* data_length; void* data_offset; void* r2tsn; void* max_cmdsn; void* exp_cmdsn; void* ttt; int itt; int lun; int flags; int opcode; } ;
struct iscsi_r2t {int sent_r2t; int xfer_len; int offset; int r2t_sn; int targ_xfer_tag; int recovery_r2t; } ;
struct iscsi_conn {TYPE_2__* conn_transport; int cid; TYPE_3__* sess; int stat_sn; } ;
struct TYPE_4__ {int orig_fe_lun; } ;
struct iscsi_cmd {int dataout_timeout_lock; int r2t_lock; int init_task_tag; TYPE_1__ se_cmd; scalar_t__ pdu; } ;
struct TYPE_6__ {int max_cmd_sn; int exp_cmd_sn; } ;
struct TYPE_5__ {int (* iscsit_xmit_pdu ) (struct iscsi_conn*,struct iscsi_cmd*,int *,int *,int ) ;int (* iscsit_get_r2t_ttt ) (struct iscsi_conn*,struct iscsi_cmd*,struct iscsi_r2t*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct scsi_lun*) ;
 struct iscsi_r2t* FUNC_3 (struct iscsi_cmd*) ;
 int FUNC_4 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_5 (struct iscsi_r2t_rsp*,int ,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (char*,char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct iscsi_conn*,struct iscsi_cmd*,struct iscsi_r2t*) ;
 int FUNC_12 (struct iscsi_conn*,struct iscsi_cmd*,int *,int *,int ) ;

__attribute__((used)) static int FUNC_13(
 struct iscsi_cmd *VAR_3,
 struct iscsi_conn *VAR_4)
{
 struct iscsi_r2t *VAR_5;
 struct iscsi_r2t_rsp *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(VAR_3);
 if (!VAR_5)
  return -1;

 VAR_6 = (struct iscsi_r2t_rsp *) VAR_3->pdu;
 FUNC_5(VAR_6, 0, VAR_1);
 VAR_6->opcode = VAR_2;
 VAR_6->flags |= VAR_0;
 FUNC_2(VAR_3->se_cmd.orig_fe_lun,
   (struct scsi_lun *)&VAR_6->lun);
 VAR_6->itt = VAR_3->init_task_tag;
 if (VAR_4->conn_transport->iscsit_get_r2t_ttt)
  VAR_4->conn_transport->iscsit_get_r2t_ttt(VAR_4, VAR_3, VAR_5);
 else
  VAR_5->targ_xfer_tag = FUNC_8(VAR_4->sess);
 VAR_6->ttt = FUNC_1(VAR_5->targ_xfer_tag);
 VAR_6->statsn = FUNC_1(VAR_4->stat_sn);
 VAR_6->exp_cmdsn = FUNC_1(VAR_4->sess->exp_cmd_sn);
 VAR_6->max_cmdsn = FUNC_1((u32) FUNC_0(&VAR_4->sess->max_cmd_sn));
 VAR_6->r2tsn = FUNC_1(VAR_5->r2t_sn);
 VAR_6->data_offset = FUNC_1(VAR_5->offset);
 VAR_6->data_length = FUNC_1(VAR_5->xfer_len);

 FUNC_7("Built %sR2T, ITT: 0x%08x, TTT: 0x%08x, StatSN:"
  " 0x%08x, R2TSN: 0x%08x, Offset: %u, DDTL: %u, CID: %hu\n",
  (!VAR_5->recovery_r2t) ? "" : "Recovery ", VAR_3->init_task_tag,
  VAR_5->targ_xfer_tag, FUNC_6(VAR_6->statsn), VAR_5->r2t_sn,
   VAR_5->offset, VAR_5->xfer_len, VAR_4->cid);

 FUNC_9(&VAR_3->r2t_lock);
 VAR_5->sent_r2t = 1;
 FUNC_10(&VAR_3->r2t_lock);

 VAR_7 = VAR_4->conn_transport->iscsit_xmit_pdu(VAR_4, VAR_3, ((void*)0), ((void*)0), 0);
 if (VAR_7 < 0) {
  return VAR_7;
 }

 FUNC_9(&VAR_3->dataout_timeout_lock);
 FUNC_4(VAR_3, VAR_4);
 FUNC_10(&VAR_3->dataout_timeout_lock);

 return 0;
}
