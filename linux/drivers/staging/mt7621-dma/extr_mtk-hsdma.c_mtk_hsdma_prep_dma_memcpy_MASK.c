
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_hsdma_desc {int vdesc; TYPE_2__* sg; } ;
struct mtk_hsdma_chan {int vchan; } ;
struct dma_chan {TYPE_1__* device; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_4__ {size_t len; void* dst_addr; void* src_addr; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct mtk_hsdma_desc* FUNC_1 (int,int ) ;
 struct mtk_hsdma_chan* FUNC_2 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_3 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_4(
  struct dma_chan *VAR_1, dma_addr_t VAR_2, dma_addr_t VAR_3,
  size_t VAR_4, unsigned long VAR_5)
{
 struct mtk_hsdma_chan *VAR_6 = FUNC_2(VAR_1);
 struct mtk_hsdma_desc *VAR_7;

 if (VAR_4 <= 0)
  return ((void*)0);

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_0);
 if (!VAR_7) {
  FUNC_0(VAR_1->device->dev, "alloc memcpy decs error\n");
  return ((void*)0);
 }

 VAR_7->sg[0].src_addr = VAR_3;
 VAR_7->sg[0].dst_addr = VAR_2;
 VAR_7->sg[0].len = VAR_4;

 return FUNC_3(&VAR_6->vchan, &VAR_7->vdesc, VAR_5);
}
