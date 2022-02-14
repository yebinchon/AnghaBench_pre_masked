
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct moxart_host {scalar_t__ base; int dma_chan_rx; int dma_chan_tx; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mmc_host* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mmc_host*) ;
 struct moxart_host* FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4)
{
 struct mmc_host *VAR_5 = FUNC_1(&VAR_4->dev);
 struct moxart_host *VAR_6 = FUNC_5(VAR_5);

 FUNC_2(&VAR_4->dev, ((void*)0));

 if (VAR_5) {
  if (!FUNC_0(VAR_6->dma_chan_tx))
   FUNC_3(VAR_6->dma_chan_tx);
  if (!FUNC_0(VAR_6->dma_chan_rx))
   FUNC_3(VAR_6->dma_chan_rx);
  FUNC_6(VAR_5);
  FUNC_4(VAR_5);

  FUNC_8(0, VAR_6->base + VAR_2);
  FUNC_8(0, VAR_6->base + VAR_3);
  FUNC_8(FUNC_7(VAR_6->base + VAR_1) | VAR_0,
         VAR_6->base + VAR_1);
 }
 return 0;
}
