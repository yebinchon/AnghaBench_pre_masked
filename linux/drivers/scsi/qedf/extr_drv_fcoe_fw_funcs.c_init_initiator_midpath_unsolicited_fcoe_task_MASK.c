
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct TYPE_9__ {int mid_path; } ;
struct TYPE_10__ {TYPE_2__ tx_params; } ;
struct ystorm_fcoe_task_st_ctx {int task_type; TYPE_3__ tx_info_union; void* data_2_trns_rem; int sgl_mode; int data_desc; int sgl_params; } ;
struct TYPE_12__ {int rx_id; int flags; } ;
struct TYPE_11__ {int task_type; void* glbl_q_num; void* cid; } ;
struct tstorm_fcoe_task_st_ctx {TYPE_5__ read_write; TYPE_4__ read_only; } ;
struct scsi_sgl_task_params {int num_sges; int total_buffer_size; } ;
struct mstorm_fcoe_task_st_ctx {void* data_2_trns_rem; int flags; int data_desc; int sgl_params; } ;
struct fcoe_tx_mid_path_params {int dummy; } ;
struct fcoe_task_params {TYPE_7__* sqe; int cq_rss_number; scalar_t__ task_type; int conn_cid; int rx_io_size; int tx_io_size; struct e4_fcoe_task_context* context; } ;
struct e4_ustorm_fcoe_task_ag_ctx {void* global_cq_num; } ;
struct TYPE_8__ {int byte0; } ;
struct e4_fcoe_task_context {struct e4_ustorm_fcoe_task_ag_ctx ustorm_ag_context; struct tstorm_fcoe_task_st_ctx tstorm_st_context; struct mstorm_fcoe_task_st_ctx mstorm_st_context; struct ystorm_fcoe_task_st_ctx ystorm_st_context; TYPE_1__ ystorm_ag_context; } ;
struct TYPE_13__ {int burst_length; } ;
struct TYPE_14__ {int flags; TYPE_6__ additional_info_union; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct fcoe_task_params*,int ) ;
 int FUNC_4 (int *,int *,struct scsi_sgl_task_params*) ;
 int FUNC_5 (int *,struct fcoe_tx_mid_path_params*,int) ;
 int FUNC_6 (struct e4_fcoe_task_context*,int ,int) ;

int FUNC_7(
 struct fcoe_task_params *VAR_8,
 struct fcoe_tx_mid_path_params *VAR_9,
 struct scsi_sgl_task_params *VAR_10,
 struct scsi_sgl_task_params *VAR_11,
 u8 VAR_12)
{
 struct e4_fcoe_task_context *VAR_13 = VAR_8->context;
 const u8 VAR_14 = VAR_13->ystorm_ag_context.byte0;
 struct e4_ustorm_fcoe_task_ag_ctx *VAR_15;
 struct ystorm_fcoe_task_st_ctx *VAR_16;
 struct tstorm_fcoe_task_st_ctx *VAR_17;
 struct mstorm_fcoe_task_st_ctx *VAR_18;
 u32 VAR_19;

 FUNC_6(VAR_13, 0, sizeof(*(VAR_13)));
 VAR_13->ystorm_ag_context.byte0 = VAR_14;


 VAR_16 = &VAR_13->ystorm_st_context;
 FUNC_4(&VAR_16->sgl_params,
         &VAR_16->data_desc,
         VAR_10);
 FUNC_0(VAR_16->sgl_mode,
    VAR_7, VAR_5);
 VAR_16->data_2_trns_rem = FUNC_2(VAR_8->tx_io_size);
 VAR_16->task_type = (u8)VAR_8->task_type;
 FUNC_5(&VAR_16->tx_info_union.tx_params.mid_path,
        VAR_9, sizeof(struct fcoe_tx_mid_path_params));


 VAR_18 = &VAR_13->mstorm_st_context;
 FUNC_4(&VAR_18->sgl_params,
         &VAR_18->data_desc,
         VAR_11);
 FUNC_0(VAR_18->flags,
    VAR_4,
    VAR_12);
 VAR_18->data_2_trns_rem = FUNC_2(VAR_8->rx_io_size);


 VAR_17 = &VAR_13->tstorm_st_context;
 VAR_17->read_only.cid = FUNC_2(VAR_8->conn_cid);
 VAR_19 = FUNC_2(VAR_8->cq_rss_number);
 VAR_17->read_only.glbl_q_num = VAR_19;
 VAR_17->read_only.task_type = (u8)VAR_8->task_type;
 FUNC_0(VAR_17->read_write.flags,
    VAR_1, 1);
 VAR_17->read_write.rx_id = FUNC_1(VAR_0);


 VAR_15 = &VAR_13->ustorm_ag_context;
 VAR_15->global_cq_num = FUNC_2(VAR_8->cq_rss_number);


 FUNC_3(VAR_8, VAR_6);
 VAR_8->sqe->additional_info_union.burst_length =
        VAR_10->total_buffer_size;
 FUNC_0(VAR_8->sqe->flags,
    VAR_2, VAR_10->num_sges);
 FUNC_0(VAR_8->sqe->flags, VAR_3,
    VAR_5);

 return 0;
}
