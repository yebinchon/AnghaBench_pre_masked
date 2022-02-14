
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qed_sp_init_data {int tpa_max_size; int tpa_min_size_to_cont; int tpa_min_size_to_start; int tpa_ipv4_en_flg; int tpa_ipv6_en_flg; int tpa_pkt_split_flg; int tpa_gro_consistent_flg; int tpa_max_aggs_num; int max_buff_num; int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_4__ {void* state; } ;
struct vport_start_ramrod_data {int ctl_frame_mac_check_en; int ctl_frame_ethtype_check_en; int sw_fid; int tx_switching_en; struct qed_sp_init_data tpa_param; TYPE_2__ rx_mode; int untagged; int drop_ttl0_en; int inner_vlan_removal_en; int handle_ptp_pkts; void* mtu; int vport_id; } ;
struct TYPE_3__ {struct vport_start_ramrod_data vport_start; } ;
struct qed_spq_entry {TYPE_1__ ramrod; } ;
struct qed_sp_vport_start_params {int mtu; int tpa_mode; int concrete_fid; int check_ethtype; int check_mac; int tx_switching; int max_buffers_per_cqe; int only_untagged; int drop_ttl0; int remove_inner_vlan; int handle_ptp_pkts; int opaque_fid; int vport_id; } ;
struct qed_hwfn {int cdev; } ;
struct eth_vport_tpa_param {int dummy; } ;
typedef int init_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int FUNC_0 (int,int ,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct qed_hwfn*,int ,int *) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_6 (struct qed_hwfn*) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

int FUNC_8(struct qed_hwfn *VAR_7,
      struct qed_sp_vport_start_params *VAR_8)
{
 struct vport_start_ramrod_data *VAR_9 = ((void*)0);
 struct qed_spq_entry *VAR_10 = ((void*)0);
 struct qed_sp_init_data VAR_11;
 u8 VAR_12 = 0;
 int VAR_13 = -VAR_0;
 u16 VAR_14 = 0;

 VAR_13 = FUNC_4(VAR_7, VAR_8->vport_id, &VAR_12);
 if (VAR_13)
  return VAR_13;

 FUNC_2(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.cid = FUNC_6(VAR_7);
 VAR_11.opaque_fid = VAR_8->opaque_fid;
 VAR_11.comp_mode = VAR_6;

 VAR_13 = FUNC_5(VAR_7, &VAR_10,
     VAR_1,
     VAR_5, &VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_9 = &VAR_10->ramrod.vport_start;
 VAR_9->vport_id = VAR_12;

 VAR_9->mtu = FUNC_1(VAR_8->mtu);
 VAR_9->handle_ptp_pkts = VAR_8->handle_ptp_pkts;
 VAR_9->inner_vlan_removal_en = VAR_8->remove_inner_vlan;
 VAR_9->drop_ttl0_en = VAR_8->drop_ttl0;
 VAR_9->untagged = VAR_8->only_untagged;

 FUNC_0(VAR_14, VAR_4, 1);
 FUNC_0(VAR_14, VAR_3, 1);

 VAR_9->rx_mode.state = FUNC_1(VAR_14);


 FUNC_2(&VAR_9->tpa_param, 0, sizeof(struct eth_vport_tpa_param));

 VAR_9->tpa_param.max_buff_num = VAR_8->max_buffers_per_cqe;

 switch (VAR_8->tpa_mode) {
 case 128:
  VAR_9->tpa_param.tpa_max_aggs_num = VAR_2;
  VAR_9->tpa_param.tpa_max_size = (u16)-1;
  VAR_9->tpa_param.tpa_min_size_to_cont = VAR_8->mtu / 2;
  VAR_9->tpa_param.tpa_min_size_to_start = VAR_8->mtu / 2;
  VAR_9->tpa_param.tpa_ipv4_en_flg = 1;
  VAR_9->tpa_param.tpa_ipv6_en_flg = 1;
  VAR_9->tpa_param.tpa_pkt_split_flg = 1;
  VAR_9->tpa_param.tpa_gro_consistent_flg = 1;
  break;
 default:
  break;
 }

 VAR_9->tx_switching_en = VAR_8->tx_switching;

 VAR_9->ctl_frame_mac_check_en = !!VAR_8->check_mac;
 VAR_9->ctl_frame_ethtype_check_en = !!VAR_8->check_ethtype;


 VAR_9->sw_fid = FUNC_3(VAR_7->cdev,
        VAR_8->concrete_fid);

 return FUNC_7(VAR_7, VAR_10, ((void*)0));
}
