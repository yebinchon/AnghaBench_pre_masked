
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct mt_gpdma_desc {int dummy; } ;
struct mt_bdma_desc {int dummy; } ;
struct TYPE_2__ {int bd_addr; int bd; int gpd_addr; int gpd; } ;
struct msdc_host {int mmc; TYPE_1__ dma; int dev; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (int ) ;
 struct msdc_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct msdc_host*) ;
 int FUNC_5 (struct msdc_host*) ;
 struct mmc_host* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct platform_device*,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_1)
{
 struct mmc_host *VAR_2;
 struct msdc_host *VAR_3;

 VAR_2 = FUNC_6(VAR_1);
 VAR_3 = FUNC_2(VAR_2);

 FUNC_9(VAR_3->dev);

 FUNC_7(VAR_1, ((void*)0));
 FUNC_3(VAR_3->mmc);
 FUNC_4(VAR_3);
 FUNC_5(VAR_3);

 FUNC_8(VAR_3->dev);
 FUNC_10(VAR_3->dev);
 FUNC_0(&VAR_1->dev,
   2 * sizeof(struct mt_gpdma_desc),
   VAR_3->dma.gpd, VAR_3->dma.gpd_addr);
 FUNC_0(&VAR_1->dev, VAR_0 * sizeof(struct mt_bdma_desc),
   VAR_3->dma.bd, VAR_3->dma.bd_addr);

 FUNC_1(VAR_3->mmc);

 return 0;
}
