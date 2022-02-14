
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_qspi {int dev; int transfer_complete; struct dma_chan* rx_chan; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int (* tx_submit ) (struct dma_async_tx_descriptor*) ;struct ti_qspi* callback_param; int callback; } ;
typedef enum dma_ctrl_flags { ____Placeholder_dma_ctrl_flags } dma_ctrl_flags ;
typedef int dma_cookie_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int ) ;
 struct dma_async_tx_descriptor* FUNC_3 (struct dma_chan*,int ,int ,size_t,int) ;
 int FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct dma_async_tx_descriptor*) ;
 int VAR_4 ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct ti_qspi *VAR_5, dma_addr_t VAR_6,
       dma_addr_t VAR_7, size_t VAR_8)
{
 struct dma_chan *VAR_9 = VAR_5->rx_chan;
 dma_cookie_t VAR_10;
 enum dma_ctrl_flags VAR_11 = VAR_0 | VAR_1;
 struct dma_async_tx_descriptor *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_3(VAR_9, VAR_6, VAR_7, VAR_8, VAR_11);
 if (!VAR_12) {
  FUNC_0(VAR_5->dev, "device_prep_dma_memcpy error\n");
  return -VAR_2;
 }

 VAR_12->callback = VAR_4;
 VAR_12->callback_param = VAR_5;
 VAR_10 = VAR_12->tx_submit(VAR_12);
 FUNC_6(&VAR_5->transfer_complete);

 VAR_13 = FUNC_2(VAR_10);
 if (VAR_13) {
  FUNC_0(VAR_5->dev, "dma_submit_error %d\n", VAR_10);
  return -VAR_2;
 }

 FUNC_1(VAR_9);
 VAR_13 = FUNC_8(&VAR_5->transfer_complete,
       FUNC_5(VAR_8));
 if (VAR_13 <= 0) {
  FUNC_4(VAR_9);
  FUNC_0(VAR_5->dev, "DMA wait_for_completion_timeout\n");
  return -VAR_3;
 }

 return 0;
}
