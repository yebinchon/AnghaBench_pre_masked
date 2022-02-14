
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_pgoff; unsigned long vm_end; } ;
typedef unsigned long pgoff_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (int,struct vm_area_struct*) ;

__attribute__((used)) static inline
unsigned long FUNC_1(pgoff_t VAR_1, struct vm_area_struct *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = VAR_2->vm_start + ((VAR_1 - VAR_2->vm_pgoff) << VAR_0);
 FUNC_0(VAR_3 < VAR_2->vm_start || VAR_3 >= VAR_2->vm_end, VAR_2);
 return VAR_3;
}
