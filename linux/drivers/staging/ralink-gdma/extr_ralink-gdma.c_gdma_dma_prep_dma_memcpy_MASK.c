
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gdma_dmaengine_chan {int vchan; int burst_size; } ;
struct gdma_dma_desc {size_t residue; unsigned int num_sgs; int cyclic; int vdesc; int direction; TYPE_2__* sg; } ;
struct dma_chan {TYPE_1__* device; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_4__ {size_t len; void* dst_addr; void* src_addr; } ;
struct TYPE_3__ {int dev; } ;


 unsigned int FUNC_0 (size_t,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (size_t) ;
 struct gdma_dma_desc* FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct gdma_dma_desc*,int ,unsigned int) ;
 struct gdma_dmaengine_chan* FUNC_5 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_6 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_7(
  struct dma_chan *VAR_4, dma_addr_t VAR_5, dma_addr_t VAR_6,
  size_t VAR_7, unsigned long VAR_8)
{
 struct gdma_dmaengine_chan *VAR_9 = FUNC_5(VAR_4);
 struct gdma_dma_desc *VAR_10;
 unsigned int VAR_11, VAR_12;
 size_t VAR_13;

 if (VAR_7 <= 0)
  return ((void*)0);

 VAR_9->burst_size = FUNC_2(VAR_7 >> 2);

 VAR_13 = VAR_1;
 VAR_11 = FUNC_0(VAR_7, VAR_13);

 VAR_10 = FUNC_3(FUNC_4(VAR_10, VAR_3, VAR_11), VAR_2);
 if (!VAR_10) {
  FUNC_1(VAR_4->device->dev, "alloc memcpy decs error\n");
  return ((void*)0);
 }
 VAR_10->residue = VAR_7;

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_10->sg[VAR_12].src_addr = VAR_6;
  VAR_10->sg[VAR_12].dst_addr = VAR_5;
  if (VAR_7 > VAR_13)
   VAR_10->sg[VAR_12].len = VAR_13;
  else
   VAR_10->sg[VAR_12].len = VAR_7;
  VAR_6 += VAR_10->sg[VAR_12].len;
  VAR_5 += VAR_10->sg[VAR_12].len;
  VAR_7 -= VAR_10->sg[VAR_12].len;
 }

 VAR_10->num_sgs = VAR_11;
 VAR_10->direction = VAR_0;
 VAR_10->cyclic = 0;

 return FUNC_6(&VAR_9->vchan, &VAR_10->vdesc, VAR_8);
}
