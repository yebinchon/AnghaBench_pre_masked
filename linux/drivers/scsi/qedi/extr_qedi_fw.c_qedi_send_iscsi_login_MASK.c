
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
typedef size_t u16 ;
typedef int tx_sgl_task_params ;
typedef int task_params ;
struct TYPE_3__ {void* hi; void* lo; } ;
struct scsi_sgl_task_params {int num_sges; size_t conn_icid; int itid; struct scsi_sgl_task_params* sqe; void* rx_io_size; void* tx_io_size; scalar_t__ cq_rss_number; struct scsi_sgl_task_params* context; void* total_buffer_size; TYPE_1__ sgl_phys_addr; struct scsi_sge* sgl; void* exp_stat_sn; void* cmd_sn; scalar_t__ cid; int itt; void* hdr_second_dword; int tsih; int isid_d; int isid_tabc; int flags_attr; int version_max; int version_min; int opcode; } ;
struct scsi_sge {void* sge_len; } ;
struct qedi_endpoint {struct scsi_sgl_task_params* sq; } ;
struct qedi_ctx {int tasks; } ;
struct TYPE_4__ {scalar_t__ resp_dma_addr; scalar_t__ resp_bd_tbl; scalar_t__ req_dma_addr; scalar_t__ req_bd_tbl; } ;
struct qedi_conn {int list_lock; int active_cmd_count; int active_cmd_list; scalar_t__ iscsi_conn_id; TYPE_2__ gen_pdu; struct qedi_endpoint* ep; struct qedi_ctx* qedi; } ;
struct qedi_cmd {int task_id; int io_cmd_in_list; int io_cmd; } ;
struct iscsi_wqe {int dummy; } ;
struct iscsi_task_params {int num_sges; size_t conn_icid; int itid; struct iscsi_task_params* sqe; void* rx_io_size; void* tx_io_size; scalar_t__ cq_rss_number; struct iscsi_task_params* context; void* total_buffer_size; TYPE_1__ sgl_phys_addr; struct scsi_sge* sgl; void* exp_stat_sn; void* cmd_sn; scalar_t__ cid; int itt; void* hdr_second_dword; int tsih; int isid_d; int isid_tabc; int flags_attr; int version_max; int version_min; int opcode; } ;
struct iscsi_task {int itt; scalar_t__ hdr; scalar_t__ dd_data; } ;
struct iscsi_login_req_hdr {int num_sges; size_t conn_icid; int itid; struct iscsi_login_req_hdr* sqe; void* rx_io_size; void* tx_io_size; scalar_t__ cq_rss_number; struct iscsi_login_req_hdr* context; void* total_buffer_size; TYPE_1__ sgl_phys_addr; struct scsi_sge* sgl; void* exp_stat_sn; void* cmd_sn; scalar_t__ cid; int itt; void* hdr_second_dword; int tsih; int isid_d; int isid_tabc; int flags_attr; int version_max; int version_min; int opcode; } ;
struct iscsi_login_req {int dlength; int exp_statsn; int cmdsn; int tsih; int * isid; int flags; int max_version; int min_version; int opcode; } ;
struct e4_iscsi_task_context {int num_sges; size_t conn_icid; int itid; struct e4_iscsi_task_context* sqe; void* rx_io_size; void* tx_io_size; scalar_t__ cq_rss_number; struct e4_iscsi_task_context* context; void* total_buffer_size; TYPE_1__ sgl_phys_addr; struct scsi_sge* sgl; void* exp_stat_sn; void* cmd_sn; scalar_t__ cid; int itt; void* hdr_second_dword; int tsih; int isid_d; int isid_tabc; int flags_attr; int version_max; int version_min; int opcode; } ;
typedef int s16 ;
typedef int rx_sgl_task_params ;
typedef int login_req_pdu_header ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_sgl_task_params*,struct scsi_sgl_task_params*,struct scsi_sgl_task_params*,struct scsi_sgl_task_params*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct scsi_sgl_task_params*,int ,int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct qedi_ctx*) ;
 scalar_t__ FUNC_7 (int *,int) ;
 size_t FUNC_8 (struct qedi_conn*) ;
 int FUNC_9 (struct qedi_conn*) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (struct qedi_ctx*,int,int ,struct qedi_cmd*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (size_t*) ;
 int FUNC_15 (void**) ;

int FUNC_16(struct qedi_conn *VAR_1,
     struct iscsi_task *VAR_2)
{
 struct iscsi_login_req_hdr VAR_3;
 struct scsi_sgl_task_params VAR_4;
 struct scsi_sgl_task_params VAR_5;
 struct iscsi_task_params VAR_6;
 struct e4_iscsi_task_context *VAR_7;
 struct qedi_ctx *VAR_8 = VAR_1->qedi;
 struct iscsi_login_req *VAR_9;
 struct scsi_sge *VAR_10 = ((void*)0);
 struct qedi_cmd *VAR_11;
 struct qedi_endpoint *VAR_12;
 s16 VAR_13 = 0;
 u16 VAR_14 = 0;
 int VAR_15 = 0;

 VAR_10 = (struct scsi_sge *)VAR_1->gen_pdu.resp_bd_tbl;
 VAR_11 = (struct qedi_cmd *)VAR_2->dd_data;
 VAR_12 = VAR_1->ep;
 VAR_9 = (struct iscsi_login_req *)VAR_2->hdr;

 VAR_13 = FUNC_6(VAR_8);
 if (VAR_13 == -1)
  return -VAR_0;

 VAR_7 =
      (struct e4_iscsi_task_context *)FUNC_7(&VAR_8->tasks,
              VAR_13);
 FUNC_4(VAR_7, 0, sizeof(struct e4_iscsi_task_context));

 VAR_11->task_id = VAR_13;

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 FUNC_4(&VAR_3, 0, sizeof(VAR_3));
 FUNC_4(&VAR_4, 0, sizeof(VAR_4));
 FUNC_4(&VAR_5, 0, sizeof(VAR_5));

 VAR_3.opcode = VAR_9->opcode;
 VAR_3.version_min = VAR_9->min_version;
 VAR_3.version_max = VAR_9->max_version;
 VAR_3.flags_attr = VAR_9->flags;
 VAR_3.isid_tabc = FUNC_15((u32 *)VAR_9->isid);
 VAR_3.isid_d = FUNC_14((u16 *)&VAR_9->isid[4]);

 VAR_3.tsih = VAR_9->tsih;
 VAR_3.hdr_second_dword = FUNC_5(VAR_9->dlength);

 FUNC_11(VAR_8, VAR_13, VAR_2->itt, VAR_11);
 VAR_3.itt = FUNC_10(VAR_13, FUNC_1(VAR_2->itt));
 VAR_3.cid = VAR_1->iscsi_conn_id;
 VAR_3.cmd_sn = FUNC_0(VAR_9->cmdsn);
 VAR_3.exp_stat_sn = FUNC_0(VAR_9->exp_statsn);
 VAR_3.exp_stat_sn = 0;


 VAR_4.sgl =
          (struct scsi_sge *)VAR_1->gen_pdu.req_bd_tbl;
 VAR_4.sgl_phys_addr.lo =
      (u32)(VAR_1->gen_pdu.req_dma_addr);
 VAR_4.sgl_phys_addr.hi =
         (u32)((u64)VAR_1->gen_pdu.req_dma_addr >> 32);
 VAR_4.total_buffer_size = FUNC_5(VAR_9->dlength);
 VAR_4.num_sges = 1;

 VAR_5.sgl =
         (struct scsi_sge *)VAR_1->gen_pdu.resp_bd_tbl;
 VAR_5.sgl_phys_addr.lo =
     (u32)(VAR_1->gen_pdu.resp_dma_addr);
 VAR_5.sgl_phys_addr.hi =
        (u32)((u64)VAR_1->gen_pdu.resp_dma_addr >> 32);
 VAR_5.total_buffer_size = VAR_10->sge_len;
 VAR_5.num_sges = 1;


 VAR_6.context = VAR_7;
 VAR_6.conn_icid = (u16)VAR_1->iscsi_conn_id;
 VAR_6.itid = VAR_13;
 VAR_6.cq_rss_number = 0;
 VAR_6.tx_io_size = FUNC_5(VAR_9->dlength);
 VAR_6.rx_io_size = VAR_10->sge_len;

 VAR_14 = FUNC_8(VAR_1);
 VAR_6.sqe = &VAR_12->sq[VAR_14];

 FUNC_4(VAR_6.sqe, 0, sizeof(struct iscsi_wqe));
 VAR_15 = FUNC_2(&VAR_6,
       &VAR_3,
       &VAR_4,
       &VAR_5);
 if (VAR_15)
  return -1;

 FUNC_12(&VAR_1->list_lock);
 FUNC_3(&VAR_11->io_cmd, &VAR_1->active_cmd_list);
 VAR_11->io_cmd_in_list = 1;
 VAR_1->active_cmd_count++;
 FUNC_13(&VAR_1->list_lock);

 FUNC_9(VAR_1);
 return 0;
}
