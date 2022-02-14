
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int itid; } ;
struct TYPE_11__ {scalar_t__ cqe_error_status_bits; } ;
struct TYPE_12__ {TYPE_3__ error_bits; } ;
struct iscsi_data_in_hdr {scalar_t__ status_rsvd; int reserved2; int flags; int residual_count; int reserved1; int exp_cmd_sn; int max_cmd_sn; int opcode; } ;
struct TYPE_10__ {struct iscsi_data_in_hdr data_in; } ;
struct TYPE_13__ {size_t conn_id; TYPE_4__ error_bitmap; TYPE_2__ iscsi_hdr; } ;
union iscsi_cqe {TYPE_8__ cqe_solicited; TYPE_5__ cqe_common; } ;
typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct TYPE_14__ {int ptr; } ;
struct scsi_cmnd {TYPE_7__* request; TYPE_6__ SCp; } ;
struct TYPE_9__ {struct qedi_conn** conn_cid_tbl; } ;
struct qedi_ctx {int dbg_ctx; TYPE_1__ cid_que; } ;
struct qedi_conn {int iscsi_conn_id; int list_lock; int active_cmd_count; } ;
struct qedi_cmd {int io_cmd_in_list; int task_id; int state; int io_cmd; scalar_t__ sense_buffer; struct scsi_cmnd* scsi_cmd; } ;
struct iscsi_task {scalar_t__ hdr; struct qedi_cmd* dd_data; } ;
struct iscsi_session {int back_lock; int age; } ;
struct iscsi_scsi_rsp {scalar_t__ cmd_status; int flags; void* residual_count; int itt; int response; void* exp_cmdsn; void* max_cmdsn; int opcode; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {scalar_t__ data; struct iscsi_session* session; } ;
struct TYPE_15__ {int q; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,char*,int ,int ,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,char*,...) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct iscsi_conn*,struct iscsi_hdr*,scalar_t__,int) ;
 int FUNC_4 (int ,int ) ;
 void* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (struct qedi_ctx*,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (struct qedi_cmd*) ;
 int FUNC_11 (struct qedi_ctx*,struct iscsi_task*,int ,int ) ;
 int FUNC_12 (struct scsi_cmnd*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static void FUNC_18(struct qedi_ctx *VAR_10,
     union iscsi_cqe *VAR_11,
     struct iscsi_task *VAR_12,
     struct iscsi_conn *VAR_13)
{
 struct scsi_cmnd *VAR_14;
 struct qedi_cmd *VAR_15 = VAR_12->dd_data;
 struct iscsi_session *VAR_16 = VAR_13->session;
 struct iscsi_scsi_rsp *VAR_17;
 struct iscsi_data_in_hdr *VAR_18;
 int VAR_19 = 0;
 struct qedi_conn *VAR_20;
 u32 VAR_21;
 u8 VAR_22 = 0;

 VAR_21 = VAR_11->cqe_common.conn_id;
 VAR_20 = VAR_10->cid_que.conn_cid_tbl[VAR_21];

 VAR_18 = &VAR_11->cqe_common.iscsi_hdr.data_in;
 VAR_22 =
  VAR_11->cqe_common.error_bitmap.error_bits.cqe_error_status_bits;

 FUNC_14(&VAR_16->back_lock);

 VAR_14 = VAR_15->scsi_cmd;

 if (!VAR_14) {
  FUNC_2(&VAR_10->dbg_ctx, "sc_cmd is NULL!\n");
  goto error;
 }

 if (!VAR_14->SCp.ptr) {
  FUNC_2(&VAR_10->dbg_ctx,
     "SCp.ptr is NULL, returned in another context.\n");
  goto error;
 }

 if (!VAR_14->request) {
  FUNC_2(&VAR_10->dbg_ctx,
     "sc_cmd->request is NULL, sc_cmd=%p.\n",
     VAR_14);
  goto error;
 }

 if (!VAR_14->request->q) {
  FUNC_2(&VAR_10->dbg_ctx,
     "request->q is NULL so request is not valid, sc_cmd=%p.\n",
     VAR_14);
  goto error;
 }

 FUNC_10(VAR_15);

 VAR_17 = (struct iscsi_scsi_rsp *)VAR_12->hdr;
 VAR_17->opcode = VAR_18->opcode;
 VAR_17->max_cmdsn = FUNC_5(VAR_18->max_cmd_sn);
 VAR_17->exp_cmdsn = FUNC_5(VAR_18->exp_cmd_sn);
 VAR_17->itt = FUNC_4(VAR_11->cqe_solicited.itid, VAR_13->session->age);
 VAR_17->response = VAR_18->reserved1;
 VAR_17->cmd_status = VAR_18->status_rsvd;
 VAR_17->flags = VAR_18->flags;
 VAR_17->residual_count = FUNC_5(VAR_18->residual_count);

 if (VAR_17->cmd_status == VAR_8) {
  VAR_19 = VAR_18->reserved2 &
     VAR_1;
  FUNC_8((char *)VAR_13->data, (char *)VAR_15->sense_buffer, VAR_19);
 }




 if (FUNC_17(VAR_22 &&
       FUNC_0(VAR_22, VAR_0))) {
  FUNC_1(&VAR_10->dbg_ctx, VAR_5,
     "Under flow itt=0x%x proto flags=0x%x tid=0x%x cid 0x%x fw resid 0x%x sc dlen 0x%x\n",
     VAR_17->itt, VAR_18->flags, VAR_15->task_id,
     VAR_20->iscsi_conn_id, VAR_17->residual_count,
     FUNC_12(VAR_14));
  VAR_17->residual_count = FUNC_5(FUNC_12(VAR_14));
  VAR_17->flags |= VAR_3;
  VAR_17->flags &= (~VAR_2);
 }

 FUNC_13(&VAR_20->list_lock);
 if (FUNC_6(VAR_15->io_cmd_in_list)) {
  VAR_15->io_cmd_in_list = 0;
  FUNC_7(&VAR_15->io_cmd);
  VAR_20->active_cmd_count--;
 }
 FUNC_15(&VAR_20->list_lock);

 FUNC_1(&VAR_10->dbg_ctx, VAR_6,
    "Freeing tid=0x%x for cid=0x%x\n",
    VAR_15->task_id, VAR_20->iscsi_conn_id);
 VAR_15->state = VAR_7;
 if (VAR_9)
  FUNC_11(VAR_10, VAR_12, VAR_15->task_id, VAR_4);

 FUNC_9(VAR_10, VAR_15->task_id);
 FUNC_3(VAR_13, (struct iscsi_hdr *)VAR_17,
        VAR_13->data, VAR_19);
error:
 FUNC_16(&VAR_16->back_lock);
}
