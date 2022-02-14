
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; TYPE_1__* vm_mm; } ;
struct TYPE_2__ {scalar_t__ start_stack; } ;



__attribute__((used)) static int FUNC_0(struct vm_area_struct *VAR_0)
{





 return VAR_0->vm_start <= VAR_0->vm_mm->start_stack &&
  VAR_0->vm_end >= VAR_0->vm_mm->start_stack;
}
