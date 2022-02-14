
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct TYPE_7__ {int parent; } ;
struct mtd_info {TYPE_1__ dev; } ;
struct TYPE_10__ {int direction; int src_maxburst; int dst_maxburst; int device_fc; void* dst_addr_width; void* src_addr_width; void* dst_addr; void* src_addr; } ;
struct lpc32xx_nand_host {int sgl; TYPE_3__* dma_chan; int comp; TYPE_4__ dma_slave_config; } ;
struct dma_async_tx_descriptor {int * callback_param; int callback; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef void* dma_addr_t ;
struct TYPE_9__ {TYPE_2__* device; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int *,int,int ) ;
 int FUNC_3 (int ,int *,int,int ) ;
 struct dma_async_tx_descriptor* FUNC_4 (TYPE_3__*,int *,int,int,int) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_6 (struct dma_async_tx_descriptor*) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int FUNC_8 (int) ;
 struct nand_chip* FUNC_9 (struct mtd_info*) ;
 struct lpc32xx_nand_host* FUNC_10 (struct nand_chip*) ;
 int FUNC_11 (int *,void*,int) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13(struct mtd_info *VAR_6, dma_addr_t VAR_7,
       void *VAR_8, int VAR_9, enum dma_transfer_direction VAR_10)
{
 struct nand_chip *VAR_11 = FUNC_9(VAR_6);
 struct lpc32xx_nand_host *VAR_12 = FUNC_10(VAR_11);
 struct dma_async_tx_descriptor *VAR_13;
 int VAR_14 = VAR_1 | VAR_2;
 int VAR_15;

 VAR_12->dma_slave_config.direction = VAR_10;
 VAR_12->dma_slave_config.src_addr = VAR_7;
 VAR_12->dma_slave_config.dst_addr = VAR_7;
 VAR_12->dma_slave_config.src_addr_width = VAR_3;
 VAR_12->dma_slave_config.dst_addr_width = VAR_3;
 VAR_12->dma_slave_config.src_maxburst = 4;
 VAR_12->dma_slave_config.dst_maxburst = 4;

 VAR_12->dma_slave_config.device_fc = 0;
 if (FUNC_5(VAR_12->dma_chan, &VAR_12->dma_slave_config)) {
  FUNC_0(VAR_6->dev.parent, "Failed to setup DMA slave\n");
  return -VAR_4;
 }

 FUNC_11(&VAR_12->sgl, VAR_8, VAR_9);

 VAR_15 = FUNC_2(VAR_12->dma_chan->device->dev, &VAR_12->sgl, 1,
    VAR_0);
 if (VAR_15 != 1) {
  FUNC_0(VAR_6->dev.parent, "Failed to map sg list\n");
  return -VAR_4;
 }
 VAR_13 = FUNC_4(VAR_12->dma_chan, &VAR_12->sgl, 1, VAR_10,
           VAR_14);
 if (!VAR_13) {
  FUNC_0(VAR_6->dev.parent, "Failed to prepare slave sg\n");
  goto out1;
 }

 FUNC_7(&VAR_12->comp);
 VAR_13->callback = VAR_5;
 VAR_13->callback_param = &VAR_12->comp;

 FUNC_6(VAR_13);
 FUNC_1(VAR_12->dma_chan);

 FUNC_12(&VAR_12->comp, FUNC_8(1000));

 FUNC_3(VAR_12->dma_chan->device->dev, &VAR_12->sgl, 1,
       VAR_0);

 return 0;
out1:
 FUNC_3(VAR_12->dma_chan->device->dev, &VAR_12->sgl, 1,
       VAR_0);
 return -VAR_4;
}
