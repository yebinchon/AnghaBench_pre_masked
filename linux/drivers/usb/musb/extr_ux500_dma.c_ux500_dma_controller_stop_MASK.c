
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct ux500_dma_controller {TYPE_2__* tx_channel; TYPE_1__* rx_channel; } ;
struct ux500_dma_channel {scalar_t__ dma_chan; } ;
struct dma_channel {struct ux500_dma_channel* private_data; } ;
struct TYPE_4__ {struct dma_channel channel; } ;
struct TYPE_3__ {struct dma_channel channel; } ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct dma_channel*) ;

__attribute__((used)) static void FUNC_2(struct ux500_dma_controller *VAR_1)
{
 struct ux500_dma_channel *VAR_2;
 struct dma_channel *VAR_3;
 u8 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_1->rx_channel[VAR_4].channel;
  VAR_2 = VAR_3->private_data;

  FUNC_1(VAR_3);

  if (VAR_2->dma_chan)
   FUNC_0(VAR_2->dma_chan);
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_1->tx_channel[VAR_4].channel;
  VAR_2 = VAR_3->private_data;

  FUNC_1(VAR_3);

  if (VAR_2->dma_chan)
   FUNC_0(VAR_2->dma_chan);
 }
}
