
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dw_dma_slave {scalar_t__ dma_dev; } ;
struct dma_chan {struct dw_dma_slave* private; TYPE_1__* device; } ;
struct TYPE_2__ {scalar_t__ dev; } ;



__attribute__((used)) static bool FUNC_0(struct dma_chan *VAR_0, void *VAR_1)
{
 struct dw_dma_slave *VAR_2 = VAR_1;

 if (VAR_2->dma_dev != VAR_0->device->dev)
  return 0;

 VAR_0->private = VAR_2;
 return 1;
}
