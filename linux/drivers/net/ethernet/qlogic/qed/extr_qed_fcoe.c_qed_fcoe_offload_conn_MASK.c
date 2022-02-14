
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct qed_hash_fcoe_con {struct qed_fcoe_conn* con; } ;
struct TYPE_8__ {int addr_lo; int addr_mid; int addr_hi; } ;
struct TYPE_6__ {int addr_lo; int addr_mid; int addr_hi; } ;
struct qed_fcoe_params_offload {int* src_mac; int* dst_mac; TYPE_4__ d_id; TYPE_2__ s_id; int def_q_idx; int flags; int max_conc_seqs_c3; int vlan_tag; int rx_max_fc_pay_len; int rec_tov_timer_val; int e_d_tov_timer_val; int tx_max_fc_pay_len; int sq_next_page_addr; int sq_curr_page_addr; int sq_pbl_addr; } ;
struct TYPE_7__ {int addr_lo; int addr_mid; int addr_hi; } ;
struct TYPE_5__ {int addr_lo; int addr_mid; int addr_hi; } ;
struct qed_fcoe_conn {int src_mac_addr_hi; int src_mac_addr_mid; int src_mac_addr_lo; int dst_mac_addr_hi; int dst_mac_addr_mid; int dst_mac_addr_lo; TYPE_3__ d_id; TYPE_1__ s_id; int def_q_idx; int flags; int max_conc_seqs_c3; int vlan_tag; int rx_max_fc_pay_len; int rec_tov_timer_val; int e_d_tov_timer_val; int tx_max_fc_pay_len; int sq_next_page_addr; int sq_curr_page_addr; int sq_pbl_addr; } ;
struct qed_dev {int dummy; } ;


 int FUNC_0 (struct qed_dev*,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_dev*) ;
 int VAR_1 ;
 struct qed_hash_fcoe_con* FUNC_2 (struct qed_dev*,int ) ;
 int FUNC_3 (int ,struct qed_fcoe_conn*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct qed_dev *VAR_2,
     u32 VAR_3,
     struct qed_fcoe_params_offload *VAR_4)
{
 struct qed_hash_fcoe_con *VAR_5;
 struct qed_fcoe_conn *VAR_6;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_5) {
  FUNC_0(VAR_2, "Failed to find connection for handle %d\n",
     VAR_3);
  return -VAR_0;
 }


 VAR_6 = VAR_5->con;

 VAR_6->sq_pbl_addr = VAR_4->sq_pbl_addr;
 VAR_6->sq_curr_page_addr = VAR_4->sq_curr_page_addr;
 VAR_6->sq_next_page_addr = VAR_4->sq_next_page_addr;
 VAR_6->tx_max_fc_pay_len = VAR_4->tx_max_fc_pay_len;
 VAR_6->e_d_tov_timer_val = VAR_4->e_d_tov_timer_val;
 VAR_6->rec_tov_timer_val = VAR_4->rec_tov_timer_val;
 VAR_6->rx_max_fc_pay_len = VAR_4->rx_max_fc_pay_len;
 VAR_6->vlan_tag = VAR_4->vlan_tag;
 VAR_6->max_conc_seqs_c3 = VAR_4->max_conc_seqs_c3;
 VAR_6->flags = VAR_4->flags;
 VAR_6->def_q_idx = VAR_4->def_q_idx;

 VAR_6->src_mac_addr_hi = (VAR_4->src_mac[5] << 8) |
     VAR_4->src_mac[4];
 VAR_6->src_mac_addr_mid = (VAR_4->src_mac[3] << 8) |
     VAR_4->src_mac[2];
 VAR_6->src_mac_addr_lo = (VAR_4->src_mac[1] << 8) |
     VAR_4->src_mac[0];
 VAR_6->dst_mac_addr_hi = (VAR_4->dst_mac[5] << 8) |
     VAR_4->dst_mac[4];
 VAR_6->dst_mac_addr_mid = (VAR_4->dst_mac[3] << 8) |
     VAR_4->dst_mac[2];
 VAR_6->dst_mac_addr_lo = (VAR_4->dst_mac[1] << 8) |
     VAR_4->dst_mac[0];

 VAR_6->s_id.addr_hi = VAR_4->s_id.addr_hi;
 VAR_6->s_id.addr_mid = VAR_4->s_id.addr_mid;
 VAR_6->s_id.addr_lo = VAR_4->s_id.addr_lo;
 VAR_6->d_id.addr_hi = VAR_4->d_id.addr_hi;
 VAR_6->d_id.addr_mid = VAR_4->d_id.addr_mid;
 VAR_6->d_id.addr_lo = VAR_4->d_id.addr_lo;

 return FUNC_3(FUNC_1(VAR_2), VAR_6,
     VAR_1, ((void*)0));
}
