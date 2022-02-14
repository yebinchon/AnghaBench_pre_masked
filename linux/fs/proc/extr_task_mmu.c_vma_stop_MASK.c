
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_maps_private {struct mm_struct* mm; } ;
struct mm_struct {int mmap_sem; } ;


 int FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (struct proc_maps_private*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct proc_maps_private *VAR_0)
{
 struct mm_struct *VAR_1 = VAR_0->mm;

 FUNC_1(VAR_0);
 FUNC_2(&VAR_1->mmap_sem);
 FUNC_0(VAR_1);
}
