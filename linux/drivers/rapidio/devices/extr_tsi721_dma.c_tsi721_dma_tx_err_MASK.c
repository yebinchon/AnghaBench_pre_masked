
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_async_tx_descriptor {void* callback_param; int (* callback ) (void*) ;} ;
struct tsi721_tx_desc {int desc_node; struct dma_async_tx_descriptor txd; } ;
struct tsi721_bdma_chan {int free_list; } ;
typedef int (* dma_async_tx_callback ) (void*) ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct tsi721_bdma_chan *VAR_0,
         struct tsi721_tx_desc *VAR_1)
{
 struct dma_async_tx_descriptor *VAR_2 = &VAR_1->txd;
 dma_async_tx_callback VAR_3 = VAR_2->callback;
 void *VAR_4 = VAR_2->callback_param;

 FUNC_0(&VAR_1->desc_node, &VAR_0->free_list);

 if (VAR_3)
  VAR_3(VAR_4);
}
