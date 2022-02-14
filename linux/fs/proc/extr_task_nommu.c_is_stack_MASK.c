
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; struct mm_struct* vm_mm; } ;
struct mm_struct {scalar_t__ start_stack; } ;



__attribute__((used)) static int FUNC_0(struct vm_area_struct *VAR_0)
{
 struct mm_struct *VAR_1 = VAR_0->vm_mm;






 return VAR_0->vm_start <= VAR_1->start_stack &&
  VAR_0->vm_end >= VAR_1->start_stack;
}
