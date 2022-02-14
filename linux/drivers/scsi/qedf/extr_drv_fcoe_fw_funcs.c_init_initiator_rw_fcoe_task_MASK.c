
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u8 ;
typedef void* u32 ;
struct TYPE_12__ {void* sgl_num_sges; } ;
struct TYPE_8__ {int fcp_cmd_payload; } ;
struct ystorm_fcoe_task_st_ctx {int expect_first_xfer; int data_desc; TYPE_6__ sgl_params; int sgl_mode; TYPE_2__ tx_info_union; void* task_type; void* task_rety_identifier; void* data_2_trns_rem; } ;
struct TYPE_11__ {int flags; void* rx_id; } ;
struct TYPE_9__ {void* task_type; void* fcp_cmd_trns_size; void* glbl_q_num; void* cid; void* dev_type; } ;
struct tstorm_fcoe_task_st_ctx {TYPE_5__ read_write; TYPE_3__ read_only; } ;
struct scsi_sgl_task_params {int num_sges; int small_mid_sge; } ;
struct regpair {void* hi; void* lo; } ;
struct TYPE_10__ {void* lo; void* hi; } ;
struct mstorm_fcoe_task_st_ctx {int data_desc; TYPE_6__ sgl_params; void* data_2_trns_rem; int flags; TYPE_4__ rsp_buf_addr; } ;
struct fcoe_task_params {scalar_t__ task_type; int is_tape_device; void* conn_cid; void* cq_rss_number; void* rx_io_size; void* tx_io_size; struct e4_fcoe_task_context* context; } ;
struct fcoe_fcp_cmd_payload {int dummy; } ;
struct e4_ustorm_fcoe_task_ag_ctx {void* global_cq_num; } ;
struct TYPE_7__ {void* byte0; } ;
struct e4_fcoe_task_context {struct mstorm_fcoe_task_st_ctx mstorm_st_context; struct e4_ustorm_fcoe_task_ag_ctx ustorm_ag_context; struct tstorm_fcoe_task_st_ctx tstorm_st_context; struct ystorm_fcoe_task_st_ctx ystorm_st_context; TYPE_1__ ystorm_ag_context; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_10 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (struct fcoe_task_params*,int ) ;
 int FUNC_4 (TYPE_6__*,int *,struct scsi_sgl_task_params*) ;
 int FUNC_5 (int *,void**,int) ;
 int FUNC_6 (struct e4_fcoe_task_context*,int ,int) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct fcoe_task_params *VAR_11,
    struct scsi_sgl_task_params *VAR_12,
    struct regpair VAR_13,
    u32 VAR_14,
    u8 VAR_15[32])
{
 struct e4_fcoe_task_context *VAR_16 = VAR_11->context;
 const u8 VAR_17 = VAR_16->ystorm_ag_context.byte0;
 struct e4_ustorm_fcoe_task_ag_ctx *VAR_18;
 struct ystorm_fcoe_task_st_ctx *VAR_19;
 struct tstorm_fcoe_task_st_ctx *VAR_20;
 struct mstorm_fcoe_task_st_ctx *VAR_21;
 u32 VAR_22, VAR_23;
 bool VAR_24;

 FUNC_6(VAR_16, 0, sizeof(*(VAR_16)));
 VAR_16->ystorm_ag_context.byte0 = VAR_17;
 VAR_24 = FUNC_7(VAR_12->num_sges,
        VAR_12->small_mid_sge);
 VAR_22 = (VAR_11->task_type == VAR_3 ?
     VAR_11->tx_io_size : VAR_11->rx_io_size);


 VAR_19 = &VAR_16->ystorm_st_context;
 VAR_19->data_2_trns_rem = FUNC_2(VAR_22);
 VAR_19->task_rety_identifier = FUNC_2(VAR_14);
 VAR_19->task_type = (u8)VAR_11->task_type;
 FUNC_5(&VAR_19->tx_info_union.fcp_cmd_payload,
        VAR_15, sizeof(struct fcoe_fcp_cmd_payload));


 VAR_20 = &VAR_16->tstorm_st_context;
 VAR_20->read_only.dev_type = (u8)(VAR_11->is_tape_device == 1 ?
         VAR_2 :
         VAR_1);
 VAR_20->read_only.cid = FUNC_2(VAR_11->conn_cid);
 VAR_23 = FUNC_2(VAR_11->cq_rss_number);
 VAR_20->read_only.glbl_q_num = VAR_23;
 VAR_20->read_only.fcp_cmd_trns_size = FUNC_2(VAR_22);
 VAR_20->read_only.task_type = (u8)VAR_11->task_type;
 FUNC_0(VAR_20->read_write.flags,
    VAR_4, 1);
 VAR_20->read_write.rx_id = FUNC_1(VAR_0);


 VAR_18 = &VAR_16->ustorm_ag_context;
 VAR_18->global_cq_num = FUNC_2(VAR_11->cq_rss_number);


 VAR_21 = &VAR_16->mstorm_st_context;
 VAR_23 = FUNC_2(VAR_13.hi);
 VAR_21->rsp_buf_addr.hi = VAR_23;
 VAR_23 = FUNC_2(VAR_13.lo);
 VAR_21->rsp_buf_addr.lo = VAR_23;

 if (VAR_11->task_type == VAR_3) {

  VAR_19->expect_first_xfer = 1;


  FUNC_0(VAR_19->sgl_mode,
     VAR_10,
     (VAR_24 ? VAR_8 : VAR_7));
  FUNC_4(&VAR_19->sgl_params,
          &VAR_19->data_desc,
          VAR_12);


  FUNC_0(VAR_21->flags,
     VAR_6,
     (VAR_24 ? VAR_8 : VAR_7));
  VAR_21->sgl_params.sgl_num_sges =
   FUNC_1(VAR_12->num_sges);
 } else {

  FUNC_0(VAR_20->read_write.flags,
     VAR_5,
     (VAR_24 ? VAR_8 : VAR_7));


  VAR_21->data_2_trns_rem = FUNC_2(VAR_22);
  FUNC_4(&VAR_21->sgl_params,
          &VAR_21->data_desc,
          VAR_12);
 }


 FUNC_3(VAR_11, VAR_9);

 return 0;
}
