
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tsi721_tx_desc {int desc_node; int status; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct tsi721_bdma_chan {int lock; int queue; int active; int id; TYPE_2__ dchan; } ;
struct dma_async_tx_descriptor {int chan; } ;
typedef int dma_cookie_t ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dma_async_tx_descriptor*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct tsi721_bdma_chan* FUNC_5 (int ) ;
 struct tsi721_tx_desc* FUNC_6 (struct dma_async_tx_descriptor*) ;
 int FUNC_7 (struct tsi721_bdma_chan*,int *) ;
 int FUNC_8 (int *,char*,int ,struct dma_async_tx_descriptor*) ;

__attribute__((used)) static dma_cookie_t FUNC_9(struct dma_async_tx_descriptor *VAR_3)
{
 struct tsi721_tx_desc *VAR_4 = FUNC_6(VAR_3);
 struct tsi721_bdma_chan *VAR_5 = FUNC_5(VAR_3->chan);
 dma_cookie_t VAR_6;


 if (!FUNC_2(&VAR_4->desc_node)) {
  FUNC_8(&VAR_5->dchan.dev->device,
   "DMAC%d wrong state of descriptor %p",
   VAR_5->id, VAR_3);
  return -VAR_1;
 }

 FUNC_3(&VAR_5->lock);

 if (!VAR_5->active) {
  FUNC_4(&VAR_5->lock);
  return -VAR_2;
 }

 VAR_6 = FUNC_0(VAR_3);
 VAR_4->status = VAR_0;
 FUNC_1(&VAR_4->desc_node, &VAR_5->queue);
 FUNC_7(VAR_5, ((void*)0));

 FUNC_4(&VAR_5->lock);
 return VAR_6;
}
