
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct omap2_onenand {scalar_t__ dma_chan; int mtd; } ;


 struct omap2_onenand* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct omap2_onenand *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_3(&VAR_1->mtd);
 if (VAR_1->dma_chan)
  FUNC_1(VAR_1->dma_chan);
 FUNC_2(VAR_0);

 return 0;
}
