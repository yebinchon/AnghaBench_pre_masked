
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
typedef int tmf_pdu_header ;
typedef int task_params ;
struct scsi_lun {int dummy; } ;
struct qedi_endpoint {struct iscsi_tmf_request_hdr* sq; } ;
struct qedi_ctx {int dbg_ctx; int tasks; } ;
struct qedi_conn {int list_lock; int active_cmd_count; int active_cmd_list; scalar_t__ iscsi_conn_id; struct qedi_endpoint* ep; TYPE_1__* cls_conn; struct qedi_ctx* qedi; } ;
struct qedi_cmd {int task_id; int io_cmd_in_list; int io_cmd; } ;
struct iscsi_wqe {int dummy; } ;
struct TYPE_4__ {void* hi; void* lo; } ;
struct iscsi_tmf_request_hdr {int function; size_t conn_icid; int itid; struct iscsi_tmf_request_hdr* sqe; scalar_t__ rx_io_size; scalar_t__ tx_io_size; scalar_t__ cq_rss_number; struct iscsi_tmf_request_hdr* context; void* ref_cmd_sn; int hdr_second_dword; int opcode; void* rtt; TYPE_2__ lun; void* cmd_sn; void* itt; } ;
struct iscsi_tm {int flags; int refcmdsn; int dlength; int opcode; int rtt; int lun; int cmdsn; } ;
struct iscsi_task_params {int function; size_t conn_icid; int itid; struct iscsi_task_params* sqe; scalar_t__ rx_io_size; scalar_t__ tx_io_size; scalar_t__ cq_rss_number; struct iscsi_task_params* context; void* ref_cmd_sn; int hdr_second_dword; int opcode; void* rtt; TYPE_2__ lun; void* cmd_sn; void* itt; } ;
struct iscsi_task {scalar_t__ dd_data; int sc; int itt; scalar_t__ hdr; } ;
struct iscsi_conn {int dummy; } ;
struct e4_iscsi_task_context {int function; size_t conn_icid; int itid; struct e4_iscsi_task_context* sqe; scalar_t__ rx_io_size; scalar_t__ tx_io_size; scalar_t__ cq_rss_number; struct e4_iscsi_task_context* context; void* ref_cmd_sn; int hdr_second_dword; int opcode; void* rtt; TYPE_2__ lun; void* cmd_sn; void* itt; } ;
typedef int s16 ;
struct TYPE_3__ {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iscsi_tmf_request_hdr*,struct iscsi_tmf_request_hdr*) ;
 struct iscsi_task* FUNC_4 (struct iscsi_conn*,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (struct iscsi_tmf_request_hdr*,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct qedi_ctx*) ;
 scalar_t__ FUNC_10 (int *,int) ;
 size_t FUNC_11 (struct qedi_conn*) ;
 int FUNC_12 (struct qedi_conn*) ;
 void* FUNC_13 (int,int ) ;
 int FUNC_14 (struct qedi_ctx*,int,int ,struct qedi_cmd*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct qedi_conn *VAR_5,
          struct iscsi_task *VAR_6)
{
 struct iscsi_tmf_request_hdr VAR_7;
 struct iscsi_task_params VAR_8;
 struct qedi_ctx *VAR_9 = VAR_5->qedi;
 struct e4_iscsi_task_context *VAR_10;
 struct iscsi_conn *VAR_11 = VAR_5->cls_conn->dd_data;
 struct iscsi_task *VAR_12;
 struct iscsi_tm *VAR_13;
 struct qedi_cmd *VAR_14;
 struct qedi_cmd *VAR_15;
 struct qedi_endpoint *VAR_16;
 u32 VAR_17[2];
 s16 VAR_18 = 0;
 u16 VAR_19 = 0;
 int VAR_20 = 0;

 VAR_13 = (struct iscsi_tm *)VAR_6->hdr;
 VAR_14 = (struct qedi_cmd *)VAR_6->dd_data;
 VAR_16 = VAR_5->ep;
 if (!VAR_16)
  return -VAR_0;

 VAR_18 = FUNC_9(VAR_9);
 if (VAR_18 == -1)
  return -VAR_1;

 VAR_10 =
      (struct e4_iscsi_task_context *)FUNC_10(&VAR_9->tasks,
              VAR_18);
 FUNC_7(VAR_10, 0, sizeof(struct e4_iscsi_task_context));

 VAR_14->task_id = VAR_18;

 FUNC_7(&VAR_8, 0, sizeof(VAR_8));
 FUNC_7(&VAR_7, 0, sizeof(VAR_7));


 FUNC_14(VAR_9, VAR_18, VAR_6->itt, VAR_14);
 VAR_7.itt = FUNC_13(VAR_18, FUNC_2(VAR_6->itt));
 VAR_7.cmd_sn = FUNC_1(VAR_13->cmdsn);

 FUNC_6(VAR_17, &VAR_13->lun, sizeof(struct scsi_lun));
 VAR_7.lun.lo = FUNC_1(VAR_17[0]);
 VAR_7.lun.hi = FUNC_1(VAR_17[1]);

 if ((VAR_13->flags & VAR_2) ==
      VAR_4) {
  VAR_12 = FUNC_4(VAR_11, VAR_13->rtt);
  if (!VAR_12 || !VAR_12->sc) {
   FUNC_0(&VAR_9->dbg_ctx,
     "Could not get reference task\n");
   return 0;
  }
  VAR_15 = (struct qedi_cmd *)VAR_12->dd_data;
  VAR_7.rtt =
    FUNC_13(VAR_15->task_id,
          FUNC_2(VAR_13->rtt));
 } else {
  VAR_7.rtt = VAR_3;
 }

 VAR_7.opcode = VAR_13->opcode;
 VAR_7.function = VAR_13->flags;
 VAR_7.hdr_second_dword = FUNC_8(VAR_13->dlength);
 VAR_7.ref_cmd_sn = FUNC_1(VAR_13->refcmdsn);


 VAR_8.context = VAR_10;
 VAR_8.conn_icid = (u16)VAR_5->iscsi_conn_id;
 VAR_8.itid = VAR_18;
 VAR_8.cq_rss_number = 0;
 VAR_8.tx_io_size = 0;
 VAR_8.rx_io_size = 0;

 VAR_19 = FUNC_11(VAR_5);
 VAR_8.sqe = &VAR_16->sq[VAR_19];

 FUNC_7(VAR_8.sqe, 0, sizeof(struct iscsi_wqe));
 VAR_20 = FUNC_3(&VAR_8,
            &VAR_7);
 if (VAR_20)
  return -1;

 FUNC_15(&VAR_5->list_lock);
 FUNC_5(&VAR_14->io_cmd, &VAR_5->active_cmd_list);
 VAR_14->io_cmd_in_list = 1;
 VAR_5->active_cmd_count++;
 FUNC_16(&VAR_5->list_lock);

 FUNC_12(VAR_5);
 return 0;
}
