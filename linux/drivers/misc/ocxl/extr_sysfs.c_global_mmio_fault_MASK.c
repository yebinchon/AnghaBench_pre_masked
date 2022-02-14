
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {unsigned long pgoff; int address; struct vm_area_struct* vma; } ;
struct vm_area_struct {struct ocxl_afu* vm_private_data; } ;
struct TYPE_2__ {unsigned long global_mmio_size; } ;
struct ocxl_afu {unsigned long global_mmio_start; TYPE_1__ config; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vm_area_struct*,int ,unsigned long) ;

__attribute__((used)) static vm_fault_t FUNC_1(struct vm_fault *VAR_2)
{
 struct vm_area_struct *VAR_3 = VAR_2->vma;
 struct ocxl_afu *VAR_4 = VAR_3->vm_private_data;
 unsigned long VAR_5;

 if (VAR_2->pgoff >= (VAR_4->config.global_mmio_size >> VAR_0))
  return VAR_1;

 VAR_5 = VAR_2->pgoff;
 VAR_5 += (VAR_4->global_mmio_start >> VAR_0);
 return FUNC_0(VAR_3, VAR_2->address, VAR_5);
}
