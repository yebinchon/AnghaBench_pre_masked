
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int mmap_sem; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mm_struct*,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_2, size_t VAR_3)
{
 struct mm_struct *VAR_4 = VAR_1->mm;
 int VAR_5;

 FUNC_1(&VAR_4->mmap_sem);
 VAR_5 = FUNC_0(FUNC_2(VAR_4, VAR_2),
         VAR_2 + VAR_3 * VAR_0);
 FUNC_3(&VAR_4->mmap_sem);

 return VAR_5;
}
