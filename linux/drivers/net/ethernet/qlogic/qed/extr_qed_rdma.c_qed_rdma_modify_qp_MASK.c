
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qed_rdma_qp {int cur_state; int sqd_async; int min_rnr_nak_timer; int rnr_retry_cnt; int retry_cnt; int ack_timeout; int max_rd_atomic_resp; int max_rd_atomic_req; int sq_psn; int rq_psn; int * local_mac_addr; int * remote_mac_addr; int lb_indication; int mtu; int vlan_id; scalar_t__ udp_src_port; int dgid; int sgid; int hop_limit_ttl; int flow_label; int traffic_class_tos; int dest_qp; int e2e_flow_control_en; int pkey; int roce_mode; int incoming_atomic_en; int incoming_rdma_write_en; int incoming_rdma_read_en; int icid; } ;
struct qed_rdma_modify_qp_in_params {int new_state; int modify_flags; int sqd_async; int min_rnr_nak_timer; int rnr_retry_cnt; int retry_cnt; int ack_timeout; int max_rd_atomic_resp; int max_rd_atomic_req; int sq_psn; int rq_psn; int * local_mac_addr; scalar_t__ use_local_mac; int * remote_mac_addr; int lb_indication; int mtu; int vlan_id; int dgid; int sgid; int hop_limit_ttl; int flow_label; int traffic_class_tos; int dest_qp; int e2e_flow_control_en; int pkey; int roce_mode; int incoming_atomic_en; int incoming_rdma_write_en; int incoming_rdma_read_en; } ;
struct TYPE_2__ {int hw_mac_addr; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;
typedef enum qed_roce_qp_state { ____Placeholder_qed_roce_qp_state } qed_roce_qp_state ;
typedef enum qed_iwarp_qp_state { ____Placeholder_qed_iwarp_qp_state } qed_iwarp_qp_state ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct qed_hwfn*) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_rdma_qp*,int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_rdma_qp*,int,struct qed_rdma_modify_qp_in_params*) ;

__attribute__((used)) static int FUNC_7(void *VAR_17,
         struct qed_rdma_qp *VAR_18,
         struct qed_rdma_modify_qp_in_params *VAR_19)
{
 struct qed_hwfn *VAR_20 = (struct qed_hwfn *)VAR_17;
 enum qed_roce_qp_state VAR_21;
 int VAR_22 = 0;

 FUNC_0(VAR_20, VAR_1, "icid = %08x params->new_state=%d\n",
     VAR_18->icid, VAR_19->new_state);

 if (VAR_22) {
  FUNC_0(VAR_20, VAR_1, "rc = %d\n", VAR_22);
  return VAR_22;
 }

 if (FUNC_1(VAR_19->modify_flags,
        VAR_5)) {
  VAR_18->incoming_rdma_read_en = VAR_19->incoming_rdma_read_en;
  VAR_18->incoming_rdma_write_en = VAR_19->incoming_rdma_write_en;
  VAR_18->incoming_atomic_en = VAR_19->incoming_atomic_en;
 }


 if (FUNC_1(VAR_19->modify_flags, VAR_14))
  VAR_18->roce_mode = VAR_19->roce_mode;
 if (FUNC_1(VAR_19->modify_flags, VAR_11))
  VAR_18->pkey = VAR_19->pkey;
 if (FUNC_1(VAR_19->modify_flags,
        VAR_9))
  VAR_18->e2e_flow_control_en = VAR_19->e2e_flow_control_en;
 if (FUNC_1(VAR_19->modify_flags, VAR_8))
  VAR_18->dest_qp = VAR_19->dest_qp;
 if (FUNC_1(VAR_19->modify_flags,
        VAR_7)) {




  VAR_18->traffic_class_tos = VAR_19->traffic_class_tos;
  VAR_18->flow_label = VAR_19->flow_label;
  VAR_18->hop_limit_ttl = VAR_19->hop_limit_ttl;

  VAR_18->sgid = VAR_19->sgid;
  VAR_18->dgid = VAR_19->dgid;
  VAR_18->udp_src_port = 0;
  VAR_18->vlan_id = VAR_19->vlan_id;
  VAR_18->mtu = VAR_19->mtu;
  VAR_18->lb_indication = VAR_19->lb_indication;
  FUNC_3((u8 *)&VAR_18->remote_mac_addr[0],
         (u8 *)&VAR_19->remote_mac_addr[0], VAR_0);
  if (VAR_19->use_local_mac) {
   FUNC_3((u8 *)&VAR_18->local_mac_addr[0],
          (u8 *)&VAR_19->local_mac_addr[0], VAR_0);
  } else {
   FUNC_3((u8 *)&VAR_18->local_mac_addr[0],
          (u8 *)&VAR_20->hw_info.hw_mac_addr, VAR_0);
  }
 }
 if (FUNC_1(VAR_19->modify_flags, VAR_15))
  VAR_18->rq_psn = VAR_19->rq_psn;
 if (FUNC_1(VAR_19->modify_flags, VAR_16))
  VAR_18->sq_psn = VAR_19->sq_psn;
 if (FUNC_1(VAR_19->modify_flags,
        VAR_2))
  VAR_18->max_rd_atomic_req = VAR_19->max_rd_atomic_req;
 if (FUNC_1(VAR_19->modify_flags,
        VAR_3))
  VAR_18->max_rd_atomic_resp = VAR_19->max_rd_atomic_resp;
 if (FUNC_1(VAR_19->modify_flags,
        VAR_6))
  VAR_18->ack_timeout = VAR_19->ack_timeout;
 if (FUNC_1(VAR_19->modify_flags, VAR_12))
  VAR_18->retry_cnt = VAR_19->retry_cnt;
 if (FUNC_1(VAR_19->modify_flags,
        VAR_13))
  VAR_18->rnr_retry_cnt = VAR_19->rnr_retry_cnt;
 if (FUNC_1(VAR_19->modify_flags,
        VAR_10))
  VAR_18->min_rnr_nak_timer = VAR_19->min_rnr_nak_timer;

 VAR_18->sqd_async = VAR_19->sqd_async;

 VAR_21 = VAR_18->cur_state;
 if (FUNC_1(VAR_19->modify_flags,
        VAR_4)) {
  VAR_18->cur_state = VAR_19->new_state;
  FUNC_0(VAR_20, VAR_1, "qp->cur_state=%d\n",
      VAR_18->cur_state);
 }

 if (FUNC_2(VAR_20)) {
  enum qed_iwarp_qp_state VAR_23 =
      FUNC_5(VAR_18->cur_state);

  VAR_22 = FUNC_4(VAR_20, VAR_18, VAR_23, 0);
 } else {
  VAR_22 = FUNC_6(VAR_20, VAR_18, VAR_21, VAR_19);
 }

 FUNC_0(VAR_20, VAR_1, "Modify QP, rc = %d\n", VAR_22);
 return VAR_22;
}
