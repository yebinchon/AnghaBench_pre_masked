
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {int tx_max_frame; scalar_t__ tx_mw_dma_addr; struct dma_chan* tx_dma_chan; } ;
struct ntb_queue_entry {size_t len; int tx_index; void* buf; } ;
struct dmaengine_unmap_data {size_t len; int to_cnt; int * addr; } ;
struct dma_device {struct dma_async_tx_descriptor* (* device_prep_dma_memcpy ) (struct dma_chan*,scalar_t__,int ,size_t,int ) ;int dev; } ;
struct dma_chan {struct dma_device* device; } ;
struct dma_async_tx_descriptor {struct ntb_queue_entry* callback_param; int callback_result; } ;
typedef int dma_cookie_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int ,int ,size_t,size_t,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct dma_async_tx_descriptor*,struct dmaengine_unmap_data*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct dmaengine_unmap_data* FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct dma_async_tx_descriptor*) ;
 int FUNC_7 (struct dmaengine_unmap_data*) ;
 int FUNC_8 (struct dma_device*,size_t,size_t,size_t) ;
 int VAR_5 ;
 struct dma_async_tx_descriptor* FUNC_9 (struct dma_chan*,scalar_t__,int ,size_t,int ) ;
 int FUNC_10 (void*) ;

__attribute__((used)) static int FUNC_11(struct ntb_transport_qp *VAR_6,
          struct ntb_queue_entry *VAR_7)
{
 struct dma_async_tx_descriptor *VAR_8;
 struct dma_chan *VAR_9 = VAR_6->tx_dma_chan;
 struct dma_device *VAR_10;
 size_t VAR_11 = VAR_7->len;
 void *VAR_12 = VAR_7->buf;
 size_t VAR_13, VAR_14;
 struct dmaengine_unmap_data *VAR_15;
 dma_addr_t VAR_16;
 dma_cookie_t VAR_17;

 VAR_10 = VAR_9->device;
 VAR_16 = VAR_6->tx_mw_dma_addr + VAR_6->tx_max_frame * VAR_7->tx_index;
 VAR_14 = (size_t)VAR_12 & ~VAR_4;
 VAR_13 = (size_t)VAR_16 & ~VAR_4;

 if (!FUNC_8(VAR_10, VAR_14, VAR_13, VAR_11))
  goto err;

 VAR_15 = FUNC_5(VAR_10->dev, 1, VAR_3);
 if (!VAR_15)
  goto err;

 VAR_15->len = VAR_11;
 VAR_15->addr[0] = FUNC_1(VAR_10->dev, FUNC_10(VAR_12),
          VAR_14, VAR_11, VAR_1);
 if (FUNC_2(VAR_10->dev, VAR_15->addr[0]))
  goto err_get_unmap;

 VAR_15->to_cnt = 1;

 VAR_8 = VAR_10->device_prep_dma_memcpy(VAR_9, VAR_16, VAR_15->addr[0], VAR_11,
          VAR_0);
 if (!VAR_8)
  goto err_get_unmap;

 VAR_8->callback_result = VAR_5;
 VAR_8->callback_param = VAR_7;
 FUNC_3(VAR_8, VAR_15);

 VAR_17 = FUNC_6(VAR_8);
 if (FUNC_4(VAR_17))
  goto err_set_unmap;

 FUNC_7(VAR_15);

 FUNC_0(VAR_9);

 return 0;
err_set_unmap:
 FUNC_7(VAR_15);
err_get_unmap:
 FUNC_7(VAR_15);
err:
 return -VAR_2;
}
