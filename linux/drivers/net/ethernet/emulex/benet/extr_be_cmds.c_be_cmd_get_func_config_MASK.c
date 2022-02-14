
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct be_resources {int dummy; } ;
struct be_nic_res_desc {int vf_num; int pf_num; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {int size; int dma; struct be_cmd_resp_get_func_config* va; } ;
struct TYPE_4__ {int version; } ;
struct be_cmd_resp_get_func_config {int func_param; int desc_count; TYPE_2__ hdr; } ;
struct be_cmd_req_get_func_config {int func_param; int desc_count; TYPE_2__ hdr; } ;
struct be_adapter {TYPE_1__* pdev; int mbox_lock; int vf_num; int pf_num; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct be_resources*,struct be_nic_res_desc*) ;
 struct be_nic_res_desc* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int,struct be_mcc_wrb*,struct be_dma_mem*) ;
 int FUNC_4 (int *,char*) ;
 struct be_cmd_resp_get_func_config* FUNC_5 (int *,int,int *,int ) ;
 int FUNC_6 (int *,int,struct be_cmd_resp_get_func_config*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct be_dma_mem*,int ,int) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct be_adapter*) ;
 struct be_mcc_wrb* FUNC_12 (struct be_adapter*) ;

int FUNC_13(struct be_adapter *VAR_7, struct be_resources *VAR_8)
{
 struct be_mcc_wrb *VAR_9;
 struct be_cmd_req_get_func_config *VAR_10;
 int VAR_11;
 struct be_dma_mem VAR_12;

 if (FUNC_9(&VAR_7->mbox_lock))
  return -1;

 FUNC_8(&VAR_12, 0, sizeof(struct be_dma_mem));
 VAR_12.size = sizeof(struct be_cmd_resp_get_func_config);
 VAR_12.va = FUNC_5(&VAR_7->pdev->dev, VAR_12.size, &VAR_12.dma,
        VAR_4);
 if (!VAR_12.va) {
  FUNC_4(&VAR_7->pdev->dev, "Memory alloc failure\n");
  VAR_11 = -VAR_3;
  goto err;
 }

 VAR_9 = FUNC_12(VAR_7);
 if (!VAR_9) {
  VAR_11 = -VAR_1;
  goto err;
 }

 VAR_10 = VAR_12.va;

 FUNC_3(&VAR_10->hdr, VAR_0,
          VAR_5,
          VAR_12.size, VAR_9, &VAR_12);

 if (FUNC_11(VAR_7))
  VAR_10->hdr.version = 1;

 VAR_11 = FUNC_2(VAR_7);
 if (!VAR_11) {
  struct be_cmd_resp_get_func_config *VAR_13 = VAR_12.va;
  u32 VAR_14 = FUNC_7(VAR_13->desc_count);
  struct be_nic_res_desc *VAR_15;





  VAR_15 = FUNC_1(VAR_13->func_param, VAR_14,
         VAR_6);
  if (!VAR_15) {
   VAR_11 = -VAR_2;
   goto err;
  }


  VAR_7->pf_num = VAR_15->pf_num;
  VAR_7->vf_num = VAR_15->vf_num;

  if (VAR_8)
   FUNC_0(VAR_8, VAR_15);
 }
err:
 FUNC_10(&VAR_7->mbox_lock);
 if (VAR_12.va)
  FUNC_6(&VAR_7->pdev->dev, VAR_12.size, VAR_12.va,
      VAR_12.dma);
 return VAR_11;
}
