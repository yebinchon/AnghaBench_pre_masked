
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gntdev_grant_map {TYPE_1__* vma; } ;
struct TYPE_2__ {unsigned long vm_start; unsigned long vm_end; } ;



__attribute__((used)) static bool FUNC_0(struct gntdev_grant_map *VAR_0,
         unsigned long VAR_1, unsigned long VAR_2)
{
 if (!VAR_0->vma)
  return 0;
 if (VAR_0->vma->vm_start >= VAR_2)
  return 0;
 if (VAR_0->vma->vm_end <= VAR_1)
  return 0;

 return 1;
}
