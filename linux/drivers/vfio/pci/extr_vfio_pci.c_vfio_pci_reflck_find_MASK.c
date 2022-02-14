
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_reflck {int dummy; } ;
struct vfio_pci_device {struct vfio_pci_reflck* reflck; } ;
struct vfio_device {int dummy; } ;
struct pci_dev {int dev; } ;


 int * FUNC_0 (struct pci_dev*) ;
 struct vfio_pci_device* FUNC_1 (struct vfio_device*) ;
 struct vfio_device* FUNC_2 (int *) ;
 int FUNC_3 (struct vfio_device*) ;
 int VAR_0 ;
 int FUNC_4 (struct vfio_pci_reflck*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_1, void *VAR_2)
{
 struct vfio_pci_reflck **VAR_3 = VAR_2;
 struct vfio_device *VAR_4;
 struct vfio_pci_device *VAR_5;

 VAR_4 = FUNC_2(&VAR_1->dev);
 if (!VAR_4)
  return 0;

 if (FUNC_0(VAR_1) != &VAR_0) {
  FUNC_3(VAR_4);
  return 0;
 }

 VAR_5 = FUNC_1(VAR_4);

 if (VAR_5->reflck) {
  FUNC_4(VAR_5->reflck);
  *VAR_3 = VAR_5->reflck;
  FUNC_3(VAR_4);
  return 1;
 }

 FUNC_3(VAR_4);
 return 0;
}
