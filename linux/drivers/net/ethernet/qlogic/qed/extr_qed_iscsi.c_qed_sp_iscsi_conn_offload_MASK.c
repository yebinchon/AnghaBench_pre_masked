
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tcp_offload_params_opt2 {void* ka_interval; void* max_rt_time; void* ka_timeout; int ka_max_probe_cnt; void* cwnd; int syn_phy_addr_hi; int syn_phy_addr_lo; void* syn_ip_payload_length; int connect_mode; int rcv_wnd_scale; void* mss; void* local_port; void* remote_port; int tos_or_tc; int ttl; void* flow_label; void** local_ip; void** remote_ip; int ip_version; void* flags; void* vlan_id; void* remote_mac_addr_lo; void* remote_mac_addr_mid; void* remote_mac_addr_hi; void* local_mac_addr_lo; void* local_mac_addr_mid; void* local_mac_addr_hi; } ;
struct tcp_offload_params {int connect_mode; int ack_frequency; void* da_timeout_value; int rcv_wnd_scale; int snd_wnd_scale; void* mss; void* local_port; void* remote_port; int tos_or_tc; int ttl; void* initial_rcv_wnd; void* max_rt_time; void* ka_interval; void* ka_timeout; void* flow_label; int rt_cnt; int ka_probe_cnt; int snd_wnd_probe_cnt; int dup_ack_cnt; void* rt_timeout_delta; void* ka_timeout_delta; void* total_rt; void* ts_recent_age; void* ts_recent; void* rtt_var; void* srtt; void* ss_thresh; void* cwnd; void* snd_wl1; void* rcv_wnd; void* snd_wnd; void* snd_max; void* snd_next; void* snd_una; void* rcv_next; int dup_ack_theshold; int ka_max_probe_cnt; void** local_ip; void** remote_ip; int ip_version; void* flags; void* vlan_id; void* remote_mac_addr_lo; void* remote_mac_addr_mid; void* remote_mac_addr_hi; void* local_mac_addr_lo; void* local_mac_addr_mid; void* local_mac_addr_hi; } ;
struct TYPE_8__ {int flags; void* stat_sn; int default_cq; void* initial_ack; int uhq_pbl_addr; int xhq_pbl_addr; int r2tq_pbl_addr; int sq_pbl_addr; void* physical_q1; void* physical_q0; } ;
struct TYPE_7__ {int flags; int op_code; } ;
struct iscsi_spe_conn_offload {struct tcp_offload_params tcp; TYPE_4__ iscsi; void* fw_cid; void* conn_id; TYPE_3__ hdr; } ;
struct TYPE_6__ {struct iscsi_spe_conn_offload iscsi_conn_offload; } ;
struct qed_spq_entry {TYPE_2__ ramrod; } ;
struct qed_spq_comp_cb {int dummy; } ;
struct qed_sp_init_data {int comp_mode; struct qed_spq_comp_cb* p_comp_data; int opaque_fid; int cid; } ;
struct qed_iscsi_conn {int ka_interval; int max_rt_time; int ka_timeout; int ka_probe_cnt; int cwnd; int syn_phy_addr; int syn_ip_payload_length; int connect_mode; int rcv_wnd_scale; int mss; int local_port; int remote_port; int tos_or_tc; int ttl; int flow_label; int * local_ip; int * remote_ip; int ip_version; int tcp_flags; int vlan_id; scalar_t__ remote_mac; scalar_t__ local_mac; int ack_frequency; int da_timeout_value; int snd_wnd_scale; int initial_rcv_wnd; int rt_cnt; int snd_wnd_probe_cnt; int dup_ack_cnt; int rt_timeout_delta; int ka_timeout_delta; int total_rt; int ts_recent_age; int ts_recent; int rtt_var; int srtt; int ss_thresh; int snd_wl1; int rcv_wnd; int snd_wnd; int snd_max; int snd_next; int snd_una; int rcv_next; int dup_ack_theshold; int ka_max_probe_cnt; int stat_sn; int default_cq; int offl_flags; int initial_ack; int uhq; int xhq; int r2tq; int sq_pbl_addr; int icid; int conn_id; int layer_code; void* physical_q1; void* physical_q0; } ;
struct TYPE_5__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;
struct iscsi_spe_conn_offload_option2 {struct tcp_offload_params_opt2 tcp; } ;
typedef int init_data ;
typedef enum spq_mode { ____Placeholder_spq_mode } spq_mode ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int ) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct qed_hwfn*,int ) ;
 int FUNC_11 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_12 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;
 void* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct qed_hwfn *VAR_6,
         struct qed_iscsi_conn *VAR_7,
         enum spq_mode VAR_8,
         struct qed_spq_comp_cb *VAR_9)
{
 struct iscsi_spe_conn_offload *VAR_10 = ((void*)0);
 struct tcp_offload_params_opt2 *VAR_11 = ((void*)0);
 struct tcp_offload_params *VAR_12 = ((void*)0);
 struct qed_spq_entry *VAR_13 = ((void*)0);
 struct qed_sp_init_data VAR_14;
 dma_addr_t VAR_15;
 dma_addr_t VAR_16;
 dma_addr_t VAR_17;
 u16 VAR_18;
 int VAR_19 = 0;
 u32 VAR_20;
 u16 VAR_21;
 u16 *VAR_22;
 u8 VAR_23;


