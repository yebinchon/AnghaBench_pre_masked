
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hwrm_func_backing_store_cfg_input {void* flags; void* tqm_entry_size; int tqm_sp_page_dir; int tqm_sp_pg_size_tqm_sp_lvl; void* tqm_sp_num_entries; int tim_page_dir; int tim_pg_size_tim_lvl; void* tim_entry_size; void* tim_num_entries; int mrav_page_dir; int mrav_pg_size_mrav_lvl; void* mrav_entry_size; void* mrav_num_entries; int stat_page_dir; int stat_pg_size_stat_lvl; void* stat_entry_size; void* stat_num_entries; int vnic_page_dir; int vnic_pg_size_vnic_lvl; void* vnic_entry_size; void* vnic_num_ring_table_entries; void* vnic_num_vnic_entries; int cq_page_dir; int cq_pg_size_cq_lvl; void* cq_entry_size; void* cq_num_l2_entries; void* cq_num_entries; int srq_page_dir; int srq_pg_size_srq_lvl; void* srq_entry_size; void* srq_num_l2_entries; void* srq_num_entries; int qpc_page_dir; int qpc_pg_size_qpc_lvl; void* qp_entry_size; void* qp_num_l2_entries; void* qp_num_qp1_entries; void* qp_num_entries; void* enables; int member_0; } ;
struct bnxt_ctx_pg_info {int entries; int ring_mem; } ;
struct bnxt_ctx_mem_info {int stat_max_entries; struct bnxt_ctx_pg_info** tqm_mem; int tqm_entry_size; int tim_entry_size; struct bnxt_ctx_pg_info tim_mem; int mrav_entry_size; scalar_t__ mrav_num_entries_units; struct bnxt_ctx_pg_info mrav_mem; int stat_entry_size; struct bnxt_ctx_pg_info stat_mem; int vnic_entry_size; int vnic_max_ring_table_entries; int vnic_max_vnic_entries; struct bnxt_ctx_pg_info vnic_mem; int cq_entry_size; int cq_max_l2_entries; struct bnxt_ctx_pg_info cq_mem; int srq_entry_size; int srq_max_l2_entries; struct bnxt_ctx_pg_info srq_mem; int qp_entry_size; int qp_max_l2_entries; int qp_min_qp1_entries; struct bnxt_ctx_pg_info qp_mem; } ;
struct bnxt {struct bnxt_ctx_mem_info* ctx; } ;
typedef int req ;
typedef int __le64 ;
typedef void* __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct bnxt*,struct hwrm_func_backing_store_cfg_input*,int ,int,int) ;
 int FUNC_1 (int *,int *,int *) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct bnxt*,struct hwrm_func_backing_store_cfg_input*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct bnxt *VAR_11, u32 VAR_12)
{
 struct hwrm_func_backing_store_cfg_input VAR_13 = {0};
 struct bnxt_ctx_mem_info *VAR_14 = VAR_11->ctx;
 struct bnxt_ctx_pg_info *VAR_15;
 __le32 *VAR_16;
 __le64 *VAR_17;
 u32 VAR_18 = 0;
 u8 *VAR_19;
 int VAR_20, VAR_21;
 u32 VAR_22;

 if (!VAR_14)
  return 0;

 FUNC_0(VAR_11, &VAR_13, VAR_10, -1, -1);
 VAR_13.enables = FUNC_3(VAR_12);

 if (VAR_12 & VAR_2) {
  VAR_15 = &VAR_14->qp_mem;
  VAR_13.qp_num_entries = FUNC_3(VAR_15->entries);
  VAR_13.qp_num_qp1_entries = FUNC_2(VAR_14->qp_min_qp1_entries);
  VAR_13.qp_num_l2_entries = FUNC_2(VAR_14->qp_max_l2_entries);
  VAR_13.qp_entry_size = FUNC_2(VAR_14->qp_entry_size);
  FUNC_1(&VAR_15->ring_mem,
          &VAR_13.qpc_pg_size_qpc_lvl,
          &VAR_13.qpc_page_dir);
 }
 if (VAR_12 & VAR_3) {
  VAR_15 = &VAR_14->srq_mem;
  VAR_13.srq_num_entries = FUNC_3(VAR_15->entries);
  VAR_13.srq_num_l2_entries = FUNC_2(VAR_14->srq_max_l2_entries);
  VAR_13.srq_entry_size = FUNC_2(VAR_14->srq_entry_size);
  FUNC_1(&VAR_15->ring_mem,
          &VAR_13.srq_pg_size_srq_lvl,
          &VAR_13.srq_page_dir);
 }
 if (VAR_12 & VAR_0) {
  VAR_15 = &VAR_14->cq_mem;
  VAR_13.cq_num_entries = FUNC_3(VAR_15->entries);
  VAR_13.cq_num_l2_entries = FUNC_2(VAR_14->cq_max_l2_entries);
  VAR_13.cq_entry_size = FUNC_2(VAR_14->cq_entry_size);
  FUNC_1(&VAR_15->ring_mem, &VAR_13.cq_pg_size_cq_lvl,
          &VAR_13.cq_page_dir);
 }
 if (VAR_12 & VAR_7) {
  VAR_15 = &VAR_14->vnic_mem;
  VAR_13.vnic_num_vnic_entries =
   FUNC_2(VAR_14->vnic_max_vnic_entries);
  VAR_13.vnic_num_ring_table_entries =
   FUNC_2(VAR_14->vnic_max_ring_table_entries);
  VAR_13.vnic_entry_size = FUNC_2(VAR_14->vnic_entry_size);
  FUNC_1(&VAR_15->ring_mem,
          &VAR_13.vnic_pg_size_vnic_lvl,
          &VAR_13.vnic_page_dir);
 }
 if (VAR_12 & VAR_4) {
  VAR_15 = &VAR_14->stat_mem;
  VAR_13.stat_num_entries = FUNC_3(VAR_14->stat_max_entries);
  VAR_13.stat_entry_size = FUNC_2(VAR_14->stat_entry_size);
  FUNC_1(&VAR_15->ring_mem,
          &VAR_13.stat_pg_size_stat_lvl,
          &VAR_13.stat_page_dir);
 }
 if (VAR_12 & VAR_1) {
  VAR_15 = &VAR_14->mrav_mem;
  VAR_13.mrav_num_entries = FUNC_3(VAR_15->entries);
  if (VAR_14->mrav_num_entries_units)
   VAR_18 |=
   VAR_8;
  VAR_13.mrav_entry_size = FUNC_2(VAR_14->mrav_entry_size);
  FUNC_1(&VAR_15->ring_mem,
          &VAR_13.mrav_pg_size_mrav_lvl,
          &VAR_13.mrav_page_dir);
 }
 if (VAR_12 & VAR_5) {
  VAR_15 = &VAR_14->tim_mem;
  VAR_13.tim_num_entries = FUNC_3(VAR_15->entries);
  VAR_13.tim_entry_size = FUNC_2(VAR_14->tim_entry_size);
  FUNC_1(&VAR_15->ring_mem,
          &VAR_13.tim_pg_size_tim_lvl,
          &VAR_13.tim_page_dir);
 }
 for (VAR_20 = 0, VAR_16 = &VAR_13.tqm_sp_num_entries,
      VAR_19 = &VAR_13.tqm_sp_pg_size_tqm_sp_lvl,
      VAR_17 = &VAR_13.tqm_sp_page_dir,
      VAR_22 = VAR_6;
      VAR_20 < 9; VAR_20++, VAR_16++, VAR_19++, VAR_17++, VAR_22 <<= 1) {
  if (!(VAR_12 & VAR_22))
   continue;

  VAR_13.tqm_entry_size = FUNC_2(VAR_14->tqm_entry_size);
  VAR_15 = VAR_14->tqm_mem[VAR_20];
  *VAR_16 = FUNC_3(VAR_15->entries);
  FUNC_1(&VAR_15->ring_mem, VAR_19, VAR_17);
 }
 VAR_13.flags = FUNC_3(VAR_18);
 VAR_21 = FUNC_4(VAR_11, &VAR_13, sizeof(VAR_13), VAR_9);
 return VAR_21;
}
