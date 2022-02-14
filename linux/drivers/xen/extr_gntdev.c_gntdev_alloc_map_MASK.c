
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gnttab_dma_alloc_args {int coherent; int nr_pages; int dev_bus_addr; int vaddr; void* frames; int * pages; int dev; } ;
struct gntdev_priv {int dma_dev; } ;
struct gntdev_grant_map {int dma_flags; int count; int users; scalar_t__ index; TYPE_4__* kunmap_ops; TYPE_3__* kmap_ops; TYPE_2__* unmap_ops; TYPE_1__* map_ops; int * pages; int dma_bus_addr; int dma_vaddr; void* frames; int dma_dev; int * grants; } ;
struct TYPE_8__ {int handle; } ;
struct TYPE_7__ {int handle; } ;
struct TYPE_6__ {int handle; } ;
struct TYPE_5__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gntdev_grant_map*) ;
 scalar_t__ FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (struct gnttab_dma_alloc_args*) ;
 void* FUNC_3 (int,int,int ) ;
 struct gntdev_grant_map* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int) ;

struct gntdev_grant_map *FUNC_6(struct gntdev_priv *VAR_3, int VAR_4,
       int VAR_5)
{
 struct gntdev_grant_map *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_0);
 if (((void*)0) == VAR_6)
  return ((void*)0);

 VAR_6->grants = FUNC_3(VAR_4, sizeof(VAR_6->grants[0]), VAR_0);
 VAR_6->map_ops = FUNC_3(VAR_4, sizeof(VAR_6->map_ops[0]), VAR_0);
 VAR_6->unmap_ops = FUNC_3(VAR_4, sizeof(VAR_6->unmap_ops[0]), VAR_0);
 VAR_6->kmap_ops = FUNC_3(VAR_4, sizeof(VAR_6->kmap_ops[0]), VAR_0);
 VAR_6->kunmap_ops = FUNC_3(VAR_4, sizeof(VAR_6->kunmap_ops[0]), VAR_0);
 VAR_6->pages = FUNC_3(VAR_4, sizeof(VAR_6->pages[0]), VAR_0);
 if (((void*)0) == VAR_6->grants ||
     ((void*)0) == VAR_6->map_ops ||
     ((void*)0) == VAR_6->unmap_ops ||
     ((void*)0) == VAR_6->kmap_ops ||
     ((void*)0) == VAR_6->kunmap_ops ||
     ((void*)0) == VAR_6->pages)
  goto err;
 if (FUNC_1(VAR_4, VAR_6->pages))
  goto err;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6->map_ops[VAR_7].handle = -1;
  VAR_6->unmap_ops[VAR_7].handle = -1;
  VAR_6->kmap_ops[VAR_7].handle = -1;
  VAR_6->kunmap_ops[VAR_7].handle = -1;
 }

 VAR_6->index = 0;
 VAR_6->count = VAR_4;
 FUNC_5(&VAR_6->users, 1);

 return VAR_6;

err:
 FUNC_0(VAR_6);
 return ((void*)0);
}
