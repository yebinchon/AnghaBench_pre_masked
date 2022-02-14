
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {scalar_t__ address; int pgoff; TYPE_1__* vma; } ;
struct TYPE_2__ {int vm_end; int vm_start; } ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*,int ,int ,int ,void*) ;

__attribute__((used)) static vm_fault_t FUNC_1(struct vm_fault *VAR_1)
{
 FUNC_0("fault: vma=%p %lx-%lx, pgoff=%lx, uv=%p\n",
   VAR_1->vma, VAR_1->vma->vm_start, VAR_1->vma->vm_end,
   VAR_1->pgoff, (void *)VAR_1->address);

 return VAR_0;
}
