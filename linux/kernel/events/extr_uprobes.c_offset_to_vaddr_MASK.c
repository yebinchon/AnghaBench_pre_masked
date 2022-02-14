
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; scalar_t__ vm_pgoff; } ;
typedef unsigned long loff_t ;


 unsigned long VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(struct vm_area_struct *VAR_1, loff_t VAR_2)
{
 return VAR_1->vm_start + VAR_2 - ((loff_t)VAR_1->vm_pgoff << VAR_0);
}
