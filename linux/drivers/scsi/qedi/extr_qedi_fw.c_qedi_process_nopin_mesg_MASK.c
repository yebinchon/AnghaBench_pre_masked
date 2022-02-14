
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int itid; } ;
struct iscsi_nop_in_hdr {int hdr_second_dword; int ttt; int stat_sn; int exp_cmd_sn; int max_cmd_sn; int opcode; } ;
struct TYPE_7__ {struct iscsi_nop_in_hdr nop_in; } ;
struct TYPE_9__ {scalar_t__ cqe_type; TYPE_2__ iscsi_hdr; } ;
union iscsi_cqe {TYPE_5__ cqe_solicited; int cqe_unsolicited; TYPE_4__ cqe_common; } ;
typedef int u32 ;
typedef int u16 ;
struct scsi_lun {int dummy; } ;
struct qedi_ctx {int dbg_ctx; int hba_lock; } ;
struct TYPE_8__ {int resp_hdr; } ;
struct qedi_conn {int list_lock; int active_cmd_count; int iscsi_conn_id; TYPE_3__ gen_pdu; TYPE_1__* cls_conn; } ;
struct qedi_cmd {int io_cmd_in_list; int task_id; int io_cmd; int state; } ;
struct iscsi_task {struct qedi_cmd* dd_data; } ;
struct iscsi_session {int back_lock; int age; } ;
struct iscsi_nopin {int lun; int itt; int flags; void* ttt; void* statsn; void* exp_cmdsn; void* max_cmdsn; int opcode; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {struct iscsi_session* session; } ;
struct TYPE_6__ {struct iscsi_conn* dd_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct iscsi_conn*,struct iscsi_hdr*,char*,int) ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int*,int) ;
 int FUNC_7 (struct iscsi_nopin*,int ,int) ;
 int FUNC_8 (struct qedi_ctx*,int ) ;
 int FUNC_9 (struct qedi_ctx*,int *,int,int,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_16(struct qedi_ctx *VAR_7,
       union iscsi_cqe *VAR_8,
       struct iscsi_task *VAR_9,
       struct qedi_conn *VAR_10, u16 VAR_11)
{
 struct iscsi_conn *VAR_12 = VAR_10->cls_conn->dd_data;
 struct iscsi_session *VAR_13 = VAR_12->session;
 struct iscsi_nop_in_hdr *VAR_14;
 struct iscsi_nopin *VAR_15;
 struct qedi_cmd *VAR_16;
 int VAR_17 = 0;
 u32 VAR_18[2];
 u32 VAR_19, VAR_20;
 char VAR_21[VAR_3];
 unsigned long VAR_22;

 FUNC_11(&VAR_13->back_lock);
 VAR_14 = &VAR_8->cqe_common.iscsi_hdr.nop_in;

 VAR_19 = VAR_14->hdr_second_dword &
    VAR_2;
 VAR_20 = VAR_19 / VAR_3;

 VAR_15 = (struct iscsi_nopin *)&VAR_10->gen_pdu.resp_hdr;
 FUNC_7(VAR_15, 0, sizeof(struct iscsi_hdr));
 VAR_15->opcode = VAR_14->opcode;
 VAR_15->max_cmdsn = FUNC_3(VAR_14->max_cmd_sn);
 VAR_15->exp_cmdsn = FUNC_3(VAR_14->exp_cmd_sn);
 VAR_15->statsn = FUNC_3(VAR_14->stat_sn);
 VAR_15->ttt = FUNC_3(VAR_14->ttt);

 if (VAR_8->cqe_common.cqe_type == VAR_0) {
  FUNC_12(&VAR_7->hba_lock, VAR_22);
  FUNC_9(VAR_7, &VAR_8->cqe_unsolicited,
       VAR_19, VAR_20, VAR_21);
  VAR_15->itt = VAR_5;
  VAR_17 = 1;
  FUNC_15(&VAR_7->hba_lock, VAR_22);
  goto done;
 }


 if (VAR_9) {
  VAR_16 = VAR_9->dd_data;
  VAR_15->flags = VAR_1;
  VAR_15->itt = FUNC_2(VAR_8->cqe_solicited.itid,
         VAR_12->session->age);
  VAR_18[0] = 0xffffffff;
  VAR_18[1] = 0xffffffff;
  FUNC_6(&VAR_15->lun, VAR_18, sizeof(struct scsi_lun));
  FUNC_0(&VAR_7->dbg_ctx, VAR_4,
     "Freeing tid=0x%x for cid=0x%x\n",
     VAR_16->task_id, VAR_10->iscsi_conn_id);
  VAR_16->state = VAR_6;
  FUNC_10(&VAR_10->list_lock);
  if (FUNC_4(VAR_16->io_cmd_in_list)) {
   VAR_16->io_cmd_in_list = 0;
   FUNC_5(&VAR_16->io_cmd);
   VAR_10->active_cmd_count--;
  }

  FUNC_13(&VAR_10->list_lock);
  FUNC_8(VAR_7, VAR_16->task_id);
 }

done:
 FUNC_1(VAR_12, (struct iscsi_hdr *)VAR_15, VAR_21, VAR_19);

 FUNC_14(&VAR_13->back_lock);
 return VAR_17;
}
