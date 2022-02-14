
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct gpmi_nand_data {struct dma_chan** dma_chans; int dev; struct platform_device* pdev; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct dma_chan* FUNC_1 (int *,char*) ;
 int FUNC_2 (struct gpmi_nand_data*) ;

__attribute__((used)) static int FUNC_3(struct gpmi_nand_data *VAR_1)
{
 struct platform_device *VAR_2 = VAR_1->pdev;
 struct dma_chan *VAR_3;


 VAR_3 = FUNC_1(&VAR_2->dev, "rx-tx");
 if (!VAR_3) {
  FUNC_0(VAR_1->dev, "Failed to request DMA channel.\n");
  goto acquire_err;
 }

 VAR_1->dma_chans[0] = VAR_3;
 return 0;

acquire_err:
 FUNC_2(VAR_1);
 return -VAR_0;
}
