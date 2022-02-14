
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct hwrm_func_resource_qcaps_output {int vf_reservation_strategy; int max_msix; int max_stat_ctx; int min_stat_ctx; int max_vnics; int min_vnics; int max_l2_ctxs; int min_l2_ctxs; int max_hw_ring_grps; int min_hw_ring_grps; int max_rx_rings; int min_rx_rings; int max_tx_rings; int min_tx_rings; int max_cmpl_rings; int min_cmpl_rings; int max_rsscos_ctx; int min_rsscos_ctx; int max_tx_scheduler_inputs; } ;
struct hwrm_func_resource_qcaps_input {int fid; int member_0; } ;
struct bnxt_pf_info {scalar_t__ vf_resv_strategy; } ;
struct bnxt_hw_resc {void* max_rx_rings; void* max_hw_ring_grps; void* max_nqs; void* max_stat_ctxs; void* min_stat_ctxs; void* max_vnics; void* min_vnics; void* max_l2_ctxs; void* min_l2_ctxs; void* min_hw_ring_grps; void* min_rx_rings; void* max_tx_rings; void* min_tx_rings; void* max_cp_rings; void* min_cp_rings; void* max_rsscos_ctxs; void* min_rsscos_ctxs; void* max_tx_sch_inputs; } ;
struct bnxt {int flags; int hwrm_cmd_lock; struct bnxt_pf_info pf; struct bnxt_hw_resc hw_resc; struct hwrm_func_resource_qcaps_output* hwrm_cmd_resp_addr; } ;
typedef int req ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bnxt*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bnxt*,struct hwrm_func_resource_qcaps_input*,int,int ) ;
 int FUNC_2 (struct bnxt*,struct hwrm_func_resource_qcaps_input*,int ,int,int) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct bnxt *VAR_5, bool VAR_6)
{
 struct hwrm_func_resource_qcaps_output *VAR_7 = VAR_5->hwrm_cmd_resp_addr;
 struct hwrm_func_resource_qcaps_input VAR_8 = {0};
 struct bnxt_hw_resc *VAR_9 = &VAR_5->hw_resc;
 int VAR_10;

 FUNC_2(VAR_5, &VAR_8, VAR_4, -1, -1);
 VAR_8.fid = FUNC_3(0xffff);

 FUNC_5(&VAR_5->hwrm_cmd_lock);
 VAR_10 = FUNC_1(VAR_5, &VAR_8, sizeof(VAR_8),
           VAR_3);
 if (VAR_10)
  goto hwrm_func_resc_qcaps_exit;

 VAR_9->max_tx_sch_inputs = FUNC_4(VAR_7->max_tx_scheduler_inputs);
 if (!VAR_6)
  goto hwrm_func_resc_qcaps_exit;

 VAR_9->min_rsscos_ctxs = FUNC_4(VAR_7->min_rsscos_ctx);
 VAR_9->max_rsscos_ctxs = FUNC_4(VAR_7->max_rsscos_ctx);
 VAR_9->min_cp_rings = FUNC_4(VAR_7->min_cmpl_rings);
 VAR_9->max_cp_rings = FUNC_4(VAR_7->max_cmpl_rings);
 VAR_9->min_tx_rings = FUNC_4(VAR_7->min_tx_rings);
 VAR_9->max_tx_rings = FUNC_4(VAR_7->max_tx_rings);
 VAR_9->min_rx_rings = FUNC_4(VAR_7->min_rx_rings);
 VAR_9->max_rx_rings = FUNC_4(VAR_7->max_rx_rings);
 VAR_9->min_hw_ring_grps = FUNC_4(VAR_7->min_hw_ring_grps);
 VAR_9->max_hw_ring_grps = FUNC_4(VAR_7->max_hw_ring_grps);
 VAR_9->min_l2_ctxs = FUNC_4(VAR_7->min_l2_ctxs);
 VAR_9->max_l2_ctxs = FUNC_4(VAR_7->max_l2_ctxs);
 VAR_9->min_vnics = FUNC_4(VAR_7->min_vnics);
 VAR_9->max_vnics = FUNC_4(VAR_7->max_vnics);
 VAR_9->min_stat_ctxs = FUNC_4(VAR_7->min_stat_ctx);
 VAR_9->max_stat_ctxs = FUNC_4(VAR_7->max_stat_ctx);

 if (VAR_5->flags & VAR_0) {
  u16 VAR_11 = FUNC_4(VAR_7->max_msix);

  VAR_9->max_nqs = VAR_11;
  VAR_9->max_hw_ring_grps = VAR_9->max_rx_rings;
 }

 if (FUNC_0(VAR_5)) {
  struct bnxt_pf_info *VAR_12 = &VAR_5->pf;

  VAR_12->vf_resv_strategy =
   FUNC_4(VAR_7->vf_reservation_strategy);
  if (VAR_12->vf_resv_strategy > VAR_2)
   VAR_12->vf_resv_strategy = VAR_1;
 }
hwrm_func_resc_qcaps_exit:
 FUNC_6(&VAR_5->hwrm_cmd_lock);
 return VAR_10;
}
