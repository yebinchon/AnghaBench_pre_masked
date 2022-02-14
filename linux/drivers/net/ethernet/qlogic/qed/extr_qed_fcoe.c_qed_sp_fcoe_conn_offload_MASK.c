
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* u16 ;
struct TYPE_12__ {int addr_lo; int addr_mid; int addr_hi; } ;
struct TYPE_10__ {int addr_lo; int addr_mid; int addr_hi; } ;
struct fcoe_conn_offload_ramrod_data {int def_q_idx; int flags; TYPE_5__ d_id; int max_conc_seqs_c3; TYPE_3__ s_id; void* vlan_tag; void* rx_max_fc_pay_len; void* rec_rr_tov_timer_val; void* e_d_tov_timer_val; void* tx_max_fc_pay_len; void* src_mac_addr_hi; void* src_mac_addr_mid; void* src_mac_addr_lo; void* dst_mac_addr_hi; void* dst_mac_addr_mid; void* dst_mac_addr_lo; int respq_next_page_addr; int respq_curr_page_addr; int respq_pbl_addr; int xferq_next_page_addr; int xferq_curr_page_addr; int xferq_pbl_addr; int sq_next_page_addr; int sq_curr_page_addr; int sq_pbl_addr; void* conn_id; void* physical_q0; } ;
struct fcoe_conn_offload_ramrod_params {struct fcoe_conn_offload_ramrod_data offload_ramrod_data; } ;
struct TYPE_9__ {struct fcoe_conn_offload_ramrod_params fcoe_conn_ofld; } ;
struct qed_spq_entry {TYPE_2__ ramrod; } ;
struct qed_spq_comp_cb {int dummy; } ;
struct qed_sp_init_data {int comp_mode; struct qed_spq_comp_cb* p_comp_data; int opaque_fid; int cid; } ;
struct TYPE_8__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_7__* cdev; TYPE_1__ hw_info; } ;
struct TYPE_13__ {int addr_lo; int addr_mid; int addr_hi; } ;
struct TYPE_11__ {int addr_lo; int addr_mid; int addr_hi; } ;
struct qed_fcoe_conn {void* conn_id; void* dst_mac_addr_lo; void* dst_mac_addr_mid; void* dst_mac_addr_hi; void* src_mac_addr_lo; void* src_mac_addr_mid; void* src_mac_addr_hi; void* tx_max_fc_pay_len; void* e_d_tov_timer_val; void* rec_tov_timer_val; void* rx_max_fc_pay_len; void* vlan_tag; int def_q_idx; int flags; TYPE_6__ d_id; int max_conc_seqs_c3; TYPE_4__ s_id; int * confq_addr; int confq_pbl_addr; int * xferq_addr; int xferq_pbl_addr; int sq_next_page_addr; int sq_curr_page_addr; int sq_pbl_addr; void* physical_q0; int icid; } ;
typedef int init_data ;
typedef enum spq_mode { ____Placeholder_spq_mode } spq_mode ;
struct TYPE_14__ {int mf_bits; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (struct qed_sp_init_data*,int ,int) ;
 void* FUNC_4 (struct qed_hwfn*,int ) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int
FUNC_8(struct qed_hwfn *VAR_5,
    struct qed_fcoe_conn *VAR_6,
    enum spq_mode VAR_7,
    struct qed_spq_comp_cb *VAR_8)
{
 struct fcoe_conn_offload_ramrod_params *VAR_9 = ((void*)0);
 struct fcoe_conn_offload_ramrod_data *VAR_10;
 struct qed_spq_entry *VAR_11 = ((void*)0);
 struct qed_sp_init_data VAR_12;
 u16 VAR_13, VAR_14;
 int VAR_15;


