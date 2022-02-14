
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knav_pool {TYPE_1__* region; int queue; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int desc_size; } ;


 int FUNC_0 (struct knav_pool*,void*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

void FUNC_2(void *VAR_0, void *VAR_1)
{
 struct knav_pool *VAR_2 = VAR_0;
 dma_addr_t VAR_3;
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_2->queue, VAR_3, VAR_2->region->desc_size, 0);
}
