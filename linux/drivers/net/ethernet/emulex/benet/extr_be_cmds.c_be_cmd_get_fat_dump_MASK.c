
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {int size; int dma; struct be_cmd_resp_get_fat* va; } ;
struct be_cmd_resp_get_fat {void* read_log_length; int data_buffer; void* data_buffer_size; void* read_log_offset; void* fat_operation; int hdr; } ;
struct be_cmd_req_get_fat {void* read_log_length; int data_buffer; void* data_buffer_size; void* read_log_offset; void* fat_operation; int hdr; } ;
struct be_adapter {int mcc_lock; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,int ,int ,scalar_t__,struct be_mcc_wrb*,struct be_dma_mem*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,char*) ;
 struct be_cmd_resp_get_fat* FUNC_4 (int *,int,int *,int ) ;
 int FUNC_5 (int *,int,struct be_cmd_resp_get_fat*,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*,int ,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct be_mcc_wrb* FUNC_11 (struct be_adapter*) ;

int FUNC_12(struct be_adapter *VAR_6, u32 VAR_7, void *VAR_8)
{
 struct be_dma_mem VAR_9;
 struct be_mcc_wrb *VAR_10;
 struct be_cmd_req_get_fat *VAR_11;
 u32 VAR_12 = 0, VAR_13, VAR_14,
    VAR_15 = sizeof(u32), VAR_16;
 int VAR_17;

 if (VAR_7 == 0)
  return 0;

 VAR_13 = VAR_7;

 VAR_9.size = sizeof(struct be_cmd_req_get_fat) + 60*1024;
 VAR_9.va = FUNC_4(&VAR_6->pdev->dev,
         VAR_9.size,
         &VAR_9.dma, VAR_3);
 if (!VAR_9.va)
  return -VAR_2;

 FUNC_9(&VAR_6->mcc_lock);

 while (VAR_13) {
  VAR_14 = FUNC_8(VAR_13, (u32)60*1024);
  VAR_13 -= VAR_14;

  VAR_10 = FUNC_11(VAR_6);
  if (!VAR_10) {
   VAR_17 = -VAR_1;
   goto err;
  }
  VAR_11 = VAR_9.va;

  VAR_16 = sizeof(struct be_cmd_req_get_fat) + VAR_14;
  FUNC_1(&VAR_11->hdr, VAR_0,
           VAR_4, VAR_16,
           VAR_10, &VAR_9);

  VAR_11->fat_operation = FUNC_2(VAR_5);
  VAR_11->read_log_offset = FUNC_2(VAR_15);
  VAR_11->read_log_length = FUNC_2(VAR_14);
  VAR_11->data_buffer_size = FUNC_2(VAR_14);

  VAR_17 = FUNC_0(VAR_6);
  if (!VAR_17) {
   struct be_cmd_resp_get_fat *VAR_18 = VAR_9.va;

   FUNC_7(VAR_8 + VAR_12,
          VAR_18->data_buffer,
          FUNC_6(VAR_18->read_log_length));
  } else {
   FUNC_3(&VAR_6->pdev->dev, "FAT Table Retrieve error\n");
   goto err;
  }
  VAR_12 += VAR_14;
  VAR_15 += VAR_14;
 }
err:
 FUNC_5(&VAR_6->pdev->dev, VAR_9.size,
     VAR_9.va, VAR_9.dma);
 FUNC_10(&VAR_6->mcc_lock);
 return VAR_17;
}
