
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct musb_dma_controller {int used_channels; TYPE_1__* channel; struct musb* private_data; } ;
struct musb {int controller; } ;
struct dma_channel {int dummy; } ;
struct TYPE_2__ {struct dma_channel channel; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dma_channel*) ;

__attribute__((used)) static void FUNC_2(struct musb_dma_controller *VAR_1)
{
 struct musb *VAR_2 = VAR_1->private_data;
 struct dma_channel *VAR_3;
 u8 VAR_4;

 if (VAR_1->used_channels != 0) {
  FUNC_0(VAR_2->controller,
   "Stopping DMA controller while channel active\n");

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (VAR_1->used_channels & (1 << VAR_4)) {
    VAR_3 = &VAR_1->channel[VAR_4].channel;
    FUNC_1(VAR_3);

    if (!VAR_1->used_channels)
     break;
   }
  }
 }
}
