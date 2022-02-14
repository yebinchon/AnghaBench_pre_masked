
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrm_func_backing_store_qcaps_output {int tqm_entries_multiple; int tim_max_entries; int tim_entry_size; int mrav_num_entries_units; int mrav_entry_size; int mrav_max_entries; int tqm_max_entries_per_ring; int tqm_min_entries_per_ring; int tqm_entry_size; int stat_entry_size; int stat_max_entries; int vnic_entry_size; int vnic_max_ring_table_entries; int vnic_max_vnic_entries; int cq_entry_size; int cq_max_entries; int cq_max_l2_entries; int srq_entry_size; int srq_max_entries; int srq_max_l2_entries; int qp_entry_size; int qp_max_l2_entries; int qp_min_qp1_entries; int qp_max_entries; } ;
struct hwrm_func_backing_store_qcaps_input {int member_0; } ;
struct bnxt_ctx_pg_info {int dummy; } ;
struct bnxt_ctx_mem_info {int tqm_entries_multiple; void* tim_max_entries; void* tim_entry_size; void* mrav_num_entries_units; void* mrav_entry_size; void* mrav_max_entries; void* tqm_max_entries_per_ring; void* tqm_min_entries_per_ring; void* tqm_entry_size; void* stat_entry_size; void* stat_max_entries; void* vnic_entry_size; void* vnic_max_ring_table_entries; void* vnic_max_vnic_entries; void* cq_entry_size; void* cq_max_entries; void* cq_max_l2_entries; void* srq_entry_size; void* srq_max_entries; void* srq_max_l2_entries; void* qp_entry_size; void* qp_max_l2_entries; void* qp_min_qp1_entries; void* qp_max_entries; struct bnxt_ctx_pg_info** tqm_mem; } ;
struct bnxt {int hwrm_spec_code; int max_q; int hwrm_cmd_lock; struct bnxt_ctx_mem_info* ctx; struct hwrm_func_backing_store_qcaps_output* hwrm_cmd_resp_addr; } ;
typedef int req ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bnxt*,struct hwrm_func_backing_store_qcaps_input*,int,int ) ;
 int FUNC_2 (struct bnxt*,struct hwrm_func_backing_store_qcaps_input*,int ,int,int) ;
 int FUNC_3 (struct bnxt_ctx_mem_info*) ;
 void* FUNC_4 (int,int ) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct bnxt *VAR_4)
{
 struct hwrm_func_backing_store_qcaps_input VAR_5 = {0};
 struct hwrm_func_backing_store_qcaps_output *VAR_6 =
  VAR_4->hwrm_cmd_resp_addr;
 int VAR_7;

 if (VAR_4->hwrm_spec_code < 0x10902 || FUNC_0(VAR_4) || VAR_4->ctx)
  return 0;

 FUNC_2(VAR_4, &VAR_5, VAR_3, -1, -1);
 FUNC_7(&VAR_4->hwrm_cmd_lock);
 VAR_7 = FUNC_1(VAR_4, &VAR_5, sizeof(VAR_5), VAR_2);
 if (!VAR_7) {
  struct bnxt_ctx_pg_info *VAR_8;
  struct bnxt_ctx_mem_info *VAR_9;
  int VAR_10;

  VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1);
  if (!VAR_9) {
   VAR_7 = -VAR_0;
   goto ctx_err;
  }
  VAR_8 = FUNC_4(sizeof(*VAR_8) * (VAR_4->max_q + 1), VAR_1);
  if (!VAR_8) {
   FUNC_3(VAR_9);
   VAR_7 = -VAR_0;
   goto ctx_err;
  }
  for (VAR_10 = 0; VAR_10 < VAR_4->max_q + 1; VAR_10++, VAR_8++)
   VAR_9->tqm_mem[VAR_10] = VAR_8;

  VAR_4->ctx = VAR_9;
  VAR_9->qp_max_entries = FUNC_6(VAR_6->qp_max_entries);
  VAR_9->qp_min_qp1_entries = FUNC_5(VAR_6->qp_min_qp1_entries);
  VAR_9->qp_max_l2_entries = FUNC_5(VAR_6->qp_max_l2_entries);
  VAR_9->qp_entry_size = FUNC_5(VAR_6->qp_entry_size);
  VAR_9->srq_max_l2_entries = FUNC_5(VAR_6->srq_max_l2_entries);
  VAR_9->srq_max_entries = FUNC_6(VAR_6->srq_max_entries);
  VAR_9->srq_entry_size = FUNC_5(VAR_6->srq_entry_size);
  VAR_9->cq_max_l2_entries = FUNC_5(VAR_6->cq_max_l2_entries);
  VAR_9->cq_max_entries = FUNC_6(VAR_6->cq_max_entries);
  VAR_9->cq_entry_size = FUNC_5(VAR_6->cq_entry_size);
  VAR_9->vnic_max_vnic_entries =
   FUNC_5(VAR_6->vnic_max_vnic_entries);
  VAR_9->vnic_max_ring_table_entries =
   FUNC_5(VAR_6->vnic_max_ring_table_entries);
  VAR_9->vnic_entry_size = FUNC_5(VAR_6->vnic_entry_size);
  VAR_9->stat_max_entries = FUNC_6(VAR_6->stat_max_entries);
  VAR_9->stat_entry_size = FUNC_5(VAR_6->stat_entry_size);
  VAR_9->tqm_entry_size = FUNC_5(VAR_6->tqm_entry_size);
  VAR_9->tqm_min_entries_per_ring =
   FUNC_6(VAR_6->tqm_min_entries_per_ring);
  VAR_9->tqm_max_entries_per_ring =
   FUNC_6(VAR_6->tqm_max_entries_per_ring);
  VAR_9->tqm_entries_multiple = VAR_6->tqm_entries_multiple;
  if (!VAR_9->tqm_entries_multiple)
   VAR_9->tqm_entries_multiple = 1;
  VAR_9->mrav_max_entries = FUNC_6(VAR_6->mrav_max_entries);
  VAR_9->mrav_entry_size = FUNC_5(VAR_6->mrav_entry_size);
  VAR_9->mrav_num_entries_units =
   FUNC_5(VAR_6->mrav_num_entries_units);
  VAR_9->tim_entry_size = FUNC_5(VAR_6->tim_entry_size);
  VAR_9->tim_max_entries = FUNC_6(VAR_6->tim_max_entries);
 } else {
  VAR_7 = 0;
 }
ctx_err:
 FUNC_8(&VAR_4->hwrm_cmd_lock);
 return VAR_7;
}
