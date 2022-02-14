
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {unsigned int address; struct vm_area_struct* vma; } ;
struct vm_area_struct {unsigned int vm_start; unsigned int vm_pgoff; struct vfio_pci_region* vm_private_data; } ;
struct vfio_pci_region {struct vfio_pci_nvgpu_data* data; } ;
struct vfio_pci_nvgpu_data {unsigned int gpu_hpa; int gpdev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,unsigned long,unsigned int,int ) ;
 int FUNC_1 (struct vm_area_struct*,unsigned int,unsigned long) ;

__attribute__((used)) static vm_fault_t FUNC_2(struct vm_fault *VAR_2)
{
 vm_fault_t VAR_3;
 struct vm_area_struct *VAR_4 = VAR_2->vma;
 struct vfio_pci_region *VAR_5 = VAR_4->vm_private_data;
 struct vfio_pci_nvgpu_data *VAR_6 = VAR_5->data;
 unsigned long VAR_7 = (VAR_2->address - VAR_4->vm_start) >> VAR_0;
 unsigned long VAR_8 = VAR_6->gpu_hpa >> VAR_0;
 unsigned long VAR_9 = VAR_4->vm_pgoff &
  ((1U << (VAR_1 - VAR_0)) - 1);
 unsigned long VAR_10 = VAR_8 + VAR_9 + VAR_7;

 VAR_3 = FUNC_1(VAR_4, VAR_2->address, VAR_10);
 FUNC_0(VAR_6->gpdev, VAR_10 << VAR_0,
   VAR_2->address, VAR_3);

 return VAR_3;
}
