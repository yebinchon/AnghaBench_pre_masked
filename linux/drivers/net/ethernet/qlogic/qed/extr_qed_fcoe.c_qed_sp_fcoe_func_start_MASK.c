
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


typedef size_t u8 ;
typedef scalar_t__ u32 ;
typedef void* u16 ;
struct TYPE_12__ {size_t num_queues; size_t queue_relative_offset; size_t bdq_resource_id; int q_validity; scalar_t__* bdq_pbl_num_entries; void* rq_buffer_size; void** bdq_xon_threshold; void** bdq_xoff_threshold; int * bdq_pbl_base_address; int cmdq_sb_pi; int cq_sb_pi; void** cq_cmdq_sb_num_arr; void* cmdq_num_entries; void* cq_num_entries; int glbl_q_params_addr; } ;
struct TYPE_10__ {int debug_mode; int log_page_size; void* num_tasks; } ;
struct fcoe_init_func_ramrod_data {TYPE_6__ q_params; TYPE_4__ func_params; void* sq_num_pages_in_pbl; void* mtu; } ;
struct fcoe_init_ramrod_params {struct fcoe_init_func_ramrod_data init_ramrod_data; } ;
struct TYPE_7__ {struct fcoe_init_ramrod_params fcoe_init; } ;
struct qed_spq_entry {TYPE_1__ ramrod; } ;
struct qed_spq_comp_cb {int dummy; } ;
struct qed_sp_init_data {int comp_mode; struct qed_spq_comp_cb* p_comp_data; int opaque_fid; int cid; } ;
struct TYPE_11__ {scalar_t__* feat_num; scalar_t__* resc_start; int opaque_fid; } ;
struct qed_fcoe_pf_params {scalar_t__ num_cqs; void* mtu; void* sq_num_pbl_pages; void* num_tasks; void* cq_num_entries; void* cmdq_num_entries; scalar_t__ is_target; void* rq_buffer_size; void** bdq_xon_threshold; void** bdq_xoff_threshold; scalar_t__* bdq_pbl_num_entries; int * bdq_pbl_base_addr; int gl_cmd_pi; int gl_rq_pi; int glbl_q_params_addr; int debug_mode; int log_page_size; void* dummy_icid; } ;
struct TYPE_8__ {struct qed_fcoe_pf_params fcoe_pf_params; } ;
struct qed_hwfn {TYPE_5__ hw_info; TYPE_2__ pf_params; } ;
struct qed_cxt_info {struct e4_fcoe_conn_context* p_cxt; scalar_t__ iid; } ;
struct TYPE_9__ {int flags3; } ;
struct e4_fcoe_conn_context {TYPE_3__ tstorm_ag_context; } ;
typedef int init_data ;
typedef enum spq_mode { ____Placeholder_spq_mode } spq_mode ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct qed_hwfn*,char*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ FUNC_3 (struct qed_hwfn*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,int ,int) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_7 (struct qed_hwfn*,int ,scalar_t__*) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_cxt_info*) ;
 void* FUNC_9 (struct qed_hwfn*,size_t) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_spq_entry*) ;
 int FUNC_11 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_12 (struct qed_hwfn*) ;
 int FUNC_13 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

__attribute__((used)) static int
FUNC_14(struct qed_hwfn *VAR_12,
         enum spq_mode VAR_13,
         struct qed_spq_comp_cb *VAR_14)
{
 struct qed_fcoe_pf_params *VAR_15 = ((void*)0);
 struct fcoe_init_ramrod_params *VAR_16 = ((void*)0);
 struct fcoe_init_func_ramrod_data *VAR_17;
 struct e4_fcoe_conn_context *VAR_18 = ((void*)0);
 struct qed_spq_entry *VAR_19 = ((void*)0);
 struct qed_sp_init_data VAR_20;
 struct qed_cxt_info VAR_21;
 u32 VAR_22;
 int VAR_23 = 0;
 u16 VAR_24;
 u8 VAR_25;


