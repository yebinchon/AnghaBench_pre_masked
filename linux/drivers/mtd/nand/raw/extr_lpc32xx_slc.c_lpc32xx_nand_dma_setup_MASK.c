
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct mtd_info {TYPE_2__ dev; } ;
struct lpc32xx_nand_host {int dma_chan; TYPE_1__* pdata; int nand_chip; } ;
typedef int dma_cap_mask_t ;
struct TYPE_3__ {int dma_filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char*) ;
 struct mtd_info* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct lpc32xx_nand_host *VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_4(&VAR_3->nand_chip);
 dma_cap_mask_t VAR_5;

 if (!VAR_3->pdata || !VAR_3->pdata->dma_filter) {
  FUNC_0(VAR_4->dev.parent, "no DMA platform data\n");
  return -VAR_2;
 }

 FUNC_2(VAR_5);
 FUNC_1(VAR_0, VAR_5);
 VAR_3->dma_chan = FUNC_3(VAR_5, VAR_3->pdata->dma_filter,
          "nand-slc");
 if (!VAR_3->dma_chan) {
  FUNC_0(VAR_4->dev.parent, "Failed to request DMA channel\n");
  return -VAR_1;
 }

 return 0;
}
