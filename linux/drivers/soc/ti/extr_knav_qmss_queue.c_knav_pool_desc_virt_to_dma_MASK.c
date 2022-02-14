
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knav_pool {TYPE_1__* region; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dma_start; void* virt_start; } ;



dma_addr_t FUNC_0(void *VAR_0, void *VAR_1)
{
 struct knav_pool *VAR_2 = VAR_0;
 return VAR_2->region->dma_start + (VAR_1 - VAR_2->region->virt_start);
}
