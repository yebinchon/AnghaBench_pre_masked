
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int port; int ip; int mac; } ;
struct TYPE_3__ {int port; int ip; int mac; } ;
struct qed_iscsi_params_offload {int ack_frequency; int da_timeout_value; int rcv_wnd_scale; int snd_wnd_scale; int mss; int local_port; int remote_port; int tos_or_tc; int ttl; int initial_rcv_wnd; int max_rt_time; int ka_interval; int ka_timeout; int flow_label; int rt_cnt; int ka_probe_cnt; int snd_wnd_probe_cnt; int dup_ack_cnt; int rt_timeout_delta; int ka_timeout_delta; int total_rt; int ts_recent_age; int ts_recent; int rtt_var; int srtt; int ss_thresh; int cwnd; int snd_wl1; int rcv_wnd; int snd_wnd; int snd_max; int snd_next; int snd_una; int rcv_next; int dup_ack_theshold; int ka_max_probe_cnt; int default_cq; int ip_version; int tcp_flags; int vlan_id; int initial_ack; int sq_pbl_addr; int layer_code; TYPE_2__ dst; TYPE_1__ src; } ;
struct qed_iscsi_conn {int offl_flags; int ack_frequency; int da_timeout_value; int rcv_wnd_scale; int snd_wnd_scale; int mss; int local_port; int remote_port; int tos_or_tc; int ttl; int initial_rcv_wnd; int max_rt_time; int ka_interval; int ka_timeout; int flow_label; int rt_cnt; int ka_probe_cnt; int snd_wnd_probe_cnt; int dup_ack_cnt; int rt_timeout_delta; int ka_timeout_delta; int total_rt; int ts_recent_age; int ts_recent; int rtt_var; int srtt; int ss_thresh; int cwnd; int snd_wl1; int rcv_wnd; int snd_wnd; int snd_max; int snd_next; int snd_una; int rcv_next; int dup_ack_theshold; int ka_max_probe_cnt; int default_cq; int ip_version; int tcp_flags; int vlan_id; int initial_ack; int sq_pbl_addr; int layer_code; int remote_ip; int local_ip; int remote_mac; int local_mac; } ;
struct qed_hash_iscsi_con {struct qed_iscsi_conn* con; } ;
struct qed_dev {int dummy; } ;


 int FUNC_0 (struct qed_dev*,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_dev*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 struct qed_hash_iscsi_con* FUNC_4 (struct qed_dev*,int ) ;
 int FUNC_5 (int ,struct qed_iscsi_conn*,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct qed_dev *VAR_2,
      u32 VAR_3,
      struct qed_iscsi_params_offload *VAR_4)
{
 struct qed_hash_iscsi_con *VAR_5;
 struct qed_iscsi_conn *VAR_6;

 VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (!VAR_5) {
  FUNC_0(VAR_2, "Failed to find connection for handle %d\n",
     VAR_3);
  return -VAR_0;
 }


 VAR_6 = VAR_5->con;

 FUNC_2(VAR_6->local_mac, VAR_4->src.mac);
 FUNC_2(VAR_6->remote_mac, VAR_4->dst.mac);
 FUNC_3(VAR_6->local_ip, VAR_4->src.ip, sizeof(VAR_6->local_ip));
 FUNC_3(VAR_6->remote_ip, VAR_4->dst.ip, sizeof(VAR_6->remote_ip));
 VAR_6->local_port = VAR_4->src.port;
 VAR_6->remote_port = VAR_4->dst.port;

 VAR_6->layer_code = VAR_4->layer_code;
 VAR_6->sq_pbl_addr = VAR_4->sq_pbl_addr;
 VAR_6->initial_ack = VAR_4->initial_ack;
 VAR_6->vlan_id = VAR_4->vlan_id;
 VAR_6->tcp_flags = VAR_4->tcp_flags;
 VAR_6->ip_version = VAR_4->ip_version;
 VAR_6->default_cq = VAR_4->default_cq;
 VAR_6->ka_max_probe_cnt = VAR_4->ka_max_probe_cnt;
 VAR_6->dup_ack_theshold = VAR_4->dup_ack_theshold;
 VAR_6->rcv_next = VAR_4->rcv_next;
 VAR_6->snd_una = VAR_4->snd_una;
 VAR_6->snd_next = VAR_4->snd_next;
 VAR_6->snd_max = VAR_4->snd_max;
 VAR_6->snd_wnd = VAR_4->snd_wnd;
 VAR_6->rcv_wnd = VAR_4->rcv_wnd;
 VAR_6->snd_wl1 = VAR_4->snd_wl1;
 VAR_6->cwnd = VAR_4->cwnd;
 VAR_6->ss_thresh = VAR_4->ss_thresh;
 VAR_6->srtt = VAR_4->srtt;
 VAR_6->rtt_var = VAR_4->rtt_var;
 VAR_6->ts_recent = VAR_4->ts_recent;
 VAR_6->ts_recent_age = VAR_4->ts_recent_age;
 VAR_6->total_rt = VAR_4->total_rt;
 VAR_6->ka_timeout_delta = VAR_4->ka_timeout_delta;
 VAR_6->rt_timeout_delta = VAR_4->rt_timeout_delta;
 VAR_6->dup_ack_cnt = VAR_4->dup_ack_cnt;
 VAR_6->snd_wnd_probe_cnt = VAR_4->snd_wnd_probe_cnt;
 VAR_6->ka_probe_cnt = VAR_4->ka_probe_cnt;
 VAR_6->rt_cnt = VAR_4->rt_cnt;
 VAR_6->flow_label = VAR_4->flow_label;
 VAR_6->ka_timeout = VAR_4->ka_timeout;
 VAR_6->ka_interval = VAR_4->ka_interval;
 VAR_6->max_rt_time = VAR_4->max_rt_time;
 VAR_6->initial_rcv_wnd = VAR_4->initial_rcv_wnd;
 VAR_6->ttl = VAR_4->ttl;
 VAR_6->tos_or_tc = VAR_4->tos_or_tc;
 VAR_6->remote_port = VAR_4->remote_port;
 VAR_6->local_port = VAR_4->local_port;
 VAR_6->mss = VAR_4->mss;
 VAR_6->snd_wnd_scale = VAR_4->snd_wnd_scale;
 VAR_6->rcv_wnd_scale = VAR_4->rcv_wnd_scale;
 VAR_6->da_timeout_value = VAR_4->da_timeout_value;
 VAR_6->ack_frequency = VAR_4->ack_frequency;


 VAR_6->offl_flags = 0x1;

 return FUNC_5(FUNC_1(VAR_2), VAR_6,
      VAR_1, ((void*)0));
}
