
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


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_11__ {int error_type; } ;
struct core_rx_start_ramrod_data {int complete_event_flg; int report_outer_vlan; int main_func_queue; int mf_si_bcast_accept_all; int mf_si_mcast_accept_all; int gsi_offload_flag; TYPE_5__ action_on_error; int queue_id; int inner_vlan_stripping_en; int drop_ttl0_flg; int cqe_pbl_addr; void* num_of_pbl_pages; int bd_base; void* mtu; int sb_index; void* sb_id; } ;
struct TYPE_8__ {struct core_rx_start_ramrod_data core_rx_queue_start; } ;
struct qed_spq_entry {TYPE_2__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_9__ {int p_phys_addr; } ;
struct qed_ll2_rx_queue {int rcq_chain; TYPE_3__ rxq_chain; int rx_sb_index; } ;
struct TYPE_12__ {int conn_type; int gsi_enable; int rx_vlan_removal_en; int rx_drop_ttl0_flg; scalar_t__ mtu; } ;
struct qed_ll2_info {TYPE_6__ input; scalar_t__ main_func_queue; int queue_id; int cid; struct qed_ll2_rx_queue rx_queue; } ;
struct TYPE_7__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_4__* cdev; TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum qed_ll2_conn_type { ____Placeholder_qed_ll2_conn_type } qed_ll2_conn_type ;
struct TYPE_10__ {int mf_bits; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct qed_sp_init_data*,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct qed_hwfn*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct qed_hwfn *VAR_8,
         struct qed_ll2_info *VAR_9,
         u8 VAR_10)
{
 enum qed_ll2_conn_type VAR_11 = VAR_9->input.conn_type;
 struct qed_ll2_rx_queue *VAR_12 = &VAR_9->rx_queue;
 struct core_rx_start_ramrod_data *VAR_13 = ((void*)0);
 struct qed_spq_entry *VAR_14 = ((void*)0);
 struct qed_sp_init_data VAR_15;
 u16 VAR_16;
 int VAR_17 = 0;


 FUNC_2(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.cid = VAR_9->cid;
 VAR_15.opaque_fid = VAR_8->hw_info.opaque_fid;
 VAR_15.comp_mode = VAR_7;

 VAR_17 = FUNC_6(VAR_8, &VAR_14,
     VAR_0,
     VAR_1, &VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_13 = &VAR_14->ramrod.core_rx_queue_start;

 VAR_13->sb_id = FUNC_1(FUNC_5(VAR_8));
 VAR_13->sb_index = VAR_12->rx_sb_index;
 VAR_13->complete_event_flg = 1;

 VAR_13->mtu = FUNC_1(VAR_9->input.mtu);
 FUNC_0(VAR_13->bd_base, VAR_12->rxq_chain.p_phys_addr);
 VAR_16 = (u16)FUNC_3(&VAR_12->rcq_chain);
 VAR_13->num_of_pbl_pages = FUNC_1(VAR_16);
 FUNC_0(VAR_13->cqe_pbl_addr,
         FUNC_4(&VAR_12->rcq_chain));

 VAR_13->drop_ttl0_flg = VAR_9->input.rx_drop_ttl0_flg;
 VAR_13->inner_vlan_stripping_en =
  VAR_9->input.rx_vlan_removal_en;

 if (FUNC_8(VAR_6, &VAR_8->cdev->mf_bits) &&
     VAR_9->input.conn_type == VAR_2)
  VAR_13->report_outer_vlan = 1;
 VAR_13->queue_id = VAR_9->queue_id;
 VAR_13->main_func_queue = VAR_9->main_func_queue ? 1 : 0;

 if (FUNC_8(VAR_5, &VAR_8->cdev->mf_bits) &&
     VAR_13->main_func_queue && VAR_11 != VAR_4 &&
     VAR_11 != VAR_3) {
  VAR_13->mf_si_bcast_accept_all = 1;
  VAR_13->mf_si_mcast_accept_all = 1;
 } else {
  VAR_13->mf_si_bcast_accept_all = 0;
  VAR_13->mf_si_mcast_accept_all = 0;
 }

 VAR_13->action_on_error.error_type = VAR_10;
 VAR_13->gsi_offload_flag = VAR_9->input.gsi_enable;
 return FUNC_7(VAR_8, VAR_14, ((void*)0));
}
