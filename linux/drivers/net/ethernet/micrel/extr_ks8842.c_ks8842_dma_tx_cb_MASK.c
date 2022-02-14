
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct ks8842_tx_dma_ctl {int * adesc; } ;
struct ks8842_adapter {struct ks8842_tx_dma_ctl dma_tx; } ;


 int FUNC_0 (struct net_device*,char*) ;
 struct ks8842_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct net_device *VAR_1 = VAR_0;
 struct ks8842_adapter *VAR_2 = FUNC_1(VAR_1);
 struct ks8842_tx_dma_ctl *VAR_3 = &VAR_2->dma_tx;

 FUNC_0(VAR_1, "TX DMA finished\n");

 if (!VAR_3->adesc)
  return;

 VAR_1->stats.tx_packets++;
 VAR_3->adesc = ((void*)0);

 if (FUNC_2(VAR_1))
  FUNC_3(VAR_1);
}
