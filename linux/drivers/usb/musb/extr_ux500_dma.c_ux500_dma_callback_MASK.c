
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int actual_len; } ;
struct ux500_dma_channel {int is_tx; TYPE_1__ channel; int cur_len; struct musb_hw_ep* hw_ep; } ;
struct musb_hw_ep {int epnum; struct musb* musb; } ;
struct musb {int lock; int controller; } ;
struct dma_channel {struct ux500_dma_channel* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct musb*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
 struct dma_channel *VAR_2 = VAR_1;
 struct ux500_dma_channel *VAR_3 = VAR_2->private_data;
 struct musb_hw_ep *VAR_4 = VAR_3->hw_ep;
 struct musb *VAR_5 = VAR_4->musb;
 unsigned long VAR_6;

 FUNC_0(VAR_5->controller, "DMA rx transfer done on hw_ep=%d\n",
  VAR_4->epnum);

 FUNC_2(&VAR_5->lock, VAR_6);
 VAR_3->channel.actual_len = VAR_3->cur_len;
 VAR_3->channel.status = VAR_0;
 FUNC_1(VAR_5, VAR_4->epnum, VAR_3->is_tx);
 FUNC_3(&VAR_5->lock, VAR_6);

}
