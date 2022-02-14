
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gdma_dmaengine_chan {int vchan; } ;
struct gdma_dma_desc {size_t residue; unsigned int num_sgs; int direction; int cyclic; int vdesc; TYPE_2__* sg; } ;
struct dma_chan {TYPE_1__* device; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef size_t dma_addr_t ;
struct TYPE_4__ {size_t src_addr; size_t dst_addr; size_t len; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct gdma_dma_desc*) ;
 struct gdma_dma_desc* FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct gdma_dma_desc*,int ,unsigned int) ;
 struct gdma_dmaengine_chan* FUNC_4 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_5 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_6(
 struct dma_chan *VAR_5, dma_addr_t VAR_6, size_t VAR_7,
 size_t VAR_8, enum dma_transfer_direction VAR_9,
 unsigned long VAR_10)
{
 struct gdma_dmaengine_chan *VAR_11 = FUNC_4(VAR_5);
 struct gdma_dma_desc *VAR_12;
 unsigned int VAR_13, VAR_14;

 if (VAR_7 % VAR_8)
  return ((void*)0);

 if (VAR_8 > VAR_2) {
  FUNC_0(VAR_5->device->dev, "cyclic len too large %d\n",
   VAR_8);
  return ((void*)0);
 }

 VAR_13 = VAR_7 / VAR_8;
 VAR_12 = FUNC_2(FUNC_3(VAR_12, VAR_4, VAR_13), VAR_3);
 if (!VAR_12) {
  FUNC_0(VAR_5->device->dev, "alloc cyclic decs error\n");
  return ((void*)0);
 }
 VAR_12->residue = VAR_7;

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  if (VAR_9 == VAR_1) {
   VAR_12->sg[VAR_14].src_addr = VAR_6;
  } else if (VAR_9 == VAR_0) {
   VAR_12->sg[VAR_14].dst_addr = VAR_6;
  } else {
   FUNC_0(VAR_5->device->dev, "direction type %d error\n",
    VAR_9);
   goto free_desc;
  }
  VAR_12->sg[VAR_14].len = VAR_8;
  VAR_6 += VAR_8;
 }

 VAR_12->num_sgs = VAR_13;
 VAR_12->direction = VAR_9;
 VAR_12->cyclic = 1;

 return FUNC_5(&VAR_11->vchan, &VAR_12->vdesc, VAR_10);

free_desc:
 FUNC_1(VAR_12);
 return ((void*)0);
}
