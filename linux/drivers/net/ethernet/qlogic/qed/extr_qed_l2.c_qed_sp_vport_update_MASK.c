
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct vport_update_ramrod_data_cmn {int ctl_frame_ethtype_check_en; int ctl_frame_mac_check_en; void* update_anti_spoofing_en_flg; int anti_spoofing_en; int update_tx_switching_en_flg; int tx_switching_en; int silent_vlan_removal_en; int update_default_vlan_flg; int default_vlan; void* update_default_vlan_en_flg; int default_vlan_en; void* update_inner_vlan_removal_en_flg; int inner_vlan_removal_en; void* update_accept_any_vlan_flg; int accept_any_vlan; int update_tx_active_flg; int tx_active_flg; int update_rx_active_flg; int rx_active_flg; void* vport_id; } ;
struct vport_update_ramrod_data {struct vport_update_ramrod_data_cmn common; } ;
struct TYPE_2__ {struct vport_update_ramrod_data vport_update; } ;
struct qed_spq_entry {TYPE_1__ ramrod; } ;
struct qed_spq_comp_cb {int dummy; } ;
struct qed_sp_vport_update_params {int sge_tpa_params; int accept_flags; int ethtype_chk_en; int mac_chk_en; scalar_t__ update_ctl_frame_check; void* update_anti_spoofing_en_flg; int anti_spoofing_en; int update_tx_switching_flg; int tx_switching_flg; int silent_vlan_removal_flg; int update_default_vlan_flg; int default_vlan; void* update_default_vlan_enable_flg; int default_vlan_enable_flg; void* update_inner_vlan_removal_flg; int inner_vlan_removal_flg; void* update_accept_any_vlan_flg; int accept_any_vlan; int update_vport_active_tx_flg; int vport_active_tx_flg; int update_vport_active_rx_flg; int vport_active_rx_flg; int opaque_fid; int vport_id; struct qed_rss_params* rss_params; } ;
struct qed_sp_init_data {int comp_mode; struct qed_spq_comp_cb* p_comp_data; int opaque_fid; int cid; } ;
struct qed_rss_params {int dummy; } ;
struct qed_hwfn {int cdev; } ;
typedef int init_data ;
typedef enum spq_mode { ____Placeholder_spq_mode } spq_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,int ,void**) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_spq_entry*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_6 (struct qed_hwfn*,struct vport_update_ramrod_data*,int ) ;
 int FUNC_7 (struct qed_hwfn*,struct vport_update_ramrod_data*,struct qed_sp_vport_update_params*) ;
 int FUNC_8 (struct qed_hwfn*,struct vport_update_ramrod_data*,struct qed_rss_params*) ;
 int FUNC_9 (struct qed_hwfn*,struct vport_update_ramrod_data*,int ) ;
 int FUNC_10 (struct qed_hwfn*) ;
 int FUNC_11 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;
 int FUNC_12 (struct qed_hwfn*,struct qed_sp_vport_update_params*) ;

int FUNC_13(struct qed_hwfn *VAR_3,
   struct qed_sp_vport_update_params *VAR_4,
   enum spq_mode VAR_5,
   struct qed_spq_comp_cb *VAR_6)
{
 struct qed_rss_params *VAR_7 = VAR_4->rss_params;
 struct vport_update_ramrod_data_cmn *VAR_8;
 struct qed_sp_init_data VAR_9;
 struct vport_update_ramrod_data *VAR_10 = ((void*)0);
 struct qed_spq_entry *VAR_11 = ((void*)0);
 u8 VAR_12 = 0, VAR_13;
 int VAR_14 = -VAR_0;

 if (FUNC_0(VAR_3->cdev)) {
  VAR_14 = FUNC_12(VAR_3, VAR_4);
  return VAR_14;
 }

 VAR_14 = FUNC_3(VAR_3, VAR_4->vport_id, &VAR_12);
 if (VAR_14)
  return VAR_14;

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.cid = FUNC_10(VAR_3);
 VAR_9.opaque_fid = VAR_4->opaque_fid;
 VAR_9.comp_mode = VAR_5;
 VAR_9.p_comp_data = VAR_6;

 VAR_14 = FUNC_5(VAR_3, &VAR_11,
     VAR_1,
     VAR_2, &VAR_9);
 if (VAR_14)
  return VAR_14;


 VAR_10 = &VAR_11->ramrod.vport_update;
 VAR_8 = &VAR_10->common;

 VAR_8->vport_id = VAR_12;
 VAR_8->rx_active_flg = VAR_4->vport_active_rx_flg;
 VAR_8->update_rx_active_flg = VAR_4->update_vport_active_rx_flg;
 VAR_8->tx_active_flg = VAR_4->vport_active_tx_flg;
 VAR_8->update_tx_active_flg = VAR_4->update_vport_active_tx_flg;
 VAR_8->accept_any_vlan = VAR_4->accept_any_vlan;
 VAR_13 = VAR_4->update_accept_any_vlan_flg;
 VAR_8->update_accept_any_vlan_flg = VAR_13;

 VAR_8->inner_vlan_removal_en = VAR_4->inner_vlan_removal_flg;
 VAR_13 = VAR_4->update_inner_vlan_removal_flg;
 VAR_8->update_inner_vlan_removal_en_flg = VAR_13;

 VAR_8->default_vlan_en = VAR_4->default_vlan_enable_flg;
 VAR_13 = VAR_4->update_default_vlan_enable_flg;
 VAR_8->update_default_vlan_en_flg = VAR_13;

 VAR_8->default_vlan = FUNC_1(VAR_4->default_vlan);
 VAR_8->update_default_vlan_flg = VAR_4->update_default_vlan_flg;

 VAR_8->silent_vlan_removal_en = VAR_4->silent_vlan_removal_flg;

 VAR_10->common.tx_switching_en = VAR_4->tx_switching_flg;
 VAR_8->update_tx_switching_en_flg = VAR_4->update_tx_switching_flg;

 VAR_8->anti_spoofing_en = VAR_4->anti_spoofing_en;
 VAR_13 = VAR_4->update_anti_spoofing_en_flg;
 VAR_10->common.update_anti_spoofing_en_flg = VAR_13;

 VAR_14 = FUNC_8(VAR_3, VAR_10, VAR_7);
 if (VAR_14) {
  FUNC_4(VAR_3, VAR_11);
  return VAR_14;
 }

 if (VAR_4->update_ctl_frame_check) {
  VAR_8->ctl_frame_mac_check_en = VAR_4->mac_chk_en;
  VAR_8->ctl_frame_ethtype_check_en = VAR_4->ethtype_chk_en;
 }


 FUNC_7(VAR_3, VAR_10, VAR_4);

 FUNC_6(VAR_3, VAR_10, VAR_4->accept_flags);
 FUNC_9(VAR_3, VAR_10, VAR_4->sge_tpa_params);
 return FUNC_11(VAR_3, VAR_11, ((void*)0));
}
