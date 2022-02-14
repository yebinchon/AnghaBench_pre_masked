
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* dma_pool_list; } ;
typedef TYPE_1__ mraid_mmadp_t ;
struct TYPE_5__ {int * handle; int paddr; scalar_t__ vaddr; } ;
typedef TYPE_2__ mm_dmapool_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(mraid_mmadp_t *VAR_1)
{
 int VAR_2;
 mm_dmapool_t *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {

  VAR_3 = &VAR_1->dma_pool_list[VAR_2];

  if (VAR_3->handle) {

   if (VAR_3->vaddr)
    FUNC_1(VAR_3->handle, VAR_3->vaddr,
       VAR_3->paddr);

   FUNC_0(VAR_3->handle);
   VAR_3->handle = ((void*)0);
  }
 }

 return;
}
