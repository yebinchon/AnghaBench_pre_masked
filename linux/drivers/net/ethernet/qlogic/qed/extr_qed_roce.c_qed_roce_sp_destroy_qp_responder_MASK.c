
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct roce_destroy_qp_resp_ramrod_data {int output_params_addr; } ;
struct roce_destroy_qp_resp_output_params {int cq_prod; } ;
struct TYPE_8__ {struct roce_destroy_qp_resp_ramrod_data roce_destroy_qp_resp; } ;
struct qed_spq_entry {TYPE_3__ ramrod; } ;
struct qed_sp_init_data {int cid; int comp_mode; int opaque_fid; } ;
struct qed_rdma_qp {int icid; int cq_prod; int resp_offloaded; int irq_num_pages; int irq_phys_addr; struct roce_destroy_qp_resp_output_params* irq; } ;
struct TYPE_7__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_5__* cdev; TYPE_2__ hw_info; TYPE_1__* p_rdma_info; } ;
typedef int init_data ;
typedef int dma_addr_t ;
struct TYPE_10__ {TYPE_4__* pdev; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_6__ {int proto; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,char*,int) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int *,int,int *,int ) ;
 int FUNC_4 (int *,int,struct roce_destroy_qp_resp_output_params*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_7 (struct qed_hwfn*,int ) ;
 int FUNC_8 (struct qed_hwfn*,int ) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_spq_entry*) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_11 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

__attribute__((used)) static int FUNC_12(struct qed_hwfn *VAR_7,
         struct qed_rdma_qp *VAR_8,
         u32 *VAR_9)
{
 struct roce_destroy_qp_resp_output_params *VAR_10;
 struct roce_destroy_qp_resp_ramrod_data *VAR_11;
 struct qed_sp_init_data VAR_12;
 struct qed_spq_entry *VAR_13;
 dma_addr_t VAR_14;
 int VAR_15;

 FUNC_2(VAR_7, VAR_3, "icid = %08x\n", VAR_8->icid);
 *VAR_9 = VAR_8->cq_prod;

 if (!VAR_8->resp_offloaded) {



  u32 VAR_16;

  VAR_16 = VAR_8->icid -
        FUNC_7(VAR_7,
        VAR_7->p_rdma_info->proto);
  FUNC_8(VAR_7, (u16)VAR_16);

  return 0;
 }


 FUNC_6(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.cid = VAR_8->icid;
 VAR_12.opaque_fid = VAR_7->hw_info.opaque_fid;
 VAR_12.comp_mode = VAR_4;

 VAR_15 = FUNC_10(VAR_7, &VAR_13,
     VAR_6,
     VAR_2, &VAR_12);
 if (VAR_15)
  return VAR_15;

 VAR_11 = &VAR_13->ramrod.roce_destroy_qp_resp;

 VAR_10 = (struct roce_destroy_qp_resp_output_params *)
     FUNC_3(&VAR_7->cdev->pdev->dev, sizeof(*VAR_10),
          &VAR_14, VAR_1);

 if (!VAR_10) {
  VAR_15 = -VAR_0;
  FUNC_1(VAR_7,
     "qed destroy responder failed: cannot allocate memory (ramrod). rc = %d\n",
     VAR_15);
  FUNC_9(VAR_7, VAR_13);
  return VAR_15;
 }

 FUNC_0(VAR_11->output_params_addr, VAR_14);

 VAR_15 = FUNC_11(VAR_7, VAR_13, ((void*)0));
 if (VAR_15)
  goto err;

 *VAR_9 = FUNC_5(VAR_10->cq_prod);
 VAR_8->cq_prod = *VAR_9;


 FUNC_4(&VAR_7->cdev->pdev->dev,
     VAR_8->irq_num_pages * VAR_5,
     VAR_8->irq, VAR_8->irq_phys_addr);

 VAR_8->resp_offloaded = 0;

 FUNC_2(VAR_7, VAR_3, "Destroy responder, rc = %d\n", VAR_15);

err:
 FUNC_4(&VAR_7->cdev->pdev->dev,
     sizeof(struct roce_destroy_qp_resp_output_params),
     VAR_10, VAR_14);

 return VAR_15;
}
