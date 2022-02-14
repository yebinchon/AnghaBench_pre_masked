
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
typedef size_t u16 ;
typedef int tx_sgl_task_params ;
typedef int task_params ;
struct TYPE_7__ {void* hi; void* lo; } ;
struct TYPE_6__ {void* hi; void* lo; } ;
struct TYPE_10__ {void* hi; void* lo; } ;
struct scsi_sgl_task_params {int num_sges; int small_mid_sge; int initial_r2t; int immediate_data; size_t conn_icid; int itid; size_t cq_rss_number; scalar_t__ tx_io_size; scalar_t__ rx_io_size; struct scsi_sgl_task_params* sqe; struct scsi_sgl_task_params* context; TYPE_2__ sense_data_buffer_phys_addr; int max_burst_length; int max_send_pdu_length; int first_burst_length; void* total_buffer_size; TYPE_1__ sgl_phys_addr; int sgl; scalar_t__ cdb; int hdr_first_byte; void* cmd_sn; int hdr_second_dword; int expected_transfer_length; int itt; TYPE_5__ lun; int flags_attr; } ;
struct scsi_lun {int dummy; } ;
struct scsi_initiator_cmd_params {int num_sges; int small_mid_sge; int initial_r2t; int immediate_data; size_t conn_icid; int itid; size_t cq_rss_number; scalar_t__ tx_io_size; scalar_t__ rx_io_size; struct scsi_initiator_cmd_params* sqe; struct scsi_initiator_cmd_params* context; TYPE_2__ sense_data_buffer_phys_addr; int max_burst_length; int max_send_pdu_length; int first_burst_length; void* total_buffer_size; TYPE_1__ sgl_phys_addr; int sgl; scalar_t__ cdb; int hdr_first_byte; void* cmd_sn; int hdr_second_dword; int expected_transfer_length; int itt; TYPE_5__ lun; int flags_attr; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; TYPE_4__* device; } ;
struct qedi_endpoint {struct scsi_sgl_task_params* sq; } ;
struct qedi_ctx {size_t num_queues; int dbg_ctx; int tasks; } ;
struct qedi_conn {int list_lock; int active_cmd_count; int active_cmd_list; scalar_t__ iscsi_conn_id; struct iscsi_cls_conn* cls_conn; struct qedi_endpoint* ep; } ;
struct TYPE_8__ {int sge_valid; scalar_t__ sge_tbl_dma; int sge_tbl; } ;
struct qedi_cmd {int task_id; int io_cmd_in_list; int io_cmd; TYPE_3__ io_tbl; scalar_t__ use_slowpath; scalar_t__ sense_buffer_dma; } ;
struct iscsi_wqe {int dummy; } ;
struct iscsi_task_params {int num_sges; int small_mid_sge; int initial_r2t; int immediate_data; size_t conn_icid; int itid; size_t cq_rss_number; scalar_t__ tx_io_size; scalar_t__ rx_io_size; struct iscsi_task_params* sqe; struct iscsi_task_params* context; TYPE_2__ sense_data_buffer_phys_addr; int max_burst_length; int max_send_pdu_length; int first_burst_length; void* total_buffer_size; TYPE_1__ sgl_phys_addr; int sgl; scalar_t__ cdb; int hdr_first_byte; void* cmd_sn; int hdr_second_dword; int expected_transfer_length; int itt; TYPE_5__ lun; int flags_attr; } ;
struct iscsi_task {int itt; scalar_t__ hdr; struct scsi_cmnd* sc; struct qedi_cmd* dd_data; struct iscsi_conn* conn; } ;
struct iscsi_session {scalar_t__ imm_data_en; scalar_t__ initial_r2t_en; int max_burst; int first_burst; int cls_session; } ;
struct iscsi_scsi_req {scalar_t__* cdb; void* cmdsn; int opcode; int dlength; int data_length; } ;
struct iscsi_conn_params {int num_sges; int small_mid_sge; int initial_r2t; int immediate_data; size_t conn_icid; int itid; size_t cq_rss_number; scalar_t__ tx_io_size; scalar_t__ rx_io_size; struct iscsi_conn_params* sqe; struct iscsi_conn_params* context; TYPE_2__ sense_data_buffer_phys_addr; int max_burst_length; int max_send_pdu_length; int first_burst_length; void* total_buffer_size; TYPE_1__ sgl_phys_addr; int sgl; scalar_t__ cdb; int hdr_first_byte; void* cmd_sn; int hdr_second_dword; int expected_transfer_length; int itt; TYPE_5__ lun; int flags_attr; } ;
struct iscsi_conn {struct iscsi_session* session; int max_xmit_dlength; struct qedi_conn* dd_data; } ;
struct iscsi_cmd_hdr {int num_sges; int small_mid_sge; int initial_r2t; int immediate_data; size_t conn_icid; int itid; size_t cq_rss_number; scalar_t__ tx_io_size; scalar_t__ rx_io_size; struct iscsi_cmd_hdr* sqe; struct iscsi_cmd_hdr* context; TYPE_2__ sense_data_buffer_phys_addr; int max_burst_length; int max_send_pdu_length; int first_burst_length; void* total_buffer_size; TYPE_1__ sgl_phys_addr; int sgl; scalar_t__ cdb; int hdr_first_byte; void* cmd_sn; int hdr_second_dword; int expected_transfer_length; int itt; TYPE_5__ lun; int flags_attr; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct e4_iscsi_task_context {int num_sges; int small_mid_sge; int initial_r2t; int immediate_data; size_t conn_icid; int itid; size_t cq_rss_number; scalar_t__ tx_io_size; scalar_t__ rx_io_size; struct e4_iscsi_task_context* sqe; struct e4_iscsi_task_context* context; TYPE_2__ sense_data_buffer_phys_addr; int max_burst_length; int max_send_pdu_length; int first_burst_length; void* total_buffer_size; TYPE_1__ sgl_phys_addr; int sgl; scalar_t__ cdb; int hdr_first_byte; void* cmd_sn; int hdr_second_dword; int expected_transfer_length; int itt; TYPE_5__ lun; int flags_attr; } ;
struct Scsi_Host {int dummy; } ;
typedef int s16 ;
typedef int rx_sgl_task_params ;
typedef enum iscsi_task_type { ____Placeholder_iscsi_task_type } iscsi_task_type ;
typedef int conn_params ;
typedef int cmd_pdu_header ;
typedef int cmd_params ;
struct TYPE_9__ {int lun; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,char*,char*,char*,size_t,void*,void*,void*) ;
 int VAR_9 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_10 ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct scsi_sgl_task_params*,struct scsi_sgl_task_params*,struct scsi_sgl_task_params*,struct scsi_sgl_task_params*,struct scsi_sgl_task_params*,struct scsi_sgl_task_params*,int *) ;
 int FUNC_6 (int ,struct scsi_lun*) ;
 struct qedi_ctx* FUNC_7 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_8 (int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct scsi_sgl_task_params*,int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct scsi_cmnd*,void**) ;
 int FUNC_13 (struct qedi_ctx*) ;
 scalar_t__ FUNC_14 (int *,int) ;
 size_t FUNC_15 (struct qedi_conn*) ;
 int FUNC_16 (struct qedi_cmd*) ;
 int FUNC_17 (struct qedi_conn*) ;
 int FUNC_18 (int,int ) ;
 int FUNC_19 (struct qedi_ctx*,int,int ,struct qedi_cmd*) ;
 void* FUNC_20 (struct scsi_cmnd*) ;
 size_t FUNC_21 () ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;

