
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct au1xmmc_host {int flags; void* rx_chan; void* tx_chan; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int,int,int ,void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (int *,char*) ;
 int VAR_6 ;
 struct resource* FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct au1xmmc_host *VAR_7)
{
 struct resource *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_5(VAR_7->pdev, VAR_4, 0);
 if (!VAR_8)
  return -VAR_1;
 VAR_9 = VAR_8->start;

 VAR_8 = FUNC_5(VAR_7->pdev, VAR_4, 1);
 if (!VAR_8)
  return -VAR_1;
 VAR_10 = VAR_8->start;

 if (!VAR_6)
  return -VAR_1;

 VAR_7->tx_chan = FUNC_0(VAR_6, VAR_9,
    VAR_5, (void *)VAR_7);
 if (!VAR_7->tx_chan) {
  FUNC_4(&VAR_7->pdev->dev, "cannot allocate TX DMA\n");
  return -VAR_1;
 }

 VAR_7->rx_chan = FUNC_0(VAR_10, VAR_6,
    VAR_5, (void *)VAR_7);
 if (!VAR_7->rx_chan) {
  FUNC_4(&VAR_7->pdev->dev, "cannot allocate RX DMA\n");
  FUNC_1(VAR_7->tx_chan);
  return -VAR_1;
 }

 FUNC_3(VAR_7->tx_chan, 8);
 FUNC_3(VAR_7->rx_chan, 8);

 FUNC_2(VAR_7->tx_chan, VAR_0);
 FUNC_2(VAR_7->rx_chan, VAR_0);


 VAR_7->flags |= VAR_3 | VAR_2;

 return 0;
}
