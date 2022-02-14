
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_chan {int dummy; } ;
struct cppi41_dma_controller {int num_channels; TYPE_2__* rx_channel; TYPE_1__* tx_channel; } ;
struct TYPE_4__ {struct dma_chan* dc; } ;
struct TYPE_3__ {struct dma_chan* dc; } ;


 int FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_1(struct cppi41_dma_controller *VAR_0)
{
 struct dma_chan *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_channels; VAR_2++) {
  VAR_1 = VAR_0->tx_channel[VAR_2].dc;
  if (VAR_1)
   FUNC_0(VAR_1);
  VAR_1 = VAR_0->rx_channel[VAR_2].dc;
  if (VAR_1)
   FUNC_0(VAR_1);
 }
}
