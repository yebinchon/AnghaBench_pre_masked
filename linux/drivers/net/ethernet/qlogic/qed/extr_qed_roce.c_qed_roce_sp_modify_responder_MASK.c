
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct roce_modify_qp_resp_ramrod_data {int dst_gid; int src_gid; void* mtu; int flow_label; void* p_key; int hop_limit; int traffic_class; int max_ird; scalar_t__ fields; scalar_t__ flags; } ;
struct TYPE_4__ {struct roce_modify_qp_resp_ramrod_data roce_modify_qp_resp; } ;
struct qed_spq_entry {TYPE_2__ ramrod; } ;
struct qed_sp_init_data {int cid; int comp_mode; int opaque_fid; } ;
struct qed_rdma_qp {int icid; int incoming_rdma_read_en; int incoming_rdma_write_en; int incoming_atomic_en; int e2e_flow_control_en; int min_rnr_nak_timer; int mtu; int flow_label; int pkey; int hop_limit_ttl; int traffic_class_tos; int max_rd_atomic_resp; int resp_offloaded; } ;
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
 int FUNC_3 (scalar_t__,int ,int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_7 (struct qed_rdma_qp*,int ,int ) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

__attribute__((used)) static int FUNC_10(struct qed_hwfn *VAR_20,
     struct qed_rdma_qp *VAR_21,
     bool VAR_22, u32 VAR_23)
{
 struct roce_modify_qp_resp_ramrod_data *VAR_24;
 struct qed_sp_init_data VAR_25;
 struct qed_spq_entry *VAR_26;
 int VAR_27;

 FUNC_1(VAR_20, VAR_1, "icid = %08x\n", VAR_21->icid);

 if (VAR_22 && !VAR_21->resp_offloaded)
  return 0;


 FUNC_6(&VAR_25, 0, sizeof(VAR_25));
 VAR_25.cid = VAR_21->icid;
 VAR_25.opaque_fid = VAR_20->hw_info.opaque_fid;
 VAR_25.comp_mode = VAR_7;

 VAR_27 = FUNC_8(VAR_20, &VAR_26,
     VAR_9,
     VAR_0, &VAR_25);
 if (VAR_27) {
  FUNC_0(VAR_20, "rc = %d\n", VAR_27);
  return VAR_27;
 }

 VAR_24 = &VAR_26->ramrod.roce_modify_qp_resp;

 VAR_24->flags = 0;

 FUNC_3(VAR_24->flags,
    VAR_15, VAR_22);

 FUNC_3(VAR_24->flags,
    VAR_18,
    VAR_21->incoming_rdma_read_en);

 FUNC_3(VAR_24->flags,
    VAR_19,
    VAR_21->incoming_rdma_write_en);

 FUNC_3(VAR_24->flags,
    VAR_11,
    VAR_21->incoming_atomic_en);

 FUNC_3(VAR_24->flags,
    VAR_8,
    VAR_21->e2e_flow_control_en);

 FUNC_3(VAR_24->flags,
    VAR_17,
    FUNC_2(VAR_23,
       VAR_3));

 FUNC_3(VAR_24->flags,
    VAR_16,
    FUNC_2(VAR_23, VAR_6));

 FUNC_3(VAR_24->flags,
    VAR_10,
    FUNC_2(VAR_23,
       VAR_4));

 FUNC_3(VAR_24->flags,
    VAR_12,
    FUNC_2(VAR_23,
       VAR_2));

 FUNC_3(VAR_24->flags,
    VAR_14,
    FUNC_2(VAR_23,
       VAR_5));

 VAR_24->fields = 0;
 FUNC_3(VAR_24->fields,
    VAR_13,
    VAR_21->min_rnr_nak_timer);

 VAR_24->max_ird = VAR_21->max_rd_atomic_resp;
 VAR_24->traffic_class = VAR_21->traffic_class_tos;
 VAR_24->hop_limit = VAR_21->hop_limit_ttl;
 VAR_24->p_key = FUNC_4(VAR_21->pkey);
 VAR_24->flow_label = FUNC_5(VAR_21->flow_label);
 VAR_24->mtu = FUNC_4(VAR_21->mtu);
 FUNC_7(VAR_21, VAR_24->src_gid, VAR_24->dst_gid);
 VAR_27 = FUNC_9(VAR_20, VAR_26, ((void*)0));

 FUNC_1(VAR_20, VAR_1, "Modify responder, rc = %d\n", VAR_27);
 return VAR_27;
}
