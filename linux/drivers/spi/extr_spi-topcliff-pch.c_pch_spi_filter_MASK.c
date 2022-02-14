
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pch_dma_slave {scalar_t__ chan_id; scalar_t__ dma_dev; } ;
struct dma_chan {scalar_t__ chan_id; struct pch_dma_slave* private; TYPE_1__* device; } ;
struct TYPE_2__ {scalar_t__ dev; } ;



__attribute__((used)) static bool FUNC_0(struct dma_chan *VAR_0, void *VAR_1)
{
 struct pch_dma_slave *VAR_2 = VAR_1;

 if ((VAR_0->chan_id == VAR_2->chan_id) &&
     (VAR_2->dma_dev == VAR_0->device->dev)) {
  VAR_0->private = VAR_2;
  return 1;
 } else {
  return 0;
 }
}
