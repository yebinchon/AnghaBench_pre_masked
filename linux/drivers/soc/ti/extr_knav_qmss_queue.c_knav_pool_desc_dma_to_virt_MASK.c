
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knav_pool {TYPE_1__* region; } ;
typedef void* dma_addr_t ;
struct TYPE_2__ {void* virt_start; void* dma_start; } ;



void *FUNC_0(void *VAR_0, dma_addr_t VAR_1)
{
 struct knav_pool *VAR_2 = VAR_0;
 return VAR_2->region->virt_start + (VAR_1 - VAR_2->region->dma_start);
}
