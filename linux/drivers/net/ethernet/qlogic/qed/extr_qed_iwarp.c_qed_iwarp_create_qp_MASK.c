
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


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_10__ {void* lo; void* hi; } ;
struct TYPE_9__ {void* opaque_fid; void* srq_idx; } ;
struct iwarp_create_qp_ramrod_data {void* physical_q1; void* physical_q0; void* dpi; void* cq_cid_for_rq; void* cq_cid_for_sq; TYPE_3__ qp_handle_for_cqe; TYPE_2__ srq_id; int rq_num_pages; int sq_num_pages; int pd; int flags; } ;
struct TYPE_8__ {struct iwarp_create_qp_ramrod_data iwarp_create_qp; } ;
struct qed_spq_entry {TYPE_1__ ramrod; } ;
struct qed_sp_init_data {int opaque_fid; int cid; int comp_mode; } ;
struct TYPE_11__ {int hi; int lo; } ;
struct qed_rdma_qp {int shared_queue_phys_addr; int icid; int srq_id; int sq_cq_id; int rq_cq_id; int dpi; scalar_t__ shared_queue; TYPE_4__ qp_handle; int rq_num_pages; int sq_num_pages; int pd; int use_srq; int incoming_atomic_en; int incoming_rdma_write_en; int incoming_rdma_read_en; int signal_all; int fmr_and_reserved_lkey; } ;
struct qed_rdma_create_qp_out_params {int sq_pbl_phys; int rq_pbl_phys; int * rq_pbl_virt; int * sq_pbl_virt; } ;
struct TYPE_12__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_7__* cdev; TYPE_5__ hw_info; } ;
typedef int init_data ;
struct TYPE_14__ {TYPE_6__* pdev; } ;
struct TYPE_13__ {int dev; } ;


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
 int FUNC_0 (int ,int ,int ) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int ,int*,int ) ;
 int FUNC_4 (int *,int ,scalar_t__,int) ;
 int FUNC_5 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_6 (struct qed_hwfn*,int ) ;
 int FUNC_7 (struct qed_hwfn*,scalar_t__*) ;
 int FUNC_8 (struct qed_hwfn*,scalar_t__) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

int FUNC_11(struct qed_hwfn *VAR_16,
   struct qed_rdma_qp *VAR_17,
   struct qed_rdma_create_qp_out_params *VAR_18)
{
 struct iwarp_create_qp_ramrod_data *VAR_19;
 struct qed_sp_init_data VAR_20;
 struct qed_spq_entry *VAR_21;
 u16 VAR_22;
 u32 VAR_23;
 int VAR_24;

 VAR_17->shared_queue = FUNC_3(&VAR_16->cdev->pdev->dev,
           VAR_10,
           &VAR_17->shared_queue_phys_addr,
           VAR_1);
 if (!VAR_17->shared_queue)
  return -VAR_0;

 VAR_18->sq_pbl_virt = (u8 *)VAR_17->shared_queue +
     VAR_11;
 VAR_18->sq_pbl_phys = VAR_17->shared_queue_phys_addr +
     VAR_11;
 VAR_18->rq_pbl_virt = (u8 *)VAR_17->shared_queue +
     VAR_9;
 VAR_18->rq_pbl_phys = VAR_17->shared_queue_phys_addr +
     VAR_9;

 VAR_24 = FUNC_7(VAR_16, &VAR_23);
 if (VAR_24)
  goto err1;

 VAR_17->icid = (u16)VAR_23;

 FUNC_5(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.opaque_fid = VAR_16->hw_info.opaque_fid;
 VAR_20.cid = VAR_17->icid;
 VAR_20.comp_mode = VAR_15;

 VAR_24 = FUNC_9(VAR_16, &VAR_21,
     VAR_8,
     VAR_14, &VAR_20);
 if (VAR_24)
  goto err2;

 VAR_19 = &VAR_21->ramrod.iwarp_create_qp;

 FUNC_0(VAR_19->flags,
    VAR_3,
    VAR_17->fmr_and_reserved_lkey);

 FUNC_0(VAR_19->flags,
    VAR_6, VAR_17->signal_all);

 FUNC_0(VAR_19->flags,
    VAR_4,
    VAR_17->incoming_rdma_read_en);

 FUNC_0(VAR_19->flags,
    VAR_5,
    VAR_17->incoming_rdma_write_en);

 FUNC_0(VAR_19->flags,
    VAR_2,
    VAR_17->incoming_atomic_en);

 FUNC_0(VAR_19->flags,
    VAR_7, VAR_17->use_srq);

 VAR_19->pd = VAR_17->pd;
 VAR_19->sq_num_pages = VAR_17->sq_num_pages;
 VAR_19->rq_num_pages = VAR_17->rq_num_pages;

 VAR_19->srq_id.srq_idx = FUNC_1(VAR_17->srq_id);
 VAR_19->srq_id.opaque_fid = FUNC_1(VAR_16->hw_info.opaque_fid);
 VAR_19->qp_handle_for_cqe.hi = FUNC_2(VAR_17->qp_handle.hi);
 VAR_19->qp_handle_for_cqe.lo = FUNC_2(VAR_17->qp_handle.lo);

 VAR_19->cq_cid_for_sq =
     FUNC_2((VAR_16->hw_info.opaque_fid << 16) | VAR_17->sq_cq_id);
 VAR_19->cq_cid_for_rq =
     FUNC_2((VAR_16->hw_info.opaque_fid << 16) | VAR_17->rq_cq_id);

 VAR_19->dpi = FUNC_1(VAR_17->dpi);

 VAR_22 = FUNC_6(VAR_16, VAR_13);
 VAR_19->physical_q0 = FUNC_1(VAR_22);
 VAR_22 = FUNC_6(VAR_16, VAR_12);
 VAR_19->physical_q1 = FUNC_1(VAR_22);

 VAR_24 = FUNC_10(VAR_16, VAR_21, ((void*)0));
 if (VAR_24)
  goto err2;

 return VAR_24;

err2:
 FUNC_8(VAR_16, VAR_23);
err1:
 FUNC_4(&VAR_16->cdev->pdev->dev,
     VAR_10,
     VAR_17->shared_queue, VAR_17->shared_queue_phys_addr);

 return VAR_24;
}
