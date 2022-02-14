
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_async_tx_descriptor {int * callback_param; int callback; } ;
struct atmel_nand_controller {int dev; int dmac; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_cookie_t ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,void*,size_t,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,size_t,int) ;
 struct dma_async_tx_descriptor* FUNC_8 (int ,int ,int ,size_t,int) ;
 int FUNC_9 (struct dma_async_tx_descriptor*) ;
 int VAR_5 ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct atmel_nand_controller *VAR_6,
       void *VAR_7, dma_addr_t VAR_8, size_t VAR_9,
       enum dma_data_direction VAR_10)
{
 FUNC_0(VAR_5);
 dma_addr_t VAR_11, VAR_12, VAR_13;
 struct dma_async_tx_descriptor *VAR_14;
 dma_cookie_t VAR_15;

 VAR_13 = FUNC_4(VAR_6->dev, VAR_7, VAR_9, VAR_10);
 if (FUNC_5(VAR_6->dev, VAR_8)) {
  FUNC_2(VAR_6->dev,
   "Failed to prepare a buffer for DMA access\n");
  goto err;
 }

 if (VAR_10 == VAR_1) {
  VAR_11 = VAR_8;
  VAR_12 = VAR_13;
 } else {
  VAR_11 = VAR_13;
  VAR_12 = VAR_8;
 }

 VAR_14 = FUNC_8(VAR_6->dmac, VAR_12, VAR_11, VAR_9,
           VAR_0 | VAR_2);
 if (!VAR_14) {
  FUNC_2(VAR_6->dev, "Failed to prepare DMA memcpy\n");
  goto err_unmap;
 }

 VAR_14->callback = VAR_4;
 VAR_14->callback_param = &VAR_5;

 VAR_15 = FUNC_9(VAR_14);
 if (FUNC_6(VAR_15)) {
  FUNC_2(VAR_6->dev, "Failed to do DMA tx_submit\n");
  goto err_unmap;
 }

 FUNC_3(VAR_6->dmac);
 FUNC_10(&VAR_5);

 return 0;

err_unmap:
 FUNC_7(VAR_6->dev, VAR_13, VAR_9, VAR_10);

err:
 FUNC_1(VAR_6->dev, "Fall back to CPU I/O\n");

 return -VAR_3;
}
