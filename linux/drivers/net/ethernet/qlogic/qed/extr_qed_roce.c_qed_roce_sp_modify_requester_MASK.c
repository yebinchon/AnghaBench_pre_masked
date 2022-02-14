
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct roce_modify_qp_req_ramrod_data {int dst_gid; int src_gid; void* mtu; void* ack_timeout_val; void* flow_label; void* p_key; int hop_limit; int traffic_class; int max_ord; scalar_t__ fields; scalar_t__ flags; } ;
struct TYPE_4__ {struct roce_modify_qp_req_ramrod_data roce_modify_qp_req; } ;
struct qed_spq_entry {TYPE_2__ ramrod; } ;
struct qed_sp_init_data {int cid; int comp_mode; int opaque_fid; } ;
struct qed_rdma_qp {int icid; int sqd_async; int retry_cnt; int rnr_retry_cnt; int mtu; int ack_timeout; int flow_label; int pkey; int hop_limit_ttl; int traffic_class_tos; int max_rd_atomic_req; int req_offloaded; } ;
struct TYPE_3__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;
typedef int init_data ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (scalar_t__,int ,int) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_7 (struct qed_rdma_qp*,int ,int ) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

__attribute__((used)) static int FUNC_10(struct qed_hwfn *VAR_21,
     struct qed_rdma_qp *VAR_22,
     bool VAR_23,
     bool VAR_24, u32 VAR_25)
{
 struct roce_modify_qp_req_ramrod_data *VAR_26;
 struct qed_sp_init_data VAR_27;
 struct qed_spq_entry *VAR_28;
 int VAR_29;

 FUNC_1(VAR_21, VAR_1, "icid = %08x\n", VAR_22->icid);

 if (VAR_24 && !(VAR_22->req_offloaded))
  return 0;


 FUNC_6(&VAR_27, 0, sizeof(VAR_27));
 VAR_27.cid = VAR_22->icid + 1;
 VAR_27.opaque_fid = VAR_21->hw_info.opaque_fid;
 VAR_27.comp_mode = VAR_8;

 VAR_29 = FUNC_8(VAR_21, &VAR_28,
     VAR_9,
     VAR_0, &VAR_27);
 if (VAR_29) {
  FUNC_0(VAR_21, "rc = %d\n", VAR_29);
  return VAR_29;
 }

 VAR_26 = &VAR_28->ramrod.roce_modify_qp_req;

 VAR_26->flags = 0;

 FUNC_3(VAR_26->flags,
    VAR_16, VAR_24);

 FUNC_3(VAR_26->flags,
    VAR_17, VAR_23);

 FUNC_3(VAR_26->flags,
    VAR_12,
    VAR_22->sqd_async);

 FUNC_3(VAR_26->flags,
    VAR_18,
    FUNC_2(VAR_25, VAR_5));

 FUNC_3(VAR_26->flags,
    VAR_11,
    FUNC_2(VAR_25,
       VAR_4));

 FUNC_3(VAR_26->flags,
    VAR_15,
    FUNC_2(VAR_25,
       VAR_2));

 FUNC_3(VAR_26->flags,
    VAR_20,
    FUNC_2(VAR_25,
       VAR_7));

 FUNC_3(VAR_26->flags,
    VAR_14,
    FUNC_2(VAR_25, VAR_6));

 FUNC_3(VAR_26->flags,
    VAR_10,
    FUNC_2(VAR_25,
       VAR_3));

 VAR_26->fields = 0;
 FUNC_3(VAR_26->fields,
    VAR_13, VAR_22->retry_cnt);

 FUNC_3(VAR_26->fields,
    VAR_19,
    VAR_22->rnr_retry_cnt);

 VAR_26->max_ord = VAR_22->max_rd_atomic_req;
 VAR_26->traffic_class = VAR_22->traffic_class_tos;
 VAR_26->hop_limit = VAR_22->hop_limit_ttl;
 VAR_26->p_key = FUNC_4(VAR_22->pkey);
 VAR_26->flow_label = FUNC_5(VAR_22->flow_label);
 VAR_26->ack_timeout_val = FUNC_5(VAR_22->ack_timeout);
 VAR_26->mtu = FUNC_4(VAR_22->mtu);
 FUNC_7(VAR_22, VAR_26->src_gid, VAR_26->dst_gid);
 VAR_29 = FUNC_9(VAR_21, VAR_28, ((void*)0));

 FUNC_1(VAR_21, VAR_1, "Modify requester, rc = %d\n", VAR_29);
 return VAR_29;
}
