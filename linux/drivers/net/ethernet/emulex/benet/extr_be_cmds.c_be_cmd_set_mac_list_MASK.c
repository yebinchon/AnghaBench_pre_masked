
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {int size; int dma; struct be_cmd_req_set_mac_list* va; } ;
struct TYPE_4__ {int domain; } ;
struct be_cmd_req_set_mac_list {int mac_count; int mac; TYPE_2__ hdr; } ;
struct be_adapter {int mcc_lock; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int,struct be_mcc_wrb*,struct be_dma_mem*) ;
 struct be_cmd_req_set_mac_list* FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (int *,int,struct be_cmd_req_set_mac_list*,int ) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (struct be_dma_mem*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct be_mcc_wrb* FUNC_8 (struct be_adapter*) ;

int FUNC_9(struct be_adapter *VAR_6, u8 *VAR_7,
   u8 VAR_8, u32 VAR_9)
{
 struct be_mcc_wrb *VAR_10;
 struct be_cmd_req_set_mac_list *VAR_11;
 int VAR_12;
 struct be_dma_mem VAR_13;

 FUNC_5(&VAR_13, 0, sizeof(struct be_dma_mem));
 VAR_13.size = sizeof(struct be_cmd_req_set_mac_list);
 VAR_13.va = FUNC_2(&VAR_6->pdev->dev, VAR_13.size, &VAR_13.dma,
        VAR_4);
 if (!VAR_13.va)
  return -VAR_2;

 FUNC_6(&VAR_6->mcc_lock);

 VAR_10 = FUNC_8(VAR_6);
 if (!VAR_10) {
  VAR_12 = -VAR_1;
  goto err;
 }

 VAR_11 = VAR_13.va;
 FUNC_1(&VAR_11->hdr, VAR_0,
          VAR_5, sizeof(*VAR_11),
          VAR_10, &VAR_13);

 VAR_11->hdr.domain = VAR_9;
 VAR_11->mac_count = VAR_8;
 if (VAR_8)
  FUNC_4(VAR_11->mac, VAR_7, VAR_3*VAR_8);

 VAR_12 = FUNC_0(VAR_6);

err:
 FUNC_3(&VAR_6->pdev->dev, VAR_13.size, VAR_13.va, VAR_13.dma);
 FUNC_7(&VAR_6->mcc_lock);
 return VAR_12;
}
