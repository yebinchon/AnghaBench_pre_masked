
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gnttab_dma_alloc_args {int coherent; int dev_bus_addr; scalar_t__ vaddr; struct gntdev_grant_map* frames; struct gntdev_grant_map* pages; int nr_pages; int dev; } ;
struct gntdev_grant_map {int dma_flags; struct gntdev_grant_map* kunmap_ops; struct gntdev_grant_map* kmap_ops; struct gntdev_grant_map* unmap_ops; struct gntdev_grant_map* map_ops; struct gntdev_grant_map* grants; struct gntdev_grant_map* pages; struct gntdev_grant_map* frames; int count; int dma_bus_addr; scalar_t__ dma_vaddr; int dma_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct gnttab_dma_alloc_args*) ;
 int FUNC_1 (int ,struct gntdev_grant_map*) ;
 int FUNC_2 (struct gntdev_grant_map*) ;

__attribute__((used)) static void FUNC_3(struct gntdev_grant_map *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;
 if (VAR_1->pages)
  FUNC_1(VAR_1->count, VAR_1->pages);




 FUNC_2(VAR_1->pages);
 FUNC_2(VAR_1->grants);
 FUNC_2(VAR_1->map_ops);
 FUNC_2(VAR_1->unmap_ops);
 FUNC_2(VAR_1->kmap_ops);
 FUNC_2(VAR_1->kunmap_ops);
 FUNC_2(VAR_1);
}
