
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_region {struct vfio_pci_npu2_data* data; } ;
struct vfio_pci_npu2_data {int base; } ;
struct vfio_pci_device {int dummy; } ;


 int FUNC_0 (struct vfio_pci_npu2_data*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct vfio_pci_device *VAR_0,
  struct vfio_pci_region *VAR_1)
{
 struct vfio_pci_npu2_data *VAR_2 = VAR_1->data;

 FUNC_1(VAR_2->base);
 FUNC_0(VAR_2);
}
