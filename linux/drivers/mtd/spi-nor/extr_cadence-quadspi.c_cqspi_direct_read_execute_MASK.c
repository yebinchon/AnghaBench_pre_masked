
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct spi_nor {int dev; struct cqspi_flash_pdata* priv; } ;
struct dma_async_tx_descriptor {int (* tx_submit ) (struct dma_async_tx_descriptor*) ;struct cqspi_st* callback_param; int callback; } ;
struct cqspi_st {int rx_chan; int rx_dma_complete; scalar_t__ ahb_base; scalar_t__ mmap_phys_base; } ;
struct cqspi_flash_pdata {struct cqspi_st* cqspi; } ;
typedef scalar_t__ loff_t ;
typedef enum dma_ctrl_flags { ____Placeholder_dma_ctrl_flags } dma_ctrl_flags ;
typedef int dma_cookie_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,size_t,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__,size_t,int ) ;
 struct dma_async_tx_descriptor* FUNC_6 (int ,scalar_t__,scalar_t__,size_t,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,scalar_t__,size_t) ;
 int FUNC_9 (size_t) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct dma_async_tx_descriptor*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;

__attribute__((used)) static int FUNC_14(struct spi_nor *VAR_7, u_char *VAR_8,
         loff_t VAR_9, size_t VAR_10)
{
 struct cqspi_flash_pdata *VAR_11 = VAR_7->priv;
 struct cqspi_st *VAR_12 = VAR_11->cqspi;
 enum dma_ctrl_flags VAR_13 = VAR_0 | VAR_2;
 dma_addr_t VAR_14 = (dma_addr_t)VAR_12->mmap_phys_base + VAR_9;
 int VAR_15 = 0;
 struct dma_async_tx_descriptor *VAR_16;
 dma_cookie_t VAR_17;
 dma_addr_t VAR_18;

 if (!VAR_12->rx_chan || !FUNC_12(VAR_8)) {
  FUNC_8(VAR_8, VAR_12->ahb_base + VAR_9, VAR_10);
  return 0;
 }

 VAR_18 = FUNC_2(VAR_7->dev, VAR_8, VAR_10, VAR_1);
 if (FUNC_3(VAR_7->dev, VAR_18)) {
  FUNC_0(VAR_7->dev, "dma mapping failed\n");
  return -VAR_4;
 }
 VAR_16 = FUNC_6(VAR_12->rx_chan, VAR_18, VAR_14,
           VAR_10, VAR_13);
 if (!VAR_16) {
  FUNC_0(VAR_7->dev, "device_prep_dma_memcpy error\n");
  VAR_15 = -VAR_3;
  goto err_unmap;
 }

 VAR_16->callback = VAR_6;
 VAR_16->callback_param = VAR_12;
 VAR_17 = VAR_16->tx_submit(VAR_16);
 FUNC_10(&VAR_12->rx_dma_complete);

 VAR_15 = FUNC_4(VAR_17);
 if (VAR_15) {
  FUNC_0(VAR_7->dev, "dma_submit_error %d\n", VAR_17);
  VAR_15 = -VAR_3;
  goto err_unmap;
 }

 FUNC_1(VAR_12->rx_chan);
 if (!FUNC_13(&VAR_12->rx_dma_complete,
      FUNC_9(VAR_10))) {
  FUNC_7(VAR_12->rx_chan);
  FUNC_0(VAR_7->dev, "DMA wait_for_completion_timeout\n");
  VAR_15 = -VAR_5;
  goto err_unmap;
 }

err_unmap:
 FUNC_5(VAR_7->dev, VAR_18, VAR_10, VAR_1);

 return VAR_15;
}
