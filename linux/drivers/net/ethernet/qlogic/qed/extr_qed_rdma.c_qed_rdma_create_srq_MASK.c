
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef void* u16 ;
struct TYPE_7__ {void* opaque_fid; void* srq_idx; } ;
struct rdma_srq_create_ramrod_data {int producers_addr; void* page_size; TYPE_3__ srq_id; void* pd_id; void* pages_in_srq_pbl; int pbl_base_addr; } ;
struct TYPE_6__ {struct rdma_srq_create_ramrod_data rdma_create_srq; } ;
struct qed_spq_entry {TYPE_2__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; void* opaque_fid; } ;
struct qed_rdma_create_srq_out_params {void* srq_id; } ;
struct qed_rdma_create_srq_in_params {void* num_pages; void* pd_id; void* page_size; int prod_pair_addr; int pbl_base_addr; } ;
struct TYPE_5__ {void* opaque_fid; } ;
struct qed_hwfn {TYPE_4__* p_rdma_info; TYPE_1__ hw_info; } ;
struct qed_bmap {int dummy; } ;
typedef enum qed_cxt_elem_type { ____Placeholder_qed_cxt_elem_type } qed_cxt_elem_type ;
struct TYPE_8__ {int lock; int proto; struct qed_bmap srq_map; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,char*) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_bmap*,scalar_t__) ;
 int FUNC_5 (struct qed_hwfn*,int,scalar_t__) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_bmap*,scalar_t__*) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(void *VAR_4,
      struct qed_rdma_create_srq_in_params *VAR_5,
      struct qed_rdma_create_srq_out_params *VAR_6)
{
 struct rdma_srq_create_ramrod_data *VAR_7;
 struct qed_sp_init_data VAR_8 = {};
 struct qed_hwfn *VAR_9 = VAR_4;
 enum qed_cxt_elem_type VAR_10;
 struct qed_spq_entry *VAR_11;
 u16 VAR_12, VAR_13;
 struct qed_bmap *VAR_14;
 u32 VAR_15;
 int VAR_16;

 VAR_14 = &VAR_9->p_rdma_info->srq_map;
 FUNC_9(&VAR_9->p_rdma_info->lock);
 VAR_16 = FUNC_6(VAR_9, VAR_14, &VAR_15);
 FUNC_10(&VAR_9->p_rdma_info->lock);

 if (VAR_16) {
  FUNC_1(VAR_9, "failed to allocate srq id\n");
  return VAR_16;
 }

 VAR_10 = VAR_0;
 VAR_16 = FUNC_5(VAR_9, VAR_10, VAR_15);
 if (VAR_16)
  goto err;

 VAR_13 = (u16)VAR_15;
 VAR_12 = VAR_9->hw_info.opaque_fid;

 VAR_12 = VAR_9->hw_info.opaque_fid;
 VAR_8.opaque_fid = VAR_12;
 VAR_8.comp_mode = VAR_2;

 VAR_16 = FUNC_7(VAR_9, &VAR_11,
     VAR_3,
     VAR_9->p_rdma_info->proto, &VAR_8);
 if (VAR_16)
  goto err;

 VAR_7 = &VAR_11->ramrod.rdma_create_srq;
 FUNC_0(VAR_7->pbl_base_addr, VAR_5->pbl_base_addr);
 VAR_7->pages_in_srq_pbl = FUNC_3(VAR_5->num_pages);
 VAR_7->pd_id = FUNC_3(VAR_5->pd_id);
 VAR_7->srq_id.srq_idx = FUNC_3(VAR_13);
 VAR_7->srq_id.opaque_fid = FUNC_3(VAR_12);
 VAR_7->page_size = FUNC_3(VAR_5->page_size);
 FUNC_0(VAR_7->producers_addr, VAR_5->prod_pair_addr);

 VAR_16 = FUNC_8(VAR_9, VAR_11, ((void*)0));
 if (VAR_16)
  goto err;

 VAR_6->srq_id = VAR_13;

 FUNC_2(VAR_9, VAR_1,
     "SRQ created Id = %x\n", VAR_6->srq_id);

 return VAR_16;

err:
 FUNC_9(&VAR_9->p_rdma_info->lock);
 FUNC_4(VAR_9, VAR_14, VAR_15);
 FUNC_10(&VAR_9->p_rdma_info->lock);

 return VAR_16;
}
