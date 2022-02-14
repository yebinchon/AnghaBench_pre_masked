
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hwrm_func_qcaps_output {int mac_address; int fid; int max_rx_wm_flows; int max_rx_em_flows; int max_tx_wm_flows; int max_tx_em_flows; int max_decap_records; int max_encap_records; int max_vfs; int first_vf_id; int port_id; int max_stat_ctx; int max_vnics; int max_l2_ctxs; int max_hw_ring_grps; int max_rx_rings; int max_tx_rings; int max_cmpl_rings; int max_rsscos_ctx; int flags; } ;
struct hwrm_func_qcaps_input {int fid; int member_0; } ;
struct bnxt_vf_info {int mac_addr; void* fw_fid; } ;
struct bnxt_pf_info {void* max_rx_wm_flows; void* max_rx_em_flows; void* max_tx_wm_flows; void* max_tx_em_flows; void* max_decap_records; void* max_encap_records; void* max_vfs; void* first_vf_id; int mac_addr; void* port_id; void* fw_fid; } ;
struct bnxt_hw_resc {void* max_stat_ctxs; void* max_vnics; void* max_l2_ctxs; void* max_tx_rings; void* max_hw_ring_grps; void* max_rx_rings; void* max_cp_rings; void* max_rsscos_ctxs; } ;
struct bnxt {int hwrm_cmd_lock; struct bnxt_vf_info vf; int flags; TYPE_1__* dev; struct bnxt_pf_info pf; scalar_t__ tx_push_thresh; int fw_cap; struct bnxt_hw_resc hw_resc; struct hwrm_func_qcaps_output* hwrm_cmd_resp_addr; } ;
typedef int req ;
struct TYPE_2__ {void* dev_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct bnxt*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct bnxt*,struct hwrm_func_qcaps_input*,int,int ) ;
 int FUNC_2 (struct bnxt*,struct hwrm_func_qcaps_input*,int ,int,int) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct bnxt *VAR_19)
{
 int VAR_20 = 0;
 struct hwrm_func_qcaps_input VAR_21 = {0};
 struct hwrm_func_qcaps_output *VAR_22 = VAR_19->hwrm_cmd_resp_addr;
 struct bnxt_hw_resc *VAR_23 = &VAR_19->hw_resc;
 u32 VAR_24;

 FUNC_2(VAR_19, &VAR_21, VAR_18, -1, -1);
 VAR_21.fid = FUNC_3(0xffff);

 FUNC_7(&VAR_19->hwrm_cmd_lock);
 VAR_20 = FUNC_1(VAR_19, &VAR_21, sizeof(VAR_21), VAR_17);
 if (VAR_20)
  goto hwrm_func_qcaps_exit;

 VAR_24 = FUNC_5(VAR_22->flags);
 if (VAR_24 & VAR_14)
  VAR_19->flags |= VAR_0;
 if (VAR_24 & VAR_15)
  VAR_19->flags |= VAR_1;
 if (VAR_24 & VAR_12)
  VAR_19->fw_cap |= VAR_6;
 if (VAR_24 & VAR_11)
  VAR_19->fw_cap |= VAR_5;
 if (VAR_24 & VAR_9)
  VAR_19->fw_cap |= VAR_3;
 if (VAR_24 & VAR_10)
  VAR_19->fw_cap |= VAR_4;

 VAR_19->tx_push_thresh = 0;
 if (VAR_24 & VAR_13)
  VAR_19->tx_push_thresh = VAR_7;

 VAR_23->max_rsscos_ctxs = FUNC_4(VAR_22->max_rsscos_ctx);
 VAR_23->max_cp_rings = FUNC_4(VAR_22->max_cmpl_rings);
 VAR_23->max_tx_rings = FUNC_4(VAR_22->max_tx_rings);
 VAR_23->max_rx_rings = FUNC_4(VAR_22->max_rx_rings);
 VAR_23->max_hw_ring_grps = FUNC_5(VAR_22->max_hw_ring_grps);
 if (!VAR_23->max_hw_ring_grps)
  VAR_23->max_hw_ring_grps = VAR_23->max_tx_rings;
 VAR_23->max_l2_ctxs = FUNC_4(VAR_22->max_l2_ctxs);
 VAR_23->max_vnics = FUNC_4(VAR_22->max_vnics);
 VAR_23->max_stat_ctxs = FUNC_4(VAR_22->max_stat_ctx);

 if (FUNC_0(VAR_19)) {
  struct bnxt_pf_info *VAR_25 = &VAR_19->pf;

  VAR_25->fw_fid = FUNC_4(VAR_22->fid);
  VAR_25->port_id = FUNC_4(VAR_22->port_id);
  VAR_19->dev->dev_port = VAR_25->port_id;
  FUNC_6(VAR_25->mac_addr, VAR_22->mac_address, VAR_8);
  VAR_25->first_vf_id = FUNC_4(VAR_22->first_vf_id);
  VAR_25->max_vfs = FUNC_4(VAR_22->max_vfs);
  VAR_25->max_encap_records = FUNC_5(VAR_22->max_encap_records);
  VAR_25->max_decap_records = FUNC_5(VAR_22->max_decap_records);
  VAR_25->max_tx_em_flows = FUNC_5(VAR_22->max_tx_em_flows);
  VAR_25->max_tx_wm_flows = FUNC_5(VAR_22->max_tx_wm_flows);
  VAR_25->max_rx_em_flows = FUNC_5(VAR_22->max_rx_em_flows);
  VAR_25->max_rx_wm_flows = FUNC_5(VAR_22->max_rx_wm_flows);
  VAR_19->flags &= ~VAR_2;
  if (VAR_24 & VAR_16)
   VAR_19->flags |= VAR_2;
 } else {






 }

hwrm_func_qcaps_exit:
 FUNC_8(&VAR_19->hwrm_cmd_lock);
 return VAR_20;
}
