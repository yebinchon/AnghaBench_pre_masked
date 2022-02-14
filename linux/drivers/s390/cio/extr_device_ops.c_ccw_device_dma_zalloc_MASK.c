
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccw_device {int dev; TYPE_1__* private; } ;
struct TYPE_2__ {int dma_pool; } ;


 void* FUNC_0 (int ,int *,size_t) ;

void *FUNC_1(struct ccw_device *VAR_0, size_t VAR_1)
{
 return FUNC_0(VAR_0->private->dma_pool, &VAR_0->dev, VAR_1);
}
