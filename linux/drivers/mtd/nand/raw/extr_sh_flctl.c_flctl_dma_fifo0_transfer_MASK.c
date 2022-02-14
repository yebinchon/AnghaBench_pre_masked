
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct sh_flctl {TYPE_1__* pdev; int dma_complete; struct dma_chan* chan_fifo0_tx; struct dma_chan* chan_fifo0_rx; } ;
struct dma_chan {TYPE_2__* device; } ;
struct dma_async_tx_descriptor {struct sh_flctl* callback_param; int callback; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_cookie_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sh_flctl*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct dma_chan*) ;
 int FUNC_4 (int ,unsigned long*,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int,int) ;
 struct dma_async_tx_descriptor* FUNC_8 (struct dma_chan*,int ,int,int,int) ;
 int FUNC_9 (struct dma_async_tx_descriptor*) ;
 int FUNC_10 (struct dma_chan*) ;
 int VAR_7 ;
 int FUNC_11 (struct sh_flctl*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static int FUNC_16(struct sh_flctl *VAR_8, unsigned long *VAR_9,
     int VAR_10, enum dma_data_direction VAR_11)
{
 struct dma_async_tx_descriptor *VAR_12 = ((void*)0);
 struct dma_chan *VAR_13;
 enum dma_transfer_direction VAR_14;
 dma_addr_t VAR_15;
 dma_cookie_t VAR_16;
 uint32_t VAR_17;
 int VAR_18;

 if (VAR_11 == VAR_2) {
  VAR_13 = VAR_8->chan_fifo0_rx;
  VAR_14 = VAR_1;
 } else {
  VAR_13 = VAR_8->chan_fifo0_tx;
  VAR_14 = VAR_3;
 }

 VAR_15 = FUNC_4(VAR_13->device->dev, VAR_9, VAR_10, VAR_11);

 if (!FUNC_5(VAR_13->device->dev, VAR_15))
  VAR_12 = FUNC_8(VAR_13, VAR_15, VAR_10,
   VAR_14, VAR_4 | VAR_0);

 if (VAR_12) {
  VAR_17 = FUNC_13(FUNC_0(VAR_8));
  VAR_17 |= VAR_5;
  FUNC_15(VAR_17, FUNC_0(VAR_8));

  VAR_12->callback = VAR_7;
  VAR_12->callback_param = VAR_8;
  VAR_16 = FUNC_9(VAR_12);
  if (FUNC_6(VAR_16)) {
   VAR_18 = FUNC_6(VAR_16);
   FUNC_2(&VAR_8->pdev->dev,
     "DMA submit failed, falling back to PIO\n");
   goto out;
  }

  FUNC_3(VAR_13);
 } else {

  FUNC_11(VAR_8);
  FUNC_2(&VAR_8->pdev->dev,
    "DMA failed, falling back to PIO\n");
  VAR_18 = -VAR_6;
  goto out;
 }

 VAR_18 =
 FUNC_14(&VAR_8->dma_complete,
    FUNC_12(3000));

 if (VAR_18 <= 0) {
  FUNC_10(VAR_13);
  FUNC_1(&VAR_8->pdev->dev, "wait_for_completion_timeout\n");
 }

out:
 VAR_17 = FUNC_13(FUNC_0(VAR_8));
 VAR_17 &= ~VAR_5;
 FUNC_15(VAR_17, FUNC_0(VAR_8));

 FUNC_7(VAR_13->device->dev, VAR_15, VAR_10, VAR_11);


 return VAR_18;
}