int FUNC_24(struct iscsi_task *VAR_11)
{
 struct iscsi_conn *VAR_12 = VAR_11->conn;
 struct iscsi_session *VAR_13 = VAR_12->session;
 struct Scsi_Host *VAR_14 = FUNC_8(VAR_13->cls_session);
 struct qedi_ctx *VAR_15 = FUNC_7(VAR_14);
 struct qedi_conn *VAR_16 = VAR_12->dd_data;
 struct qedi_cmd *VAR_17 = VAR_11->dd_data;
 struct scsi_cmnd *VAR_18 = VAR_11->sc;
 struct iscsi_cmd_hdr VAR_19;
 struct scsi_sgl_task_params VAR_20;
 struct scsi_sgl_task_params VAR_21;
 struct scsi_sgl_task_params *VAR_22 = ((void*)0);
 struct scsi_sgl_task_params *VAR_23 = ((void*)0);
 struct iscsi_task_params VAR_24;
 struct iscsi_conn_params VAR_25;
 struct scsi_initiator_cmd_params VAR_26;
 struct e4_iscsi_task_context *VAR_27;
 struct iscsi_cls_conn *VAR_28;
 struct iscsi_scsi_req *VAR_29 = (struct iscsi_scsi_req *)VAR_11->hdr;
 enum iscsi_task_type VAR_30 = VAR_8;
 struct qedi_endpoint *VAR_31;
 u32 VAR_32[2];
 s16 VAR_33 = 0;
 u16 VAR_34 = 0;
 u16 VAR_35;
 int VAR_36 = 0;

 VAR_31 = VAR_16->ep;
 VAR_28 = VAR_16->cls_conn;
 VAR_12 = VAR_28->dd_data;

 FUNC_16(VAR_17);
 FUNC_6(VAR_18->device->lun, (struct scsi_lun *)VAR_32);

 VAR_33 = FUNC_13(VAR_15);
 if (VAR_33 == -1)
  return -VAR_1;

 VAR_27 =
      (struct e4_iscsi_task_context *)FUNC_14(&VAR_15->tasks,
              VAR_33);
 FUNC_10(VAR_27, 0, sizeof(struct e4_iscsi_task_context));

 VAR_17->task_id = VAR_33;

 FUNC_10(&VAR_24, 0, sizeof(VAR_24));
 FUNC_10(&VAR_19, 0, sizeof(VAR_19));
 FUNC_10(&VAR_20, 0, sizeof(VAR_20));
 FUNC_10(&VAR_21, 0, sizeof(VAR_21));
 FUNC_10(&VAR_25, 0, sizeof(VAR_25));
 FUNC_10(&VAR_26, 0, sizeof(VAR_26));

 VAR_35 = FUNC_21() % VAR_15->num_queues;

 FUNC_1(VAR_19.flags_attr, VAR_3,
    VAR_2);
 if (VAR_29->cdb[0] != VAR_10) {
  if (VAR_18->sc_data_direction == VAR_0) {
   FUNC_1(VAR_19.flags_attr,
      VAR_5, 1);
   VAR_30 = VAR_7;
  } else {
   FUNC_1(VAR_19.flags_attr,
      VAR_4, 1);
   VAR_30 = VAR_6;
  }
 }

 VAR_19.lun.lo = FUNC_2(VAR_32[0]);
 VAR_19.lun.hi = FUNC_2(VAR_32[1]);

 FUNC_19(VAR_15, VAR_33, VAR_11->itt, VAR_17);
 VAR_19.itt = FUNC_18(VAR_33, FUNC_4(VAR_11->itt));
 VAR_19.expected_transfer_length = FUNC_3(VAR_29->data_length);
 VAR_19.hdr_second_dword = FUNC_11(VAR_29->dlength);
 VAR_19.cmd_sn = FUNC_2(VAR_29->cmdsn);
 VAR_19.hdr_first_byte = VAR_29->opcode;
 FUNC_12(VAR_18, (u32 *)VAR_19.cdb);


 if (VAR_30 == VAR_7) {
  VAR_20.sgl = VAR_17->io_tbl.sge_tbl;
  VAR_20.sgl_phys_addr.lo =
       (u32)(VAR_17->io_tbl.sge_tbl_dma);
  VAR_20.sgl_phys_addr.hi =
          (u32)((u64)VAR_17->io_tbl.sge_tbl_dma >> 32);
  VAR_20.total_buffer_size = FUNC_20(VAR_18);
  VAR_20.num_sges = VAR_17->io_tbl.sge_valid;
  if (VAR_17->use_slowpath)
   VAR_20.small_mid_sge = 1;
 } else if (VAR_30 == VAR_6) {
  VAR_21.sgl = VAR_17->io_tbl.sge_tbl;
  VAR_21.sgl_phys_addr.lo =
       (u32)(VAR_17->io_tbl.sge_tbl_dma);
  VAR_21.sgl_phys_addr.hi =
          (u32)((u64)VAR_17->io_tbl.sge_tbl_dma >> 32);
  VAR_21.total_buffer_size = FUNC_20(VAR_18);
  VAR_21.num_sges = VAR_17->io_tbl.sge_valid;
 }


 VAR_25.first_burst_length = VAR_12->session->first_burst;
 VAR_25.max_send_pdu_length = VAR_12->max_xmit_dlength;
 VAR_25.max_burst_length = VAR_12->session->max_burst;
 if (VAR_12->session->initial_r2t_en)
  VAR_25.initial_r2t = 1;
 if (VAR_12->session->imm_data_en)
  VAR_25.immediate_data = 1;


 VAR_26.sense_data_buffer_phys_addr.lo = (u32)VAR_17->sense_buffer_dma;
 VAR_26.sense_data_buffer_phys_addr.hi =
     (u32)((u64)VAR_17->sense_buffer_dma >> 32);

 VAR_24.context = VAR_27;
 VAR_24.conn_icid = (u16)VAR_16->iscsi_conn_id;
 VAR_24.itid = VAR_33;
 VAR_24.cq_rss_number = VAR_35;
 if (VAR_30 == VAR_7)
  VAR_24.tx_io_size = FUNC_20(VAR_18);
 else if (VAR_30 == VAR_6)
  VAR_24.rx_io_size = FUNC_20(VAR_18);

 VAR_34 = FUNC_15(VAR_16);
 VAR_24.sqe = &VAR_31->sq[VAR_34];

 FUNC_0(&VAR_15->dbg_ctx, VAR_9,
    "%s: %s-SGL: sg_len=0x%x num_sges=0x%x first-sge-lo=0x%x first-sge-hi=0x%x\n",
    (VAR_30 == VAR_7) ?
    "Write " : "Read ", (VAR_17->io_tbl.sge_valid == 1) ?
    "Single" : (VAR_17->use_slowpath ? "SLOW" : "FAST"),
    (u16)VAR_17->io_tbl.sge_valid, FUNC_20(VAR_18),
    (u32)(VAR_17->io_tbl.sge_tbl_dma),
    (u32)((u64)VAR_17->io_tbl.sge_tbl_dma >> 32));

 FUNC_10(VAR_24.sqe, 0, sizeof(struct iscsi_wqe));

 if (VAR_24.tx_io_size != 0)
  VAR_23 = &VAR_20;
 if (VAR_24.rx_io_size != 0)
  VAR_22 = &VAR_21;

 VAR_36 = FUNC_5(&VAR_24, &VAR_25,
         &VAR_26, &VAR_19,
         VAR_23, VAR_22,
         ((void*)0));
 if (VAR_36)
  return -1;

 FUNC_22(&VAR_16->list_lock);
 FUNC_9(&VAR_17->io_cmd, &VAR_16->active_cmd_list);
 VAR_17->io_cmd_in_list = 1;
 VAR_16->active_cmd_count++;
 FUNC_23(&VAR_16->list_lock);

 FUNC_17(VAR_16);
 return 0;
}
