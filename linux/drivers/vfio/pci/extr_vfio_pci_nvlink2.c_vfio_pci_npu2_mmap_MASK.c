
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int vm_page_prot; int vm_flags; } ;
struct vfio_pci_region {struct vfio_pci_npu2_data* data; } ;
struct vfio_pci_npu2_data {int mmio_atsd; } ;
struct vfio_pci_device {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,int,unsigned long,int ) ;
 int FUNC_2 (int ,int,unsigned long,unsigned long,int) ;

__attribute__((used)) static int FUNC_3(struct vfio_pci_device *VAR_4,
  struct vfio_pci_region *VAR_5, struct vm_area_struct *VAR_6)
{
 int VAR_7;
 struct vfio_pci_npu2_data *VAR_8 = VAR_5->data;
 unsigned long VAR_9 = VAR_6->vm_end - VAR_6->vm_start;

 if (VAR_9 != VAR_2)
  return -VAR_0;

 VAR_6->vm_flags |= VAR_3;
 VAR_6->vm_page_prot = FUNC_0(VAR_6->vm_page_prot);

 VAR_7 = FUNC_1(VAR_6, VAR_6->vm_start, VAR_8->mmio_atsd >> VAR_1,
   VAR_9, VAR_6->vm_page_prot);
 FUNC_2(VAR_4->pdev, VAR_8->mmio_atsd, VAR_6->vm_start,
   VAR_6->vm_end - VAR_6->vm_start, VAR_7);

 return VAR_7;
}