 FUNC_3(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.cid = VAR_6->icid;
 VAR_12.opaque_fid = VAR_5->hw_info.opaque_fid;
 VAR_12.comp_mode = VAR_7;
 VAR_12.p_comp_data = VAR_8;

 VAR_15 = FUNC_5(VAR_5, &VAR_11,
     VAR_1,
     VAR_3, &VAR_12);
 if (VAR_15)
  return VAR_15;

 VAR_9 = &VAR_11->ramrod.fcoe_conn_ofld;
 VAR_10 = &VAR_9->offload_ramrod_data;


 VAR_13 = FUNC_4(VAR_5, VAR_2);
 VAR_6->physical_q0 = FUNC_2(VAR_13);
 VAR_10->physical_q0 = FUNC_2(VAR_13);

 VAR_10->conn_id = FUNC_2(VAR_6->conn_id);
 FUNC_0(VAR_10->sq_pbl_addr, VAR_6->sq_pbl_addr);
 FUNC_0(VAR_10->sq_curr_page_addr, VAR_6->sq_curr_page_addr);
 FUNC_0(VAR_10->sq_next_page_addr, VAR_6->sq_next_page_addr);
 FUNC_0(VAR_10->xferq_pbl_addr, VAR_6->xferq_pbl_addr);
 FUNC_0(VAR_10->xferq_curr_page_addr, VAR_6->xferq_addr[0]);
 FUNC_0(VAR_10->xferq_next_page_addr, VAR_6->xferq_addr[1]);

 FUNC_0(VAR_10->respq_pbl_addr, VAR_6->confq_pbl_addr);
 FUNC_0(VAR_10->respq_curr_page_addr, VAR_6->confq_addr[0]);
 FUNC_0(VAR_10->respq_next_page_addr, VAR_6->confq_addr[1]);

 VAR_10->dst_mac_addr_lo = FUNC_2(VAR_6->dst_mac_addr_lo);
 VAR_10->dst_mac_addr_mid = FUNC_2(VAR_6->dst_mac_addr_mid);
 VAR_10->dst_mac_addr_hi = FUNC_2(VAR_6->dst_mac_addr_hi);
 VAR_10->src_mac_addr_lo = FUNC_2(VAR_6->src_mac_addr_lo);
 VAR_10->src_mac_addr_mid = FUNC_2(VAR_6->src_mac_addr_mid);
 VAR_10->src_mac_addr_hi = FUNC_2(VAR_6->src_mac_addr_hi);

 VAR_14 = FUNC_2(VAR_6->tx_max_fc_pay_len);
 VAR_10->tx_max_fc_pay_len = VAR_14;
 VAR_14 = FUNC_2(VAR_6->e_d_tov_timer_val);
 VAR_10->e_d_tov_timer_val = VAR_14;
 VAR_14 = FUNC_2(VAR_6->rec_tov_timer_val);
 VAR_10->rec_rr_tov_timer_val = VAR_14;
 VAR_14 = FUNC_2(VAR_6->rx_max_fc_pay_len);
 VAR_10->rx_max_fc_pay_len = VAR_14;

 VAR_10->vlan_tag = FUNC_2(VAR_6->vlan_tag);
 VAR_10->s_id.addr_hi = VAR_6->s_id.addr_hi;
 VAR_10->s_id.addr_mid = VAR_6->s_id.addr_mid;
 VAR_10->s_id.addr_lo = VAR_6->s_id.addr_lo;
 VAR_10->max_conc_seqs_c3 = VAR_6->max_conc_seqs_c3;
 VAR_10->d_id.addr_hi = VAR_6->d_id.addr_hi;
 VAR_10->d_id.addr_mid = VAR_6->d_id.addr_mid;
 VAR_10->d_id.addr_lo = VAR_6->d_id.addr_lo;
 VAR_10->flags = VAR_6->flags;
 if (FUNC_7(VAR_4, &VAR_5->cdev->mf_bits))
  FUNC_1(VAR_10->flags,
     VAR_0, 1);
 VAR_10->def_q_idx = VAR_6->def_q_idx;

 return FUNC_6(VAR_5, VAR_11, ((void*)0));
}
