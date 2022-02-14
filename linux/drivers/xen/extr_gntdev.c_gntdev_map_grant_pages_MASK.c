
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct gntdev_grant_map {int count; int flags; TYPE_2__* unmap_ops; int * pages; scalar_t__ dma_vaddr; TYPE_3__* kmap_ops; TYPE_2__* kunmap_ops; TYPE_3__* map_ops; int index; TYPE_1__* grants; } ;
struct TYPE_8__ {int handle; scalar_t__ status; } ;
struct TYPE_7__ {int handle; int dev_bus_addr; } ;
struct TYPE_6__ {int domid; int ref; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*,int *,int) ;
 int FUNC_4 (TYPE_3__*,unsigned long,int,int ,int ) ;
 int FUNC_5 (TYPE_2__*,unsigned long,int,int) ;
 int FUNC_6 (int ) ;
 unsigned long FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,int) ;
 scalar_t__ VAR_2 ;

int FUNC_10(struct gntdev_grant_map *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 if (!VAR_2) {

  if (VAR_3->map_ops[0].handle != -1)
   return 0;
  for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++) {
   unsigned long VAR_6 = (unsigned long)
    FUNC_8(FUNC_6(VAR_3->pages[VAR_4]));
   FUNC_4(&VAR_3->map_ops[VAR_4], VAR_6, VAR_3->flags,
    VAR_3->grants[VAR_4].ref,
    VAR_3->grants[VAR_4].domid);
   FUNC_5(&VAR_3->unmap_ops[VAR_4], VAR_6,
    VAR_3->flags, -1 );
  }
 } else {






  for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++) {
   unsigned long VAR_7 = (unsigned long)
    FUNC_8(FUNC_6(VAR_3->pages[VAR_4]));
   FUNC_0(FUNC_1(VAR_3->pages[VAR_4]));

   FUNC_4(&VAR_3->kmap_ops[VAR_4], VAR_7,
    VAR_3->flags | VAR_1,
    VAR_3->grants[VAR_4].ref,
    VAR_3->grants[VAR_4].domid);
   FUNC_5(&VAR_3->kunmap_ops[VAR_4], VAR_7,
    VAR_3->flags | VAR_1, -1);
  }
 }

 FUNC_9("map %d+%d\n", VAR_3->index, VAR_3->count);
 VAR_5 = FUNC_3(VAR_3->map_ops, VAR_2 ? VAR_3->kmap_ops : ((void*)0),
   VAR_3->pages, VAR_3->count);
 if (VAR_5)
  return VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++) {
  if (VAR_3->map_ops[VAR_4].status) {
   VAR_5 = -VAR_0;
   continue;
  }

  VAR_3->unmap_ops[VAR_4].handle = VAR_3->map_ops[VAR_4].handle;
  if (VAR_2)
   VAR_3->kunmap_ops[VAR_4].handle = VAR_3->kmap_ops[VAR_4].handle;
 }
 return VAR_5;
}
