
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int tasklet; scalar_t__ adesc; } ;
struct ks8842_adapter {TYPE_1__ dma_rx; } ;


 int FUNC_0 (struct net_device*,char*) ;
 struct ks8842_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct net_device *VAR_1 = VAR_0;
 struct ks8842_adapter *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_1, "RX DMA finished\n");

 if (VAR_2->dma_rx.adesc)
  FUNC_2(&VAR_2->dma_rx.tasklet);
}
