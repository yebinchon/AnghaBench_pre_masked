
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int * vm_ops; int vm_flags; struct vfio_pci_region* vm_private_data; } ;
struct vfio_pci_region {struct vfio_pci_nvgpu_data* data; } ;
struct vfio_pci_nvgpu_data {scalar_t__ useraddr; scalar_t__ size; int gpu_hpa; int mem; TYPE_1__* mm; } ;
struct vfio_pci_device {int pdev; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mm_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,int ,int ,int *) ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__,int) ;
 int VAR_4 ;
 int FUNC_3 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_4(struct vfio_pci_device *VAR_5,
  struct vfio_pci_region *VAR_6, struct vm_area_struct *VAR_7)
{
 int VAR_8;
 struct vfio_pci_nvgpu_data *VAR_9 = VAR_6->data;

 if (VAR_9->useraddr)
  return -VAR_1;

 if (VAR_7->vm_end - VAR_7->vm_start > VAR_9->size)
  return -VAR_0;

 VAR_7->vm_private_data = VAR_6;
 VAR_7->vm_flags |= VAR_2;
 VAR_7->vm_ops = &VAR_4;







 VAR_9->useraddr = VAR_7->vm_start;
 VAR_9->mm = VAR_3->mm;

 FUNC_0(&VAR_9->mm->mm_count);
 VAR_8 = (int) FUNC_1(VAR_9->mm, VAR_9->useraddr,
   FUNC_3(VAR_7), VAR_9->gpu_hpa, &VAR_9->mem);

 FUNC_2(VAR_5->pdev, VAR_9->gpu_hpa, VAR_9->useraddr,
   VAR_7->vm_end - VAR_7->vm_start, VAR_8);

 return VAR_8;
}
