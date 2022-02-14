
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_12__ {void* opaque_fid; void* srq_idx; } ;
struct TYPE_20__ {void* lo; void* hi; } ;
struct TYPE_18__ {void* lo; void* hi; } ;
struct roce_create_qp_resp_ramrod_data {int irq_num_pages; scalar_t__ stats_counter_id; TYPE_1__ srq_id; void* vlan_id; int udp_src_port; int local_mac_addr; int remote_mac_addr; void* dpi; void* low_latency_phy_queue; void* regular_latency_phy_queue; void* cq_cid; TYPE_9__ qp_handle_for_cqe; TYPE_7__ qp_handle_for_async; int dst_gid; int src_gid; int irq_pbl_addr; int rq_pbl_addr; void* rq_num_pages; void* pd; void* initial_psn; void* mtu; void* dst_qp_id; void* flow_label; void* p_key; int hop_limit; int traffic_class; int max_ird; scalar_t__ flags; } ;
struct TYPE_17__ {struct roce_create_qp_resp_ramrod_data roce_create_qp_resp; } ;
struct qed_spq_entry {TYPE_6__ ramrod; } ;
struct qed_sp_init_data {int opaque_fid; int comp_mode; scalar_t__ cid; } ;
struct TYPE_11__ {int hi; int lo; } ;
struct TYPE_19__ {int hi; int lo; } ;
struct qed_rdma_qp {int irq_num_pages; int incoming_rdma_read_en; int incoming_rdma_write_en; int incoming_atomic_en; int e2e_flow_control_en; int use_srq; int fmr_and_reserved_lkey; int min_rnr_nak_timer; int pkey; int flow_label; int dest_qp; int mtu; int rq_psn; int pd; int rq_num_pages; int rq_cq_id; int dpi; int vlan_id; int srq_id; int resp_offloaded; int irq_phys_addr; int irq; scalar_t__ icid; scalar_t__ cq_prod; scalar_t__ stats_queue; int udp_src_port; int local_mac_addr; int remote_mac_addr; TYPE_10__ qp_handle; TYPE_8__ qp_handle_async; int rq_pbl_ptr; int hop_limit_ttl; int traffic_class_tos; int max_rd_atomic_resp; int roce_mode; } ;
struct TYPE_16__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_4__* cdev; TYPE_2__* p_rdma_info; TYPE_5__ hw_info; } ;
typedef int init_data ;
typedef enum roce_flavor { ____Placeholder_roce_flavor } roce_flavor ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;
struct TYPE_15__ {TYPE_3__* pdev; } ;
struct TYPE_14__ {int dev; } ;
struct TYPE_13__ {int proto; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,char*,int) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*,scalar_t__,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct qed_hwfn*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (scalar_t__,int ,int) ;
 void* FUNC_5 (int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int *,int,int *,int ) ;
 int FUNC_8 (int *,int,int ,int ) ;
 int FUNC_9 (struct qed_sp_init_data*,int ,int) ;
 scalar_t__ FUNC_10 (struct qed_hwfn*,int) ;
 int FUNC_11 (struct qed_hwfn*,int ) ;
 int FUNC_12 (struct qed_hwfn*,int ) ;
 int FUNC_13 (struct qed_rdma_qp*,int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (struct qed_hwfn*,struct qed_rdma_qp*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct qed_hwfn*,scalar_t__) ;
 int FUNC_18 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_19 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

__attribute__((used)) static int FUNC_20(struct qed_hwfn *VAR_18,
     struct qed_rdma_qp *VAR_19)
{
 struct roce_create_qp_resp_ramrod_data *VAR_20;
 u16 VAR_21, VAR_22;
 struct qed_sp_init_data VAR_23;
 enum roce_flavor VAR_24;
 struct qed_spq_entry *VAR_25;
 enum protocol_type VAR_26;
 int VAR_27;
 u8 VAR_28;

 FUNC_2(VAR_18, VAR_4, "icid = %08x\n", VAR_19->icid);


 VAR_19->irq_num_pages = 1;
 VAR_19->irq = FUNC_7(&VAR_18->cdev->pdev->dev,
         VAR_8,
         &VAR_19->irq_phys_addr, VAR_2);
 if (!VAR_19->irq) {
  VAR_27 = -VAR_1;
  FUNC_1(VAR_18,
     "qed create responder failed: cannot allocate memory (irq). rc = %d\n",
     VAR_27);
  return VAR_27;
 }


 FUNC_9(&VAR_23, 0, sizeof(VAR_23));
 VAR_23.cid = VAR_19->icid;
 VAR_23.opaque_fid = VAR_18->hw_info.opaque_fid;
 VAR_23.comp_mode = VAR_7;

 VAR_27 = FUNC_18(VAR_18, &VAR_25, VAR_17,
     VAR_3, &VAR_23);
 if (VAR_27)
  goto err;

 VAR_20 = &VAR_25->ramrod.roce_create_qp_resp;

 VAR_20->flags = 0;

 VAR_24 = FUNC_16(VAR_19->roce_mode);
 FUNC_4(VAR_20->flags,
    VAR_15, VAR_24);

 FUNC_4(VAR_20->flags,
    VAR_12,
    VAR_19->incoming_rdma_read_en);

 FUNC_4(VAR_20->flags,
    VAR_13,
    VAR_19->incoming_rdma_write_en);

 FUNC_4(VAR_20->flags,
    VAR_9,
    VAR_19->incoming_atomic_en);

 FUNC_4(VAR_20->flags,
    VAR_10,
    VAR_19->e2e_flow_control_en);

 FUNC_4(VAR_20->flags,
    VAR_16, VAR_19->use_srq);

 FUNC_4(VAR_20->flags,
    VAR_14,
    VAR_19->fmr_and_reserved_lkey);

 FUNC_4(VAR_20->flags,
    VAR_11,
    VAR_19->min_rnr_nak_timer);

 VAR_20->max_ird = VAR_19->max_rd_atomic_resp;
 VAR_20->traffic_class = VAR_19->traffic_class_tos;
 VAR_20->hop_limit = VAR_19->hop_limit_ttl;
 VAR_20->irq_num_pages = VAR_19->irq_num_pages;
 VAR_20->p_key = FUNC_5(VAR_19->pkey);
 VAR_20->flow_label = FUNC_6(VAR_19->flow_label);
 VAR_20->dst_qp_id = FUNC_6(VAR_19->dest_qp);
 VAR_20->mtu = FUNC_5(VAR_19->mtu);
 VAR_20->initial_psn = FUNC_6(VAR_19->rq_psn);
 VAR_20->pd = FUNC_5(VAR_19->pd);
 VAR_20->rq_num_pages = FUNC_5(VAR_19->rq_num_pages);
 FUNC_0(VAR_20->rq_pbl_addr, VAR_19->rq_pbl_ptr);
 FUNC_0(VAR_20->irq_pbl_addr, VAR_19->irq_phys_addr);
 FUNC_13(VAR_19, VAR_20->src_gid, VAR_20->dst_gid);
 VAR_20->qp_handle_for_async.hi = FUNC_6(VAR_19->qp_handle_async.hi);
 VAR_20->qp_handle_for_async.lo = FUNC_6(VAR_19->qp_handle_async.lo);
 VAR_20->qp_handle_for_cqe.hi = FUNC_6(VAR_19->qp_handle.hi);
 VAR_20->qp_handle_for_cqe.lo = FUNC_6(VAR_19->qp_handle.lo);
 VAR_20->cq_cid = FUNC_6((VAR_18->hw_info.opaque_fid << 16) |
           VAR_19->rq_cq_id);

 VAR_28 = FUNC_15(VAR_18, VAR_19);
 VAR_21 = FUNC_12(VAR_18, VAR_28);
 VAR_22 = FUNC_11(VAR_18, VAR_28);
 FUNC_2(VAR_18, VAR_5,
     "qp icid %u pqs: regular_latency %u low_latency %u\n",
     VAR_19->icid, VAR_21 - VAR_0,
     VAR_22 - VAR_0);
 VAR_20->regular_latency_phy_queue =
     FUNC_5(VAR_21);
 VAR_20->low_latency_phy_queue =
     FUNC_5(VAR_22);

 VAR_20->dpi = FUNC_5(VAR_19->dpi);

 FUNC_14(VAR_20->remote_mac_addr, VAR_19->remote_mac_addr);
 FUNC_14(VAR_20->local_mac_addr, VAR_19->local_mac_addr);

 VAR_20->udp_src_port = VAR_19->udp_src_port;
 VAR_20->vlan_id = FUNC_5(VAR_19->vlan_id);
 VAR_20->srq_id.srq_idx = FUNC_5(VAR_19->srq_id);
 VAR_20->srq_id.opaque_fid = FUNC_5(VAR_18->hw_info.opaque_fid);

 VAR_20->stats_counter_id = FUNC_3(VAR_18, VAR_6) +
         VAR_19->stats_queue;

 VAR_27 = FUNC_19(VAR_18, VAR_25, ((void*)0));
 if (VAR_27)
  goto err;

 VAR_19->resp_offloaded = 1;
 VAR_19->cq_prod = 0;

 VAR_26 = VAR_18->p_rdma_info->proto;
 FUNC_17(VAR_18, VAR_19->icid -
         FUNC_10(VAR_18, VAR_26));

 return VAR_27;

err:
 FUNC_1(VAR_18, "create responder - failed, rc = %d\n", VAR_27);
 FUNC_8(&VAR_18->cdev->pdev->dev,
     VAR_19->irq_num_pages * VAR_8,
     VAR_19->irq, VAR_19->irq_phys_addr);

 return VAR_27;
}
