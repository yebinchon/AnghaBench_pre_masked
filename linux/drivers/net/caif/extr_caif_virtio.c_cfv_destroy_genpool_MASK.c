
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cfv_info {int * genpool; int reserved_size; int reserved_mem; int alloc_dma; scalar_t__ alloc_addr; int allocsz; TYPE_3__* vdev; } ;
struct TYPE_5__ {TYPE_1__* parent; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;
struct TYPE_4__ {int parent; } ;


 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct cfv_info *VAR_0)
{
 if (VAR_0->alloc_addr)
  FUNC_0(VAR_0->vdev->dev.parent->parent,
      VAR_0->allocsz, VAR_0->alloc_addr,
      VAR_0->alloc_dma);

 if (!VAR_0->genpool)
  return;
 FUNC_2(VAR_0->genpool, VAR_0->reserved_mem,
        VAR_0->reserved_size);
 FUNC_1(VAR_0->genpool);
 VAR_0->genpool = ((void*)0);
}
