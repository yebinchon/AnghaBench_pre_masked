
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int online; } ;
struct scsi_qla_host {TYPE_5__ flags; TYPE_4__* hw; } ;
struct qla_tgt_prm {int req_cnt; scalar_t__ pkt; int * sg; struct qla_tgt* tgt; struct qla_tgt_cmd* cmd; } ;
struct TYPE_15__ {scalar_t__ prot_op; } ;
struct qla_tgt_cmd {scalar_t__ reset_count; int aborted; int cmd_sent_to_fw; int ctio_flags; int state; TYPE_6__ se_cmd; scalar_t__ write_data_transferred; TYPE_1__* sess; struct qla_qpair* qpair; struct qla_tgt* tgt; struct scsi_qla_host* vha; } ;
struct qla_tgt {int dummy; } ;
struct qla_qpair {scalar_t__ chip_reset; int qp_lock_ptr; TYPE_9__* req; int (* reqq_start_iocbs ) (struct qla_qpair*) ;int fw_started; } ;
struct TYPE_16__ {int flags; } ;
struct TYPE_17__ {TYPE_7__ status0; } ;
struct ctio7_to_24xx {TYPE_8__ u; } ;
typedef int prm ;
struct TYPE_18__ {int cnt; } ;
struct TYPE_12__ {TYPE_2__* tgt_ops; } ;
struct TYPE_13__ {TYPE_3__ tgt; } ;
struct TYPE_11__ {int (* handle_data ) (struct qla_tgt_cmd*) ;} ;
struct TYPE_10__ {scalar_t__ deleted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qla_tgt_prm*,int ,int) ;
 int VAR_6 ;
 int FUNC_3 (int ,struct qla_qpair*,int,char*,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct scsi_qla_host*) ;
 int FUNC_5 (struct scsi_qla_host*,TYPE_9__*) ;
 int FUNC_6 (struct qla_qpair*,struct qla_tgt_prm*) ;
 int FUNC_7 (struct qla_qpair*,struct qla_tgt_prm*) ;
 int FUNC_8 (struct qla_qpair*,int) ;
 int FUNC_9 (struct qla_tgt_prm*) ;
 scalar_t__ FUNC_10 (struct qla_tgt_prm*) ;
 int FUNC_11 (struct scsi_qla_host*,struct qla_tgt_cmd*) ;
 int FUNC_12 (int ,unsigned long) ;
 int FUNC_13 (int ,unsigned long) ;
 int FUNC_14 (struct qla_tgt_cmd*) ;
 int FUNC_15 (struct qla_qpair*) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 () ;

int FUNC_18(struct qla_tgt_cmd *VAR_7)
{
 struct ctio7_to_24xx *VAR_8;
 struct scsi_qla_host *VAR_9 = VAR_7->vha;
 struct qla_tgt *VAR_10 = VAR_7->tgt;
 struct qla_tgt_prm VAR_11;
 unsigned long VAR_12 = 0;
 int VAR_13 = 0;
 struct qla_qpair *VAR_14 = VAR_7->qpair;

 FUNC_2(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.cmd = VAR_7;
 VAR_11.tgt = VAR_10;
 VAR_11.sg = ((void*)0);
 VAR_11.req_cnt = 1;


 if (FUNC_10(&VAR_11) != 0)
  return -VAR_2;

 if (!VAR_14->fw_started || (VAR_7->reset_count != VAR_14->chip_reset) ||
     (VAR_7->sess && VAR_7->sess->deleted)) {




  VAR_7->aborted = 1;
  VAR_7->write_data_transferred = 0;
  VAR_7->state = VAR_3;
  VAR_9->hw->tgt.tgt_ops->handle_data(VAR_7);
  FUNC_3(VAR_6, VAR_14, 0xe102,
   "RESET-XFR online/active/old-count/new-count = %d/%d/%d/%d.\n",
   VAR_9->flags.online, FUNC_4(VAR_9),
   VAR_7->reset_count, VAR_14->chip_reset);
  return 0;
 }

 FUNC_12(VAR_14->qp_lock_ptr, VAR_12);

 VAR_13 = FUNC_8(VAR_14, VAR_11.req_cnt);
 if (VAR_13 != 0)
  goto out_unlock_free_unmap;
 if (VAR_7->se_cmd.prot_op)
  VAR_13 = FUNC_7(VAR_14, &VAR_11);
 else
  VAR_13 = FUNC_6(VAR_14, &VAR_11);

 if (FUNC_16(VAR_13 != 0)) {
  VAR_14->req->cnt += VAR_11.req_cnt;
  goto out_unlock_free_unmap;
 }

 VAR_8 = (struct ctio7_to_24xx *)VAR_11.pkt;
 VAR_8->u.status0.flags |= FUNC_0(VAR_0 |
     VAR_1);

 if (VAR_7->se_cmd.prot_op == VAR_5)
  FUNC_9(&VAR_11);

 VAR_7->state = VAR_4;
 VAR_7->cmd_sent_to_fw = 1;
 VAR_7->ctio_flags = FUNC_1(VAR_8->u.status0.flags);


 FUNC_17();
 if (VAR_14->reqq_start_iocbs)
  VAR_14->reqq_start_iocbs(VAR_14);
 else
  FUNC_5(VAR_9, VAR_14->req);
 FUNC_13(VAR_14->qp_lock_ptr, VAR_12);

 return VAR_13;

out_unlock_free_unmap:
 FUNC_11(VAR_9, VAR_7);
 FUNC_13(VAR_14->qp_lock_ptr, VAR_12);

 return VAR_13;
}
