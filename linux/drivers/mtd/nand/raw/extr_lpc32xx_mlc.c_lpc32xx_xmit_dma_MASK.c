
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct TYPE_5__ {int parent; } ;
struct mtd_info {TYPE_1__ dev; } ;
struct lpc32xx_nand_host {int sgl; TYPE_3__* dma_chan; int comp_dma; } ;
struct dma_async_tx_descriptor {int * callback_param; int callback; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
struct TYPE_7__ {TYPE_2__* device; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int *,int,int ) ;
 int FUNC_3 (int ,int *,int,int ) ;
 struct dma_async_tx_descriptor* FUNC_4 (TYPE_3__*,int *,int,int,int) ;
 int FUNC_5 (struct dma_async_tx_descriptor*) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (int) ;
 struct nand_chip* FUNC_8 (struct mtd_info*) ;
 struct lpc32xx_nand_host* FUNC_9 (struct nand_chip*) ;
 int FUNC_10 (int *,void*,int) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(struct mtd_info *VAR_5, void *VAR_6, int VAR_7,
       enum dma_transfer_direction VAR_8)
{
 struct nand_chip *VAR_9 = FUNC_8(VAR_5);
 struct lpc32xx_nand_host *VAR_10 = FUNC_9(VAR_9);
 struct dma_async_tx_descriptor *VAR_11;
 int VAR_12 = VAR_1 | VAR_2;
 int VAR_13;

 FUNC_10(&VAR_10->sgl, VAR_6, VAR_7);

 VAR_13 = FUNC_2(VAR_10->dma_chan->device->dev, &VAR_10->sgl, 1,
    VAR_0);
 if (VAR_13 != 1) {
  FUNC_0(VAR_5->dev.parent, "Failed to map sg list\n");
  return -VAR_3;
 }
 VAR_11 = FUNC_4(VAR_10->dma_chan, &VAR_10->sgl, 1, VAR_8,
           VAR_12);
 if (!VAR_11) {
  FUNC_0(VAR_5->dev.parent, "Failed to prepare slave sg\n");
  goto out1;
 }

 FUNC_6(&VAR_10->comp_dma);
 VAR_11->callback = VAR_4;
 VAR_11->callback_param = &VAR_10->comp_dma;

 FUNC_5(VAR_11);
 FUNC_1(VAR_10->dma_chan);

 FUNC_11(&VAR_10->comp_dma, FUNC_7(1000));

 FUNC_3(VAR_10->dma_chan->device->dev, &VAR_10->sgl, 1,
       VAR_0);
 return 0;
out1:
 FUNC_3(VAR_10->dma_chan->device->dev, &VAR_10->sgl, 1,
       VAR_0);
 return -VAR_3;
}
