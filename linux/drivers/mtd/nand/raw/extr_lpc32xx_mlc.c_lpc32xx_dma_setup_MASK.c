
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int parent; } ;
struct mtd_info {TYPE_2__ dev; } ;
struct TYPE_6__ {int src_maxburst; int dst_maxburst; int device_fc; void* dst_addr; void* src_addr; void* dst_addr_width; void* src_addr_width; int direction; } ;
struct lpc32xx_nand_host {int dma_chan; TYPE_3__ dma_slave_config; int io_base_phy; TYPE_1__* pdata; int nand_chip; } ;
typedef int dma_cap_mask_t ;
struct TYPE_4__ {int dma_filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,char*) ;
 scalar_t__ FUNC_6 (int ,TYPE_3__*) ;
 struct mtd_info* FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct lpc32xx_nand_host *VAR_6)
{
 struct mtd_info *VAR_7 = FUNC_7(&VAR_6->nand_chip);
 dma_cap_mask_t VAR_8;

 if (!VAR_6->pdata || !VAR_6->pdata->dma_filter) {
  FUNC_1(VAR_7->dev.parent, "no DMA platform data\n");
  return -VAR_4;
 }

 FUNC_3(VAR_8);
 FUNC_2(VAR_1, VAR_8);
 VAR_6->dma_chan = FUNC_5(VAR_8, VAR_6->pdata->dma_filter,
          "nand-mlc");
 if (!VAR_6->dma_chan) {
  FUNC_1(VAR_7->dev.parent, "Failed to request DMA channel\n");
  return -VAR_3;
 }






 VAR_6->dma_slave_config.direction = VAR_0;
 VAR_6->dma_slave_config.src_addr_width = VAR_2;
 VAR_6->dma_slave_config.dst_addr_width = VAR_2;
 VAR_6->dma_slave_config.src_maxburst = 128;
 VAR_6->dma_slave_config.dst_maxburst = 128;

 VAR_6->dma_slave_config.device_fc = 0;
 VAR_6->dma_slave_config.src_addr = FUNC_0(VAR_6->io_base_phy);
 VAR_6->dma_slave_config.dst_addr = FUNC_0(VAR_6->io_base_phy);
 if (FUNC_6(VAR_6->dma_chan, &VAR_6->dma_slave_config)) {
  FUNC_1(VAR_7->dev.parent, "Failed to setup DMA slave\n");
  goto out1;
 }

 return 0;
out1:
 FUNC_4(VAR_6->dma_chan);
 return -VAR_5;
}
