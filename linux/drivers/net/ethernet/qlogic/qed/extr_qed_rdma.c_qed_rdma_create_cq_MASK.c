
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {void* lo; void* hi; } ;
struct rdma_create_cq_ramrod_data {int toggle_bit; int int_timeout; scalar_t__ cnq_id; void* pbl_num_pages; int pbl_addr; void* max_cqes; int is_two_level_pbl; void* dpi; TYPE_3__ cq_handle; } ;
struct TYPE_5__ {struct rdma_create_cq_ramrod_data rdma_create_cq; } ;
struct qed_spq_entry {TYPE_2__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; scalar_t__ cid; } ;
struct qed_rdma_info {int lock; int cq_map; int proto; } ;
struct qed_rdma_create_cq_in_params {int int_timeout; scalar_t__ cnq_id; int pbl_num_pages; int pbl_ptr; int cq_size; int pbl_two_level; int dpi; int cq_handle_lo; int cq_handle_hi; } ;
struct TYPE_4__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_1__ hw_info; struct qed_rdma_info* p_rdma_info; } ;
typedef int init_data ;
typedef enum qed_rdma_toggle_bit { ____Placeholder_qed_rdma_toggle_bit } qed_rdma_toggle_bit ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,char*,int) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct qed_hwfn*,int ) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_7 (struct qed_hwfn*,int *,scalar_t__) ;
 int FUNC_8 (struct qed_hwfn*,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (struct qed_hwfn*,int ) ;
 int FUNC_10 (struct qed_hwfn*,int *,scalar_t__*) ;
 int FUNC_11 (struct qed_hwfn*,scalar_t__) ;
 int FUNC_12 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_13 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(void *VAR_5,
         struct qed_rdma_create_cq_in_params *VAR_6,
         u16 *VAR_7)
{
 struct qed_hwfn *VAR_8 = (struct qed_hwfn *)VAR_5;
 struct qed_rdma_info *VAR_9 = VAR_8->p_rdma_info;
 struct rdma_create_cq_ramrod_data *VAR_10;
 enum qed_rdma_toggle_bit VAR_11;
 struct qed_sp_init_data VAR_12;
 struct qed_spq_entry *VAR_13;
 u32 VAR_14, VAR_15;
 int VAR_16;

 FUNC_2(VAR_8, VAR_1, "cq_handle = %08x%08x\n",
     VAR_6->cq_handle_hi, VAR_6->cq_handle_lo);


 FUNC_14(&VAR_9->lock);
 VAR_16 = FUNC_10(VAR_8, &VAR_9->cq_map, &VAR_14);
 FUNC_15(&VAR_9->lock);

 if (VAR_16) {
  FUNC_1(VAR_8, "Can't create CQ, rc = %d\n", VAR_16);
  return VAR_16;
 }

 VAR_15 = FUNC_9(VAR_8,
      VAR_9->proto);
 *VAR_7 = VAR_14 + VAR_15;


 VAR_16 = FUNC_8(VAR_8, VAR_0, *VAR_7);
 if (VAR_16)
  goto err;


 FUNC_6(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.cid = *VAR_7;
 VAR_12.opaque_fid = VAR_8->hw_info.opaque_fid;
 VAR_12.comp_mode = VAR_3;


 VAR_16 = FUNC_12(VAR_8, &VAR_13,
     VAR_4,
     VAR_9->proto, &VAR_12);
 if (VAR_16)
  goto err;

 VAR_10 = &VAR_13->ramrod.rdma_create_cq;

 VAR_10->cq_handle.hi = FUNC_5(VAR_6->cq_handle_hi);
 VAR_10->cq_handle.lo = FUNC_5(VAR_6->cq_handle_lo);
 VAR_10->dpi = FUNC_4(VAR_6->dpi);
 VAR_10->is_two_level_pbl = VAR_6->pbl_two_level;
 VAR_10->max_cqes = FUNC_5(VAR_6->cq_size);
 FUNC_0(VAR_10->pbl_addr, VAR_6->pbl_ptr);
 VAR_10->pbl_num_pages = FUNC_4(VAR_6->pbl_num_pages);
 VAR_10->cnq_id = (u8)FUNC_3(VAR_8, VAR_2) +
      VAR_6->cnq_id;
 VAR_10->int_timeout = VAR_6->int_timeout;


 VAR_11 = FUNC_11(VAR_8, *VAR_7);

 VAR_10->toggle_bit = VAR_11;

 VAR_16 = FUNC_13(VAR_8, VAR_13, ((void*)0));
 if (VAR_16) {

  FUNC_11(VAR_8, *VAR_7);
  goto err;
 }

 FUNC_2(VAR_8, VAR_1, "Created CQ, rc = %d\n", VAR_16);
 return VAR_16;

err:

 FUNC_14(&VAR_9->lock);
 FUNC_7(VAR_8, &VAR_9->cq_map, VAR_14);
 FUNC_15(&VAR_9->lock);
 FUNC_1(VAR_8, "Create CQ failed, rc = %d\n", VAR_16);

 return VAR_16;
}
