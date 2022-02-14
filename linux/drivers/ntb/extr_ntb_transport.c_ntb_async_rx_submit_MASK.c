
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {int rx_async; int last_cookie; struct dma_chan* rx_dma_chan; } ;
struct ntb_queue_entry {size_t len; void* buf; struct ntb_transport_qp* qp; } ;
struct dmaengine_unmap_data {size_t len; int to_cnt; int from_cnt; void** addr; } ;
struct dma_device {struct dma_async_tx_descriptor* (* device_prep_dma_memcpy ) (struct dma_chan*,void*,void*,size_t,int ) ;int dev; } ;
struct dma_chan {struct dma_device* device; } ;
struct dma_async_tx_descriptor {struct ntb_queue_entry* callback_param; int callback_result; } ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 void* FUNC_0 (int ,int ,size_t,size_t,int ) ;
 scalar_t__ FUNC_1 (int ,void*) ;
 int FUNC_2 (struct dma_async_tx_descriptor*,struct dmaengine_unmap_data*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct dmaengine_unmap_data* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct dma_async_tx_descriptor*) ;
 int FUNC_6 (struct dmaengine_unmap_data*) ;
 int FUNC_7 (struct dma_device*,size_t,size_t,size_t) ;
 int VAR_6 ;
 struct dma_async_tx_descriptor* FUNC_8 (struct dma_chan*,void*,void*,size_t,int ) ;
 int FUNC_9 (void*) ;

__attribute__((used)) static int FUNC_10(struct ntb_queue_entry *VAR_7, void *VAR_8)
{
 struct dma_async_tx_descriptor *VAR_9;
 struct ntb_transport_qp *VAR_10 = VAR_7->qp;
 struct dma_chan *VAR_11 = VAR_10->rx_dma_chan;
 struct dma_device *VAR_12;
 size_t VAR_13, VAR_14, VAR_15;
 struct dmaengine_unmap_data *VAR_16;
 dma_cookie_t VAR_17;
 void *VAR_18 = VAR_7->buf;

 VAR_15 = VAR_7->len;
 VAR_12 = VAR_11->device;
 VAR_13 = (size_t)VAR_8 & ~VAR_5;
 VAR_14 = (size_t)VAR_18 & ~VAR_5;

 if (!FUNC_7(VAR_12, VAR_13, VAR_14, VAR_15))
  goto err;

 VAR_16 = FUNC_4(VAR_12->dev, 2, VAR_4);
 if (!VAR_16)
  goto err;

 VAR_16->len = VAR_15;
 VAR_16->addr[0] = FUNC_0(VAR_12->dev, FUNC_9(VAR_8),
          VAR_13, VAR_15, VAR_2);
 if (FUNC_1(VAR_12->dev, VAR_16->addr[0]))
  goto err_get_unmap;

 VAR_16->to_cnt = 1;

 VAR_16->addr[1] = FUNC_0(VAR_12->dev, FUNC_9(VAR_18),
          VAR_14, VAR_15, VAR_0);
 if (FUNC_1(VAR_12->dev, VAR_16->addr[1]))
  goto err_get_unmap;

 VAR_16->from_cnt = 1;

 VAR_9 = VAR_12->device_prep_dma_memcpy(VAR_11, VAR_16->addr[1],
          VAR_16->addr[0], VAR_15,
          VAR_1);
 if (!VAR_9)
  goto err_get_unmap;

 VAR_9->callback_result = VAR_6;
 VAR_9->callback_param = VAR_7;
 FUNC_2(VAR_9, VAR_16);

 VAR_17 = FUNC_5(VAR_9);
 if (FUNC_3(VAR_17))
  goto err_set_unmap;

 FUNC_6(VAR_16);

 VAR_10->last_cookie = VAR_17;

 VAR_10->rx_async++;

 return 0;

err_set_unmap:
 FUNC_6(VAR_16);
err_get_unmap:
 FUNC_6(VAR_16);
err:
 return -VAR_3;
}
