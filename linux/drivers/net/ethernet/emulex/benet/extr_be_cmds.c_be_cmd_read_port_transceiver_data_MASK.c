
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {int size; int dma; struct be_cmd_resp_port_type* va; } ;
struct be_cmd_resp_port_type {int page_data; void* page_num; void* port; int hdr; } ;
struct be_cmd_req_port_type {int page_data; void* page_num; void* port; int hdr; } ;
struct be_adapter {scalar_t__ hba_port_num; TYPE_1__* pdev; int mcc_lock; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,int ,int ,int,struct be_mcc_wrb*,struct be_dma_mem*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,char*) ;
 struct be_cmd_resp_port_type* FUNC_4 (int *,int,int *,int ) ;
 int FUNC_5 (int *,int,struct be_cmd_resp_port_type*,int ) ;
 int FUNC_6 (scalar_t__*,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct be_mcc_wrb* FUNC_9 (struct be_adapter*) ;

int FUNC_10(struct be_adapter *VAR_8,
          u8 VAR_9, u8 *VAR_10)
{
 struct be_dma_mem VAR_11;
 struct be_mcc_wrb *VAR_12;
 struct be_cmd_req_port_type *VAR_13;
 int VAR_14;

 if (VAR_9 > VAR_7)
  return -VAR_2;

 VAR_11.size = sizeof(struct be_cmd_resp_port_type);
 VAR_11.va = FUNC_4(&VAR_8->pdev->dev, VAR_11.size, &VAR_11.dma,
        VAR_4);
 if (!VAR_11.va) {
  FUNC_3(&VAR_8->pdev->dev, "Memory allocation failed\n");
  return -VAR_3;
 }

 FUNC_7(&VAR_8->mcc_lock);

 VAR_12 = FUNC_9(VAR_8);
 if (!VAR_12) {
  VAR_14 = -VAR_1;
  goto err;
 }
 VAR_13 = VAR_11.va;

 FUNC_1(&VAR_13->hdr, VAR_0,
          VAR_5,
          VAR_11.size, VAR_12, &VAR_11);

 VAR_13->port = FUNC_2(VAR_8->hba_port_num);
 VAR_13->page_num = FUNC_2(VAR_9);
 VAR_14 = FUNC_0(VAR_8);
 if (!VAR_14) {
  struct be_cmd_resp_port_type *VAR_15 = VAR_11.va;

  FUNC_6(VAR_10, VAR_15->page_data, VAR_6);
 }
err:
 FUNC_8(&VAR_8->mcc_lock);
 FUNC_5(&VAR_8->pdev->dev, VAR_11.size, VAR_11.va, VAR_11.dma);
 return VAR_14;
}
