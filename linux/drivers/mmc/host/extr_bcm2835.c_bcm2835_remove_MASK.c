
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mmc_host {int dummy; } ;
struct bcm2835_host {scalar_t__ dma_chan_rxtx; int timeout_work; int dma_work; int irq; scalar_t__ ioaddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,struct bcm2835_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 struct mmc_host* FUNC_5 (struct bcm2835_host*) ;
 int FUNC_6 (struct mmc_host*) ;
 struct bcm2835_host* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_2)
{
 struct bcm2835_host *VAR_3 = FUNC_7(VAR_2);
 struct mmc_host *VAR_4 = FUNC_5(VAR_3);

 FUNC_6(VAR_4);

 FUNC_8(VAR_1, VAR_3->ioaddr + VAR_0);

 FUNC_3(VAR_3->irq, VAR_3);

 FUNC_1(&VAR_3->dma_work);
 FUNC_0(&VAR_3->timeout_work);

 if (VAR_3->dma_chan_rxtx)
  FUNC_2(VAR_3->dma_chan_rxtx);

 FUNC_4(VAR_4);

 return 0;
}
