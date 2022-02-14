
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_mmc_host {int sg_dma; int sg_cpu; int irq; } ;
struct platform_device {int dev; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct mmc_host*) ;
 struct sunxi_mmc_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 struct mmc_host* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sunxi_mmc_host*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct mmc_host *VAR_2 = FUNC_5(VAR_1);
 struct sunxi_mmc_host *VAR_3 = FUNC_3(VAR_2);

 FUNC_4(VAR_2);
 FUNC_6(&VAR_1->dev);
 FUNC_0(VAR_3->irq);
 FUNC_7(VAR_3);
 FUNC_1(&VAR_1->dev, VAR_0, VAR_3->sg_cpu, VAR_3->sg_dma);
 FUNC_2(VAR_2);

 return 0;
}
