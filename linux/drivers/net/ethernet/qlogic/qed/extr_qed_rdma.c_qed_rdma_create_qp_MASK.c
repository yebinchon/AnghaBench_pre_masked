
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct regpair {int dummy; } ;
struct TYPE_8__ {void* lo; void* hi; } ;
struct TYPE_7__ {void* lo; void* hi; } ;
struct qed_rdma_qp {int sq_num_pages; int rq_num_pages; int req_offloaded; int resp_offloaded; int e2e_flow_control_en; int qpid; int icid; int stats_queue; scalar_t__ use_srq; int srq_id; int rq_pbl_ptr; int rq_cq_id; int sq_pbl_ptr; int sq_cq_id; int dpi; int pd; int fmr_and_reserved_lkey; int signal_all; TYPE_4__ qp_handle_async; TYPE_3__ qp_handle; int cur_state; } ;
struct qed_rdma_create_qp_out_params {int icid; int qp_id; } ;
struct qed_rdma_create_qp_in_params {int sq_num_pages; int rq_num_pages; int stats_queue; int srq_id; int rq_pbl_ptr; int rq_cq_id; int sq_pbl_ptr; int sq_cq_id; int dpi; int pd; int fmr_and_reserved_lkey; int signal_all; scalar_t__ use_srq; int qp_handle_async_lo; int qp_handle_async_hi; int qp_handle_lo; int qp_handle_hi; } ;
struct qed_hwfn {int cdev; TYPE_2__* p_rdma_info; } ;
struct TYPE_6__ {TYPE_1__* dev; int active; } ;
struct TYPE_5__ {int max_stats_queues; } ;


 int FUNC_0 (int ,char*,void*,struct qed_rdma_create_qp_in_params*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct qed_hwfn*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct qed_rdma_qp*) ;
 struct qed_rdma_qp* FUNC_6 (int,int ) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_rdma_qp*,struct qed_rdma_create_qp_out_params*) ;
 int FUNC_8 (struct qed_hwfn*,int*) ;

__attribute__((used)) static struct qed_rdma_qp *
FUNC_9(void *VAR_5,
     struct qed_rdma_create_qp_in_params *VAR_6,
     struct qed_rdma_create_qp_out_params *VAR_7)
{
 struct qed_hwfn *VAR_8 = (struct qed_hwfn *)VAR_5;
 struct qed_rdma_qp *VAR_9;
 u8 VAR_10;
 int VAR_11;

 if (!VAR_5 || !VAR_6 || !VAR_7 ||
     !VAR_8->p_rdma_info->active) {
  FUNC_0(VAR_8->cdev,
         "qed roce create qp failed due to NULL entry (rdma_cxt=%p, in=%p, out=%p, roce_info=?\n",
         VAR_5, VAR_6, VAR_7);
  return ((void*)0);
 }

 FUNC_2(VAR_8, VAR_3,
     "qed rdma create qp called with qp_handle = %08x%08x\n",
     VAR_6->qp_handle_hi, VAR_6->qp_handle_lo);


 VAR_10 = VAR_8->p_rdma_info->dev->max_stats_queues;
 if (VAR_6->stats_queue >= VAR_10) {
  FUNC_0(VAR_8->cdev,
         "qed rdma create qp failed due to invalid statistics queue %d. maximum is %d\n",
         VAR_6->stats_queue, VAR_10);
  return ((void*)0);
 }

 if (FUNC_3(VAR_8)) {
  if (VAR_6->sq_num_pages * sizeof(struct regpair) >
      VAR_2) {
   FUNC_1(VAR_8->cdev,
      "Sq num pages: %d exceeds maximum\n",
      VAR_6->sq_num_pages);
   return ((void*)0);
  }
  if (VAR_6->rq_num_pages * sizeof(struct regpair) >
      VAR_1) {
   FUNC_1(VAR_8->cdev,
      "Rq num pages: %d exceeds maximum\n",
      VAR_6->rq_num_pages);
   return ((void*)0);
  }
 }

 VAR_9 = FUNC_6(sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->cur_state = VAR_4;
 VAR_9->qp_handle.hi = FUNC_4(VAR_6->qp_handle_hi);
 VAR_9->qp_handle.lo = FUNC_4(VAR_6->qp_handle_lo);
 VAR_9->qp_handle_async.hi = FUNC_4(VAR_6->qp_handle_async_hi);
 VAR_9->qp_handle_async.lo = FUNC_4(VAR_6->qp_handle_async_lo);
 VAR_9->use_srq = VAR_6->use_srq;
 VAR_9->signal_all = VAR_6->signal_all;
 VAR_9->fmr_and_reserved_lkey = VAR_6->fmr_and_reserved_lkey;
 VAR_9->pd = VAR_6->pd;
 VAR_9->dpi = VAR_6->dpi;
 VAR_9->sq_cq_id = VAR_6->sq_cq_id;
 VAR_9->sq_num_pages = VAR_6->sq_num_pages;
 VAR_9->sq_pbl_ptr = VAR_6->sq_pbl_ptr;
 VAR_9->rq_cq_id = VAR_6->rq_cq_id;
 VAR_9->rq_num_pages = VAR_6->rq_num_pages;
 VAR_9->rq_pbl_ptr = VAR_6->rq_pbl_ptr;
 VAR_9->srq_id = VAR_6->srq_id;
 VAR_9->req_offloaded = 0;
 VAR_9->resp_offloaded = 0;
 VAR_9->e2e_flow_control_en = VAR_9->use_srq ? 0 : 1;
 VAR_9->stats_queue = VAR_6->stats_queue;

 if (FUNC_3(VAR_8)) {
  VAR_11 = FUNC_7(VAR_8, VAR_9, VAR_7);
  VAR_9->qpid = VAR_9->icid;
 } else {
  VAR_11 = FUNC_8(VAR_8, &VAR_9->icid);
  VAR_9->qpid = ((0xFF << 16) | VAR_9->icid);
 }

 if (VAR_11) {
  FUNC_5(VAR_9);
  return ((void*)0);
 }

 VAR_7->icid = VAR_9->icid;
 VAR_7->qp_id = VAR_9->qpid;

 FUNC_2(VAR_8, VAR_3, "Create QP, rc = %d\n", VAR_11);
 return VAR_9;
}
