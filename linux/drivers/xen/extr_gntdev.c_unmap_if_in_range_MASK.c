
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gntdev_grant_map {TYPE_1__* vma; int count; int index; } ;
struct TYPE_2__ {unsigned long vm_start; int vm_end; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gntdev_grant_map*,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 unsigned long FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (char*,int ,int ,unsigned long,int ,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_5 (struct gntdev_grant_map*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct gntdev_grant_map *VAR_2,
         unsigned long VAR_3, unsigned long VAR_4,
         bool VAR_5)
{
 unsigned long VAR_6, VAR_7;
 int VAR_8;

 if (!FUNC_1(VAR_2, VAR_3, VAR_4))
  return 0;

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_3, VAR_2->vma->vm_start);
 VAR_7 = FUNC_3(VAR_4, VAR_2->vma->vm_end);
 FUNC_4("map %d+%d (%lx %lx), range %lx %lx, mrange %lx %lx\n",
   VAR_2->index, VAR_2->count,
   VAR_2->vma->vm_start, VAR_2->vma->vm_end,
   VAR_3, VAR_4, VAR_6, VAR_7);
 VAR_8 = FUNC_5(VAR_2,
    (VAR_6 - VAR_2->vma->vm_start) >> VAR_1,
    (VAR_7 - VAR_6) >> VAR_1);
 FUNC_0(VAR_8);

 return 0;
}
