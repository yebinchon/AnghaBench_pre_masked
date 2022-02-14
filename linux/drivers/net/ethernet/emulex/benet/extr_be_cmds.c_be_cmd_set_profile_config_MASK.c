
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct be_mcc_wrb {int member_0; } ;
struct be_dma_mem {int size; int dma; struct be_cmd_req_set_profile_config* va; } ;
struct TYPE_4__ {void* domain; void* version; } ;
struct be_cmd_req_set_profile_config {int desc; int desc_count; TYPE_2__ hdr; } ;
struct be_adapter {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct be_adapter*,struct be_mcc_wrb*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int,struct be_mcc_wrb*,struct be_dma_mem*) ;
 int FUNC_2 (int) ;
 struct be_cmd_req_set_profile_config* FUNC_3 (int *,int,int *,int ) ;
 int FUNC_4 (int *,int,struct be_cmd_req_set_profile_config*,int ) ;
 int FUNC_5 (int ,void*,int) ;
 int FUNC_6 (struct be_dma_mem*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct be_adapter *VAR_4, void *VAR_5,
         int VAR_6, int VAR_7, u8 VAR_8, u8 VAR_9)
{
 struct be_cmd_req_set_profile_config *VAR_10;
 struct be_mcc_wrb VAR_11 = {0};
 struct be_dma_mem VAR_12;
 int VAR_13;

 FUNC_6(&VAR_12, 0, sizeof(struct be_dma_mem));
 VAR_12.size = sizeof(struct be_cmd_req_set_profile_config);
 VAR_12.va = FUNC_3(&VAR_4->pdev->dev, VAR_12.size, &VAR_12.dma,
        VAR_2);
 if (!VAR_12.va)
  return -VAR_1;

 VAR_10 = VAR_12.va;
 FUNC_1(&VAR_10->hdr, VAR_0,
          VAR_3, VAR_12.size,
          &VAR_11, &VAR_12);
 VAR_10->hdr.version = VAR_8;
 VAR_10->hdr.domain = VAR_9;
 VAR_10->desc_count = FUNC_2(VAR_7);
 FUNC_5(VAR_10->desc, VAR_5, VAR_6);

 VAR_13 = FUNC_0(VAR_4, &VAR_11);

 if (VAR_12.va)
  FUNC_4(&VAR_4->pdev->dev, VAR_12.size, VAR_12.va,
      VAR_12.dma);
 return VAR_13;
}
