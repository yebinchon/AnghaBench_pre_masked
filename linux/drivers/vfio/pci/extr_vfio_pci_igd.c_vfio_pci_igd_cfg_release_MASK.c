
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_region {struct pci_dev* data; } ;
struct vfio_pci_device {int dummy; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_1(struct vfio_pci_device *VAR_0,
         struct vfio_pci_region *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->data;

 FUNC_0(VAR_2);
}
