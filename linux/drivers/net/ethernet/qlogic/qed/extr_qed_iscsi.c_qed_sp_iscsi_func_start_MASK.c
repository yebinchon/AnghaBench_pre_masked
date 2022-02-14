
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


typedef size_t u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct scsi_init_func_queues {scalar_t__ num_queues; size_t queue_relative_offset; size_t bdq_resource_id; int q_validity; scalar_t__* bdq_pbl_num_entries; void* rq_buffer_size; void** bdq_xon_threshold; void** bdq_xoff_threshold; int * bdq_pbl_base_address; void** cq_cmdq_sb_num_arr; int cmdq_sb_pi; int cq_sb_pi; void* cmdq_num_entries; void* cq_num_entries; int glbl_q_params_addr; } ;
struct TYPE_9__ {int max_fin_rt; void* tx_sws_timer; int two_msl_timer; } ;
struct TYPE_15__ {int flags; } ;
struct TYPE_14__ {void* num_tasks; int log_page_size; } ;
struct TYPE_13__ {int op_code; int flags; } ;
struct iscsi_spe_func_init {TYPE_7__ debug_mode; TYPE_6__ func_params; scalar_t__ ll2_rx_queue_id; int num_uhq_pages_in_ring; int num_r2tq_pages_in_ring; int num_sq_pages_in_ring; void* half_way_close_timeout; TYPE_5__ hdr; struct scsi_init_func_queues q_params; } ;
struct iscsi_init_ramrod_params {TYPE_1__ tcp_init; struct iscsi_spe_func_init iscsi_init_spe; } ;
struct TYPE_11__ {struct iscsi_init_ramrod_params iscsi_init; } ;
struct qed_spq_entry {TYPE_3__ ramrod; } ;
struct qed_spq_comp_cb {int dummy; } ;
struct qed_sp_init_data {int comp_mode; struct qed_spq_comp_cb* p_comp_data; int opaque_fid; int cid; } ;
struct qed_iscsi_pf_params {scalar_t__ num_queues; int max_fin_rt; int tx_sws_timer; int two_msl_timer; scalar_t__ is_target; int rq_buffer_size; int * bdq_xon_threshold; int * bdq_xoff_threshold; scalar_t__* bdq_pbl_num_entries; int * bdq_pbl_base_addr; int gl_cmd_pi; int gl_rq_pi; int cmdq_num_entries; int cq_num_entries; int glbl_q_params_addr; int debug_mode; int num_tasks; int log_page_size; scalar_t__ ll2_ooo_queue_id; int num_uhq_pages_in_ring; int num_r2tq_pages_in_ring; int num_sq_pages_in_ring; int half_way_close_timeout; } ;
struct TYPE_16__ {scalar_t__* feat_num; scalar_t__* resc_start; int opaque_fid; } ;
struct TYPE_12__ {struct qed_iscsi_pf_params iscsi_pf_params; } ;
struct qed_hwfn {TYPE_2__* p_iscsi_info; TYPE_8__ hw_info; TYPE_4__ pf_params; } ;
typedef int iscsi_event_cb_t ;
typedef int init_data ;
typedef enum spq_mode { ____Placeholder_spq_mode } spq_mode ;
struct TYPE_10__ {int event_cb; void* event_context; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,char*,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ FUNC_2 (struct qed_hwfn*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ,int ,int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_7 (struct qed_hwfn*,size_t) ;
 int VAR_14 ;
 int FUNC_8 (struct qed_hwfn*,struct qed_spq_entry*) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_10 (struct qed_hwfn*) ;
 int FUNC_11 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;
 int FUNC_12 (struct qed_hwfn*,int ,int ) ;

__attribute__((used)) static int
FUNC_13(struct qed_hwfn *VAR_15,
   enum spq_mode VAR_16,
   struct qed_spq_comp_cb *VAR_17,
   void *VAR_18, iscsi_event_cb_t VAR_19)
{
 struct iscsi_init_ramrod_params *VAR_20 = ((void*)0);
 struct scsi_init_func_queues *VAR_21 = ((void*)0);
 struct qed_iscsi_pf_params *VAR_22 = ((void*)0);
 struct iscsi_spe_func_init *VAR_23 = ((void*)0);
 struct qed_spq_entry *VAR_24 = ((void*)0);
 struct qed_sp_init_data VAR_25;
 int VAR_26 = 0;
 u32 VAR_27;
 u16 VAR_28;
 u8 VAR_29;


 FUNC_6(&VAR_25, 0, sizeof(VAR_25));
 VAR_25.cid = FUNC_10(VAR_15);
 VAR_25.opaque_fid = VAR_15->hw_info.opaque_fid;
 VAR_25.comp_mode = VAR_16;
 VAR_25.p_comp_data = VAR_17;

 VAR_26 = FUNC_9(VAR_15, &VAR_24,
     VAR_3,
     VAR_6, &VAR_25);
 if (VAR_26)
  return VAR_26;

 VAR_20 = &VAR_24->ramrod.iscsi_init;
 VAR_23 = &VAR_20->iscsi_init_spe;
 VAR_22 = &VAR_15->pf_params.iscsi_pf_params;
 VAR_21 = &VAR_23->q_params;


 if (VAR_22->num_queues > VAR_15->hw_info.feat_num[VAR_9]) {
  FUNC_1(VAR_15,
         "Cannot satisfy CQ amount. Queues requested %d, CQs available %d. Aborting function start\n",
         VAR_22->num_queues,
         VAR_15->hw_info.feat_num[VAR_9]);
  FUNC_8(VAR_15, VAR_24);
  return -VAR_2;
 }

 FUNC_3(VAR_23->hdr.flags,
    VAR_4, VAR_5);
 VAR_23->hdr.op_code = VAR_3;

 VAR_28 = VAR_22->half_way_close_timeout;
 VAR_23->half_way_close_timeout = FUNC_4(VAR_28);
 VAR_23->num_sq_pages_in_ring = VAR_22->num_sq_pages_in_ring;
 VAR_23->num_r2tq_pages_in_ring = VAR_22->num_r2tq_pages_in_ring;
 VAR_23->num_uhq_pages_in_ring = VAR_22->num_uhq_pages_in_ring;
 VAR_23->ll2_rx_queue_id = VAR_15->hw_info.resc_start[VAR_10] +
      VAR_22->ll2_ooo_queue_id;

 VAR_23->func_params.log_page_size = VAR_22->log_page_size;
 VAR_28 = VAR_22->num_tasks;
 VAR_23->func_params.num_tasks = FUNC_4(VAR_28);
 VAR_23->debug_mode.flags = VAR_22->debug_mode;

 FUNC_0(VAR_21->glbl_q_params_addr,
         VAR_22->glbl_q_params_addr);

 VAR_28 = VAR_22->cq_num_entries;
 VAR_21->cq_num_entries = FUNC_4(VAR_28);
 VAR_28 = VAR_22->cmdq_num_entries;
 VAR_21->cmdq_num_entries = FUNC_4(VAR_28);
 VAR_21->num_queues = VAR_22->num_queues;
 VAR_27 = (u8)VAR_15->hw_info.resc_start[VAR_8];
 VAR_21->queue_relative_offset = (u8)VAR_27;
 VAR_21->cq_sb_pi = VAR_22->gl_rq_pi;
 VAR_21->cmdq_sb_pi = VAR_22->gl_cmd_pi;

 for (VAR_29 = 0; VAR_29 < VAR_22->num_queues; VAR_29++) {
  VAR_28 = FUNC_7(VAR_15, VAR_29);
  VAR_21->cq_cmdq_sb_num_arr[VAR_29] = FUNC_4(VAR_28);
 }

 VAR_21->bdq_resource_id = (u8)FUNC_2(VAR_15, VAR_7);

 FUNC_0(VAR_21->bdq_pbl_base_address[VAR_1],
         VAR_22->bdq_pbl_base_addr[VAR_1]);
 VAR_21->bdq_pbl_num_entries[VAR_1] =
     VAR_22->bdq_pbl_num_entries[VAR_1];
 VAR_28 = VAR_22->bdq_xoff_threshold[VAR_1];
 VAR_21->bdq_xoff_threshold[VAR_1] = FUNC_4(VAR_28);
 VAR_28 = VAR_22->bdq_xon_threshold[VAR_1];
 VAR_21->bdq_xon_threshold[VAR_1] = FUNC_4(VAR_28);

 FUNC_0(VAR_21->bdq_pbl_base_address[VAR_0],
         VAR_22->bdq_pbl_base_addr[VAR_0]);
 VAR_21->bdq_pbl_num_entries[VAR_0] =
     VAR_22->bdq_pbl_num_entries[VAR_0];
 VAR_28 = VAR_22->bdq_xoff_threshold[VAR_0];
 VAR_21->bdq_xoff_threshold[VAR_0] = FUNC_4(VAR_28);
 VAR_28 = VAR_22->bdq_xon_threshold[VAR_0];
 VAR_21->bdq_xon_threshold[VAR_0] = FUNC_4(VAR_28);
 VAR_28 = VAR_22->rq_buffer_size;
 VAR_21->rq_buffer_size = FUNC_4(VAR_28);
 if (VAR_22->is_target) {
  FUNC_3(VAR_21->q_validity,
     VAR_13, 1);
  if (VAR_21->bdq_pbl_num_entries[VAR_0])
   FUNC_3(VAR_21->q_validity,
      VAR_12, 1);
  FUNC_3(VAR_21->q_validity,
     VAR_11, 1);
 } else {
  FUNC_3(VAR_21->q_validity,
     VAR_13, 1);
 }
 VAR_20->tcp_init.two_msl_timer = FUNC_5(VAR_22->two_msl_timer);
 VAR_28 = VAR_22->tx_sws_timer;
 VAR_20->tcp_init.tx_sws_timer = FUNC_4(VAR_28);
 VAR_20->tcp_init.max_fin_rt = VAR_22->max_fin_rt;

 VAR_15->p_iscsi_info->event_context = VAR_18;
 VAR_15->p_iscsi_info->event_cb = VAR_19;

 FUNC_12(VAR_15, VAR_6,
      VAR_14);

 return FUNC_11(VAR_15, VAR_24, ((void*)0));
}
