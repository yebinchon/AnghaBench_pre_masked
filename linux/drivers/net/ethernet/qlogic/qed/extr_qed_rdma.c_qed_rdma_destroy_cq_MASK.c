
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rdma_destroy_cq_ramrod_data {int output_params_addr; } ;
struct rdma_destroy_cq_output_params {int cnq_num; } ;
struct TYPE_7__ {struct rdma_destroy_cq_ramrod_data rdma_destroy_cq; } ;
struct qed_spq_entry {TYPE_2__ ramrod; } ;
struct qed_sp_init_data {int cid; int comp_mode; int opaque_fid; } ;
struct qed_rdma_destroy_cq_out_params {int num_cq_notif; } ;
struct qed_rdma_destroy_cq_in_params {int icid; } ;
struct TYPE_6__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_5__* cdev; TYPE_3__* p_rdma_info; TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;
typedef int dma_addr_t ;
struct TYPE_10__ {TYPE_4__* pdev; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {int proto; int lock; int cq_map; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,char*) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *,int,int *,int ) ;
 int FUNC_4 (int *,int,struct rdma_destroy_cq_output_params*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_7 (struct qed_hwfn*,int *,int) ;
 int FUNC_8 (struct qed_hwfn*,int) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_spq_entry**,int ,int,struct qed_sp_init_data*) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(void *VAR_5,
      struct qed_rdma_destroy_cq_in_params *VAR_6,
      struct qed_rdma_destroy_cq_out_params *VAR_7)
{
 struct qed_hwfn *VAR_8 = (struct qed_hwfn *)VAR_5;
 struct rdma_destroy_cq_output_params *VAR_9;
 struct rdma_destroy_cq_ramrod_data *VAR_10;
 struct qed_sp_init_data VAR_11;
 struct qed_spq_entry *VAR_12;
 dma_addr_t VAR_13;
 enum protocol_type VAR_14;
 int VAR_15 = -VAR_0;

 FUNC_2(VAR_8, VAR_2, "icid = %08x\n", VAR_6->icid);

 VAR_9 =
     (struct rdma_destroy_cq_output_params *)
     FUNC_3(&VAR_8->cdev->pdev->dev,
          sizeof(struct rdma_destroy_cq_output_params),
          &VAR_13, VAR_1);
 if (!VAR_9) {
  FUNC_1(VAR_8,
     "qed destroy cq failed: cannot allocate memory (ramrod)\n");
  return VAR_15;
 }


 FUNC_6(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.cid = VAR_6->icid;
 VAR_11.opaque_fid = VAR_8->hw_info.opaque_fid;
 VAR_11.comp_mode = VAR_3;
 VAR_14 = VAR_8->p_rdma_info->proto;

 VAR_15 = FUNC_9(VAR_8, &VAR_12,
     VAR_4,
     VAR_14, &VAR_11);
 if (VAR_15)
  goto err;

 VAR_10 = &VAR_12->ramrod.rdma_destroy_cq;
 FUNC_0(VAR_10->output_params_addr, VAR_13);

 VAR_15 = FUNC_10(VAR_8, VAR_12, ((void*)0));
 if (VAR_15)
  goto err;

 VAR_7->num_cq_notif = FUNC_5(VAR_9->cnq_num);

 FUNC_4(&VAR_8->cdev->pdev->dev,
     sizeof(struct rdma_destroy_cq_output_params),
     VAR_9, VAR_13);


 FUNC_11(&VAR_8->p_rdma_info->lock);

 FUNC_7(VAR_8,
       &VAR_8->p_rdma_info->cq_map,
       (VAR_6->icid -
        FUNC_8(VAR_8, VAR_14)));

 FUNC_12(&VAR_8->p_rdma_info->lock);

 FUNC_2(VAR_8, VAR_2, "Destroyed CQ, rc = %d\n", VAR_15);
 return VAR_15;

err: FUNC_4(&VAR_8->cdev->pdev->dev,
     sizeof(struct rdma_destroy_cq_output_params),
     VAR_9, VAR_13);

 return VAR_15;
}