 FUNC_6(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.cid = FUNC_12(VAR_12);
 VAR_20.opaque_fid = VAR_12->hw_info.opaque_fid;
 VAR_20.comp_mode = VAR_13;
 VAR_20.p_comp_data = VAR_14;

 VAR_23 = FUNC_11(VAR_12, &VAR_19,
     VAR_4,
     VAR_5, &VAR_20);
 if (VAR_23)
  return VAR_23;

 VAR_16 = &VAR_19->ramrod.fcoe_init;
 VAR_17 = &VAR_16->init_ramrod_data;
 VAR_15 = &VAR_12->pf_params.fcoe_pf_params;


 if (VAR_15->num_cqs > VAR_12->hw_info.feat_num[VAR_8]) {
  FUNC_1(VAR_12,
         "Cannot satisfy CQ amount. CQs requested %d, CQs available %d. Aborting function start\n",
         VAR_15->num_cqs,
         VAR_12->hw_info.feat_num[VAR_8]);
  VAR_23 = -VAR_3;
  goto err;
 }

 VAR_17->mtu = FUNC_5(VAR_15->mtu);
 VAR_24 = FUNC_5(VAR_15->sq_num_pbl_pages);
 VAR_17->sq_num_pages_in_pbl = VAR_24;

 VAR_23 = FUNC_7(VAR_12, VAR_5, &VAR_22);
 if (VAR_23)
  goto err;

 VAR_21.iid = VAR_22;
 VAR_23 = FUNC_8(VAR_12, &VAR_21);
 if (VAR_23) {
  FUNC_2(VAR_12, "Cannot find context info for dummy cid=%d\n",
     VAR_22);
  goto err;
 }
 VAR_18 = VAR_21.p_cxt;
 FUNC_4(VAR_18->tstorm_ag_context.flags3,
    VAR_2, 1);

 VAR_15->dummy_icid = (u16)VAR_22;

 VAR_24 = FUNC_5(VAR_15->num_tasks);
 VAR_17->func_params.num_tasks = VAR_24;
 VAR_17->func_params.log_page_size = VAR_15->log_page_size;
 VAR_17->func_params.debug_mode = VAR_15->debug_mode;

 FUNC_0(VAR_17->q_params.glbl_q_params_addr,
         VAR_15->glbl_q_params_addr);

 VAR_24 = FUNC_5(VAR_15->cq_num_entries);
 VAR_17->q_params.cq_num_entries = VAR_24;

 VAR_24 = FUNC_5(VAR_15->cmdq_num_entries);
 VAR_17->q_params.cmdq_num_entries = VAR_24;

 VAR_24 = VAR_15->num_cqs;
 VAR_17->q_params.num_queues = (u8)VAR_24;

 VAR_24 = (u16)VAR_12->hw_info.resc_start[VAR_7];
 VAR_17->q_params.queue_relative_offset = (u8)VAR_24;

 for (VAR_25 = 0; VAR_25 < VAR_15->num_cqs; VAR_25++) {
  u16 VAR_26;

  VAR_26 = FUNC_9(VAR_12, VAR_25);
  VAR_24 = FUNC_5(VAR_26);
  VAR_17->q_params.cq_cmdq_sb_num_arr[VAR_25] = VAR_24;
 }

 VAR_17->q_params.cq_sb_pi = VAR_15->gl_rq_pi;
 VAR_17->q_params.cmdq_sb_pi = VAR_15->gl_cmd_pi;

 VAR_17->q_params.bdq_resource_id = (u8)FUNC_3(VAR_12, VAR_6);

 FUNC_0(VAR_17->q_params.bdq_pbl_base_address[VAR_1],
         VAR_15->bdq_pbl_base_addr[VAR_1]);
 VAR_17->q_params.bdq_pbl_num_entries[VAR_1] =
     VAR_15->bdq_pbl_num_entries[VAR_1];
 VAR_24 = VAR_15->bdq_xoff_threshold[VAR_1];
 VAR_17->q_params.bdq_xoff_threshold[VAR_1] = FUNC_5(VAR_24);
 VAR_24 = VAR_15->bdq_xon_threshold[VAR_1];
 VAR_17->q_params.bdq_xon_threshold[VAR_1] = FUNC_5(VAR_24);

 FUNC_0(VAR_17->q_params.bdq_pbl_base_address[VAR_0],
         VAR_15->bdq_pbl_base_addr[VAR_0]);
 VAR_17->q_params.bdq_pbl_num_entries[VAR_0] =
     VAR_15->bdq_pbl_num_entries[VAR_0];
 VAR_24 = VAR_15->bdq_xoff_threshold[VAR_0];
 VAR_17->q_params.bdq_xoff_threshold[VAR_0] = FUNC_5(VAR_24);
 VAR_24 = VAR_15->bdq_xon_threshold[VAR_0];
 VAR_17->q_params.bdq_xon_threshold[VAR_0] = FUNC_5(VAR_24);
 VAR_24 = VAR_15->rq_buffer_size;
 VAR_17->q_params.rq_buffer_size = FUNC_5(VAR_24);

 if (VAR_15->is_target) {
  FUNC_4(VAR_17->q_params.q_validity,
     VAR_11, 1);
  if (VAR_17->q_params.bdq_pbl_num_entries[VAR_0])
   FUNC_4(VAR_17->q_params.q_validity,
      VAR_10, 1);
  FUNC_4(VAR_17->q_params.q_validity,
     VAR_9, 1);
 } else {
  FUNC_4(VAR_17->q_params.q_validity,
     VAR_11, 1);
 }

 VAR_23 = FUNC_13(VAR_12, VAR_19, ((void*)0));

 return VAR_23;

err:
 FUNC_10(VAR_12, VAR_19);
 return VAR_23;
}
