
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tce_container {TYPE_1__* mm; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mm_count; } ;


 int FUNC_0 (int) ;
 long VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static long FUNC_2(struct tce_container *VAR_2)
{
 if (VAR_2->mm) {
  if (VAR_2->mm == VAR_1->mm)
   return 0;
  return -VAR_0;
 }
 FUNC_0(!VAR_1->mm);
 VAR_2->mm = VAR_1->mm;
 FUNC_1(&VAR_2->mm->mm_count);

 return 0;
}
