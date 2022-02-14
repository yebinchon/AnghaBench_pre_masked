
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_task {scalar_t__ hdr; struct bnx2i_cmd* dd_data; } ;
struct iscsi_session {int back_lock; } ;
struct iscsi_scsi_rsp {scalar_t__ opcode; scalar_t__ cmd_status; void* residual_count; int flags; int response; void* exp_cmdsn; void* max_cmdsn; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {int data; int txdata_octets; int r2t_pdus_cnt; int dataout_pdus_cnt; int rxdata_octets; int datain_pdus_cnt; } ;
struct cqe {int dummy; } ;
struct bnx2i_hba {int dummy; } ;
struct bnx2i_conn {struct bnx2i_hba* hba; TYPE_1__* cls_conn; } ;
struct TYPE_9__ {scalar_t__ num_r2ts; scalar_t__ num_data_outs; } ;
struct TYPE_7__ {scalar_t__ num_data_ins; } ;
struct TYPE_10__ {TYPE_4__ write_stat; TYPE_2__ read_stat; } ;
struct bnx2i_cmd_response {int itt; scalar_t__ op_code; scalar_t__ status; int data_length; int residual_count; int response_flags; int response; int exp_cmd_sn; int max_cmd_sn; TYPE_5__ task_stat; } ;
struct TYPE_8__ {int op_attr; scalar_t__ total_data_transfer_length; } ;
struct bnx2i_cmd {int conn; TYPE_3__ req; } ;
struct TYPE_6__ {struct iscsi_conn* dd_data; } ;


 int FUNC_0 (struct bnx2i_hba*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct iscsi_conn*,struct iscsi_hdr*,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct bnx2i_cmd*) ;
 int FUNC_4 (int ,int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,struct iscsi_conn*,char*,int) ;
 struct iscsi_task* FUNC_7 (struct iscsi_conn*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_10(struct iscsi_session *VAR_11,
    struct bnx2i_conn *VAR_12,
    struct cqe *VAR_13)
{
 struct iscsi_conn *VAR_14 = VAR_12->cls_conn->dd_data;
 struct bnx2i_hba *VAR_15 = VAR_12->hba;
 struct bnx2i_cmd_response *VAR_16;
 struct bnx2i_cmd *VAR_17;
 struct iscsi_task *VAR_18;
 struct iscsi_scsi_rsp *VAR_19;
 u32 VAR_20 = 0;

 VAR_16 = (struct bnx2i_cmd_response *)VAR_13;
 FUNC_8(&VAR_11->back_lock);
 VAR_18 = FUNC_7(VAR_14,
     VAR_16->itt & VAR_2);
 if (!VAR_18)
  goto fail;

 VAR_17 = VAR_18->dd_data;

 if (VAR_17->req.op_attr & VAR_1) {
  VAR_14->datain_pdus_cnt +=
   VAR_16->task_stat.read_stat.num_data_ins;
  VAR_14->rxdata_octets +=
   VAR_17->req.total_data_transfer_length;
  FUNC_0(VAR_15, VAR_8,
        VAR_16->task_stat.read_stat.num_data_ins);
  FUNC_0(VAR_15, VAR_7,
        VAR_17->req.total_data_transfer_length);
 } else {
  VAR_14->dataout_pdus_cnt +=
   VAR_16->task_stat.write_stat.num_data_outs;
  VAR_14->r2t_pdus_cnt +=
   VAR_16->task_stat.write_stat.num_r2ts;
  VAR_14->txdata_octets +=
   VAR_17->req.total_data_transfer_length;
  FUNC_0(VAR_15, VAR_10,
        VAR_16->task_stat.write_stat.num_data_outs);
  FUNC_0(VAR_15, VAR_9,
        VAR_17->req.total_data_transfer_length);
  FUNC_0(VAR_15, VAR_8,
        VAR_16->task_stat.write_stat.num_r2ts);
 }
 FUNC_3(VAR_17);

 VAR_19 = (struct iscsi_scsi_rsp *)VAR_18->hdr;
 VAR_16 = (struct bnx2i_cmd_response *)VAR_13;
 VAR_19->opcode = VAR_16->op_code;
 VAR_19->max_cmdsn = FUNC_5(VAR_16->max_cmd_sn);
 VAR_19->exp_cmdsn = FUNC_5(VAR_16->exp_cmd_sn);
 VAR_19->response = VAR_16->response;
 VAR_19->cmd_status = VAR_16->status;
 VAR_19->flags = VAR_16->response_flags;
 VAR_19->residual_count = FUNC_5(VAR_16->residual_count);

 if (VAR_16->op_code == VAR_4)
  goto done;

 if (VAR_16->status == VAR_6) {
  VAR_20 = VAR_16->data_length;
  if (VAR_20 < 2)
   goto done;

  if (VAR_20 > VAR_0) {
   FUNC_6(VAR_5, VAR_14,
       "sense data len %d > RQ sz\n",
       VAR_20);
   VAR_20 = VAR_0;
  } else if (VAR_20 > VAR_3) {
   FUNC_6(VAR_5, VAR_14,
       "sense data len %d > conn data\n",
       VAR_20);
   VAR_20 = VAR_3;
  }

  FUNC_2(VAR_17->conn, VAR_14->data, VAR_20);
  FUNC_4(VAR_17->conn, 1);
 }

done:
 FUNC_1(VAR_14, (struct iscsi_hdr *)VAR_19,
        VAR_14->data, VAR_20);
fail:
 FUNC_9(&VAR_11->back_lock);
 return 0;
}
