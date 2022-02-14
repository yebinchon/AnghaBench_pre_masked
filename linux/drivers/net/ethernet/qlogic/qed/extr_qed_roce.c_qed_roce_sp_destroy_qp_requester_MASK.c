
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct roce_destroy_qp_req_ramrod_data {int output_params_addr; } ;
struct roce_destroy_qp_req_output_params {int dummy; } ;
struct TYPE_6__ {struct roce_destroy_qp_req_ramrod_data roce_destroy_qp_req; } ;
struct qed_spq_entry {TYPE_2__ ramrod; } ;
struct qed_sp_init_data {int cid; int comp_mode; int opaque_fid; } ;
struct qed_rdma_qp {int icid; int req_offloaded; int orq_num_pages; int orq_phys_addr; struct roce_destroy_qp_req_output_params* orq; } ;
struct TYPE_5__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_4__* cdev; TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef int dma_addr_t ;
struct TYPE_8__ {TYPE_3__* pdev; } ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,char*) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int *,int,int *,int ) ;
 int FUNC_4 (int *,int,struct roce_destroy_qp_req_output_params*,int ) ;
 int FUNC_5 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

__attribute__((used)) static int FUNC_8(struct qed_hwfn *VAR_7,
         struct qed_rdma_qp *VAR_8)
{
 struct roce_destroy_qp_req_output_params *VAR_9;
 struct roce_destroy_qp_req_ramrod_data *VAR_10;
 struct qed_sp_init_data VAR_11;
 struct qed_spq_entry *VAR_12;
 dma_addr_t VAR_13;
 int VAR_14 = -VAR_0;

 FUNC_2(VAR_7, VAR_3, "icid = %08x\n", VAR_8->icid);

 if (!VAR_8->req_offloaded)
  return 0;

 VAR_9 = (struct roce_destroy_qp_req_output_params *)
         FUNC_3(&VAR_7->cdev->pdev->dev,
       sizeof(*VAR_9),
       &VAR_13, VAR_1);
 if (!VAR_9) {
  FUNC_1(VAR_7,
     "qed destroy requester failed: cannot allocate memory (ramrod)\n");
  return VAR_14;
 }


 FUNC_5(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.cid = VAR_8->icid + 1;
 VAR_11.opaque_fid = VAR_7->hw_info.opaque_fid;
 VAR_11.comp_mode = VAR_4;

 VAR_14 = FUNC_6(VAR_7, &VAR_12, VAR_6,
     VAR_2, &VAR_11);
 if (VAR_14)
  goto err;

 VAR_10 = &VAR_12->ramrod.roce_destroy_qp_req;
 FUNC_0(VAR_10->output_params_addr, VAR_13);

 VAR_14 = FUNC_7(VAR_7, VAR_12, ((void*)0));
 if (VAR_14)
  goto err;



 FUNC_4(&VAR_7->cdev->pdev->dev,
     VAR_8->orq_num_pages * VAR_5,
     VAR_8->orq, VAR_8->orq_phys_addr);

 VAR_8->req_offloaded = 0;

 FUNC_2(VAR_7, VAR_3, "Destroy requester, rc = %d\n", VAR_14);

err:
 FUNC_4(&VAR_7->cdev->pdev->dev, sizeof(*VAR_9),
     VAR_9, VAR_13);

 return VAR_14;
}