 FUNC_8(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.cid = VAR_7->icid;
 VAR_14.opaque_fid = VAR_6->hw_info.opaque_fid;
 VAR_14.comp_mode = VAR_8;
 VAR_14.p_comp_data = VAR_9;

 VAR_19 = FUNC_11(VAR_6, &VAR_13,
     VAR_1,
     VAR_5, &VAR_14);
 if (VAR_19)
  return VAR_19;

 VAR_10 = &VAR_13->ramrod.iscsi_conn_offload;


 VAR_18 = FUNC_10(VAR_6, VAR_4);
 VAR_7->physical_q0 = FUNC_5(VAR_18);
 VAR_10->iscsi.physical_q0 = FUNC_5(VAR_18);


 VAR_18 = FUNC_10(VAR_6, VAR_3);
 VAR_7->physical_q1 = FUNC_5(VAR_18);
 VAR_10->iscsi.physical_q1 = FUNC_5(VAR_18);

 VAR_10->hdr.op_code = VAR_1;
 FUNC_4(VAR_10->hdr.flags, VAR_2,
    VAR_7->layer_code);

 VAR_10->conn_id = FUNC_5(VAR_7->conn_id);
 VAR_10->fw_cid = FUNC_6(VAR_7->icid);

 FUNC_2(VAR_10->iscsi.sq_pbl_addr, VAR_7->sq_pbl_addr);

 VAR_15 = FUNC_9(&VAR_7->r2tq);
 FUNC_2(VAR_10->iscsi.r2tq_pbl_addr, VAR_15);

 VAR_16 = FUNC_9(&VAR_7->xhq);
 FUNC_2(VAR_10->iscsi.xhq_pbl_addr, VAR_16);

 VAR_17 = FUNC_9(&VAR_7->uhq);
 FUNC_2(VAR_10->iscsi.uhq_pbl_addr, VAR_17);

 VAR_10->iscsi.initial_ack = FUNC_6(VAR_7->initial_ack);
 VAR_10->iscsi.flags = VAR_7->offl_flags;
 VAR_10->iscsi.default_cq = VAR_7->default_cq;
 VAR_10->iscsi.stat_sn = FUNC_6(VAR_7->stat_sn);

 if (!FUNC_3(VAR_10->iscsi.flags,
         VAR_0)) {
  VAR_12 = &VAR_10->tcp;

  VAR_22 = (u16 *)VAR_7->local_mac;
  VAR_12->local_mac_addr_hi = FUNC_13(FUNC_7(VAR_22));
  VAR_12->local_mac_addr_mid = FUNC_13(FUNC_7(VAR_22 + 1));
  VAR_12->local_mac_addr_lo = FUNC_13(FUNC_7(VAR_22 + 2));

  VAR_22 = (u16 *)VAR_7->remote_mac;
  VAR_12->remote_mac_addr_hi = FUNC_13(FUNC_7(VAR_22));
  VAR_12->remote_mac_addr_mid = FUNC_13(FUNC_7(VAR_22 + 1));
  VAR_12->remote_mac_addr_lo = FUNC_13(FUNC_7(VAR_22 + 2));

  VAR_12->vlan_id = FUNC_5(VAR_7->vlan_id);

  VAR_12->flags = FUNC_5(VAR_7->tcp_flags);
  VAR_12->ip_version = VAR_7->ip_version;
  for (VAR_23 = 0; VAR_23 < 4; VAR_23++) {
   VAR_20 = VAR_7->remote_ip[VAR_23];
   VAR_12->remote_ip[VAR_23] = FUNC_6(VAR_20);
   VAR_20 = VAR_7->local_ip[VAR_23];
   VAR_12->local_ip[VAR_23] = FUNC_6(VAR_20);
  }
  VAR_12->ka_max_probe_cnt = VAR_7->ka_max_probe_cnt;
  VAR_12->dup_ack_theshold = VAR_7->dup_ack_theshold;

  VAR_12->rcv_next = FUNC_6(VAR_7->rcv_next);
  VAR_12->snd_una = FUNC_6(VAR_7->snd_una);
  VAR_12->snd_next = FUNC_6(VAR_7->snd_next);
  VAR_12->snd_max = FUNC_6(VAR_7->snd_max);
  VAR_12->snd_wnd = FUNC_6(VAR_7->snd_wnd);
  VAR_12->rcv_wnd = FUNC_6(VAR_7->rcv_wnd);
  VAR_12->snd_wl1 = FUNC_6(VAR_7->snd_wl1);
  VAR_12->cwnd = FUNC_6(VAR_7->cwnd);
  VAR_12->ss_thresh = FUNC_6(VAR_7->ss_thresh);
  VAR_12->srtt = FUNC_5(VAR_7->srtt);
  VAR_12->rtt_var = FUNC_5(VAR_7->rtt_var);
  VAR_12->ts_recent = FUNC_6(VAR_7->ts_recent);
  VAR_12->ts_recent_age = FUNC_6(VAR_7->ts_recent_age);
  VAR_12->total_rt = FUNC_6(VAR_7->total_rt);
  VAR_20 = VAR_7->ka_timeout_delta;
  VAR_12->ka_timeout_delta = FUNC_6(VAR_20);
  VAR_20 = VAR_7->rt_timeout_delta;
  VAR_12->rt_timeout_delta = FUNC_6(VAR_20);
  VAR_12->dup_ack_cnt = VAR_7->dup_ack_cnt;
  VAR_12->snd_wnd_probe_cnt = VAR_7->snd_wnd_probe_cnt;
  VAR_12->ka_probe_cnt = VAR_7->ka_probe_cnt;
  VAR_12->rt_cnt = VAR_7->rt_cnt;
  VAR_12->flow_label = FUNC_6(VAR_7->flow_label);
  VAR_12->ka_timeout = FUNC_6(VAR_7->ka_timeout);
  VAR_12->ka_interval = FUNC_6(VAR_7->ka_interval);
  VAR_12->max_rt_time = FUNC_6(VAR_7->max_rt_time);
  VAR_20 = VAR_7->initial_rcv_wnd;
  VAR_12->initial_rcv_wnd = FUNC_6(VAR_20);
  VAR_12->ttl = VAR_7->ttl;
  VAR_12->tos_or_tc = VAR_7->tos_or_tc;
  VAR_12->remote_port = FUNC_5(VAR_7->remote_port);
  VAR_12->local_port = FUNC_5(VAR_7->local_port);
  VAR_12->mss = FUNC_5(VAR_7->mss);
  VAR_12->snd_wnd_scale = VAR_7->snd_wnd_scale;
  VAR_12->rcv_wnd_scale = VAR_7->rcv_wnd_scale;
  VAR_21 = VAR_7->da_timeout_value;
  VAR_12->da_timeout_value = FUNC_5(VAR_21);
  VAR_12->ack_frequency = VAR_7->ack_frequency;
  VAR_12->connect_mode = VAR_7->connect_mode;
 } else {
  VAR_11 =
      &((struct iscsi_spe_conn_offload_option2 *)VAR_10)->tcp;

  VAR_22 = (u16 *)VAR_7->local_mac;
  VAR_11->local_mac_addr_hi = FUNC_13(FUNC_7(VAR_22));
  VAR_11->local_mac_addr_mid = FUNC_13(FUNC_7(VAR_22 + 1));
  VAR_11->local_mac_addr_lo = FUNC_13(FUNC_7(VAR_22 + 2));

  VAR_22 = (u16 *)VAR_7->remote_mac;
  VAR_11->remote_mac_addr_hi = FUNC_13(FUNC_7(VAR_22));
  VAR_11->remote_mac_addr_mid = FUNC_13(FUNC_7(VAR_22 + 1));
  VAR_11->remote_mac_addr_lo = FUNC_13(FUNC_7(VAR_22 + 2));

  VAR_11->vlan_id = FUNC_5(VAR_7->vlan_id);
  VAR_11->flags = FUNC_5(VAR_7->tcp_flags);

  VAR_11->ip_version = VAR_7->ip_version;
  for (VAR_23 = 0; VAR_23 < 4; VAR_23++) {
   VAR_20 = VAR_7->remote_ip[VAR_23];
   VAR_11->remote_ip[VAR_23] = FUNC_6(VAR_20);
   VAR_20 = VAR_7->local_ip[VAR_23];
   VAR_11->local_ip[VAR_23] = FUNC_6(VAR_20);
  }

  VAR_11->flow_label = FUNC_6(VAR_7->flow_label);
  VAR_11->ttl = VAR_7->ttl;
  VAR_11->tos_or_tc = VAR_7->tos_or_tc;
  VAR_11->remote_port = FUNC_5(VAR_7->remote_port);
  VAR_11->local_port = FUNC_5(VAR_7->local_port);
  VAR_11->mss = FUNC_5(VAR_7->mss);
  VAR_11->rcv_wnd_scale = VAR_7->rcv_wnd_scale;
  VAR_11->connect_mode = VAR_7->connect_mode;
  VAR_21 = VAR_7->syn_ip_payload_length;
  VAR_11->syn_ip_payload_length = FUNC_5(VAR_21);
  VAR_11->syn_phy_addr_lo = FUNC_1(VAR_7->syn_phy_addr);
  VAR_11->syn_phy_addr_hi = FUNC_0(VAR_7->syn_phy_addr);
  VAR_11->cwnd = FUNC_6(VAR_7->cwnd);
  VAR_11->ka_max_probe_cnt = VAR_7->ka_probe_cnt;
  VAR_11->ka_timeout = FUNC_6(VAR_7->ka_timeout);
  VAR_11->max_rt_time = FUNC_6(VAR_7->max_rt_time);
  VAR_11->ka_interval = FUNC_6(VAR_7->ka_interval);
 }

 return FUNC_12(VAR_6, VAR_13, ((void*)0));
}
