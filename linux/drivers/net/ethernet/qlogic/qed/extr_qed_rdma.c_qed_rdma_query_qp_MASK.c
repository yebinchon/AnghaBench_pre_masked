
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_rdma_query_qp_out_params {int sqd_async; int max_dest_rd_atomic; int max_rd_atomic; scalar_t__ pkey_index; int min_rnr_nak_timer; int retry_cnt; int rnr_retry; int timeout; int traffic_class_tos; int hop_limit_ttl; int flow_label; int dgid; int incoming_rdma_write_en; int incoming_rdma_read_en; int e2e_flow_control_en; int incoming_atomic_en; int dest_qp; int mtu; } ;
struct qed_rdma_qp {int icid; int sqd_async; int max_rd_atomic_resp; int max_rd_atomic_req; int min_rnr_nak_timer; int retry_cnt; int rnr_retry_cnt; int ack_timeout; int traffic_class_tos; int hop_limit_ttl; int flow_label; int dgid; int incoming_rdma_write_en; int incoming_rdma_read_en; int e2e_flow_control_en; int incoming_atomic_en; int dest_qp; int mtu; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int) ;
 scalar_t__ FUNC_1 (struct qed_hwfn*) ;
 int VAR_0 ;
 int FUNC_2 (struct qed_rdma_qp*,struct qed_rdma_query_qp_out_params*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_rdma_qp*,struct qed_rdma_query_qp_out_params*) ;

__attribute__((used)) static int FUNC_4(void *VAR_1,
        struct qed_rdma_qp *VAR_2,
        struct qed_rdma_query_qp_out_params *VAR_3)
{
 struct qed_hwfn *VAR_4 = (struct qed_hwfn *)VAR_1;
 int VAR_5 = 0;

 FUNC_0(VAR_4, VAR_0, "icid = %08x\n", VAR_2->icid);




 VAR_3->mtu = VAR_2->mtu;
 VAR_3->dest_qp = VAR_2->dest_qp;
 VAR_3->incoming_atomic_en = VAR_2->incoming_atomic_en;
 VAR_3->e2e_flow_control_en = VAR_2->e2e_flow_control_en;
 VAR_3->incoming_rdma_read_en = VAR_2->incoming_rdma_read_en;
 VAR_3->incoming_rdma_write_en = VAR_2->incoming_rdma_write_en;
 VAR_3->dgid = VAR_2->dgid;
 VAR_3->flow_label = VAR_2->flow_label;
 VAR_3->hop_limit_ttl = VAR_2->hop_limit_ttl;
 VAR_3->traffic_class_tos = VAR_2->traffic_class_tos;
 VAR_3->timeout = VAR_2->ack_timeout;
 VAR_3->rnr_retry = VAR_2->rnr_retry_cnt;
 VAR_3->retry_cnt = VAR_2->retry_cnt;
 VAR_3->min_rnr_nak_timer = VAR_2->min_rnr_nak_timer;
 VAR_3->pkey_index = 0;
 VAR_3->max_rd_atomic = VAR_2->max_rd_atomic_req;
 VAR_3->max_dest_rd_atomic = VAR_2->max_rd_atomic_resp;
 VAR_3->sqd_async = VAR_2->sqd_async;

 if (FUNC_1(VAR_4))
  FUNC_2(VAR_2, VAR_3);
 else
  VAR_5 = FUNC_3(VAR_4, VAR_2, VAR_3);

 FUNC_0(VAR_4, VAR_0, "Query QP, rc = %d\n", VAR_5);
 return VAR_5;
}
