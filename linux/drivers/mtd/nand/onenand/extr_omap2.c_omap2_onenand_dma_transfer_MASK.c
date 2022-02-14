
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap2_onenand {int dma_chan; int dma_done; TYPE_1__* pdev; } ;
struct dma_async_tx_descriptor {int (* tx_submit ) (struct dma_async_tx_descriptor*) ;int * callback_param; int callback; } ;
typedef int dma_cookie_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct dma_async_tx_descriptor* FUNC_3 (int ,int ,int ,size_t,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct dma_async_tx_descriptor*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static inline int FUNC_9(struct omap2_onenand *VAR_3,
          dma_addr_t VAR_4, dma_addr_t VAR_5,
          size_t VAR_6)
{
 struct dma_async_tx_descriptor *VAR_7;
 dma_cookie_t VAR_8;

 VAR_7 = FUNC_3(VAR_3->dma_chan, VAR_5, VAR_4, VAR_6, 0);
 if (!VAR_7) {
  FUNC_0(&VAR_3->pdev->dev, "Failed to prepare DMA memcpy\n");
  return -VAR_0;
 }

 FUNC_6(&VAR_3->dma_done);

 VAR_7->callback = VAR_2;
 VAR_7->callback_param = &VAR_3->dma_done;

 VAR_8 = VAR_7->tx_submit(VAR_7);
 if (FUNC_2(VAR_8)) {
  FUNC_0(&VAR_3->pdev->dev, "Failed to do DMA tx_submit\n");
  return -VAR_0;
 }

 FUNC_1(VAR_3->dma_chan);

 if (!FUNC_8(&VAR_3->dma_done,
         FUNC_5(20))) {
  FUNC_4(VAR_3->dma_chan);
  return -VAR_1;
 }

 return 0;
}
