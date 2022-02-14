
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_next; } ;
struct proc_maps_private {struct vm_area_struct* tail_vma; } ;



__attribute__((used)) static struct vm_area_struct *
FUNC_0(struct proc_maps_private *VAR_0, struct vm_area_struct *VAR_1)
{
 if (VAR_1 == VAR_0->tail_vma)
  return ((void*)0);
 return VAR_1->vm_next ?: VAR_0->tail_vma;
}
