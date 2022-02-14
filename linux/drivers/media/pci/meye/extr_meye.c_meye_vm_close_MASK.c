
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_private_data; } ;
struct TYPE_2__ {int * vma_use_count; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct vm_area_struct *VAR_1)
{
 long VAR_2 = (long)VAR_1->vm_private_data;
 VAR_0.vma_use_count[VAR_2]--;
}
