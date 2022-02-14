
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct gntdev_grant_map {int flags; unsigned int count; int * unmap_ops; TYPE_2__* grants; int * map_ops; TYPE_1__* vma; } ;
typedef int pte_t ;
struct TYPE_6__ {int maddr; } ;
struct TYPE_5__ {int domid; int ref; } ;
struct TYPE_4__ {unsigned long vm_start; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int,int ,int ) ;
 int FUNC_3 (int *,int ,int,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(pte_t *VAR_5, unsigned long VAR_6, void *VAR_7)
{
 struct gntdev_grant_map *VAR_8 = VAR_7;
 unsigned int VAR_9 = (VAR_6 - VAR_8->vma->vm_start) >> VAR_2;
 int VAR_10 = VAR_8->flags | VAR_0 | VAR_1;
 u64 VAR_11;

 FUNC_0(VAR_9 >= VAR_8->count);
 VAR_11 = FUNC_1(VAR_5).maddr;






 if (FUNC_4(VAR_3))
  VAR_10 |= (1 << VAR_4);

 FUNC_2(&VAR_8->map_ops[VAR_9], VAR_11, VAR_10,
     VAR_8->grants[VAR_9].ref,
     VAR_8->grants[VAR_9].domid);
 FUNC_3(&VAR_8->unmap_ops[VAR_9], VAR_11, VAR_10,
       -1 );
 return 0;
}
