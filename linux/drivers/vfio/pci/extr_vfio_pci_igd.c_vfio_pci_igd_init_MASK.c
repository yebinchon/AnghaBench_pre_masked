
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_device {int dummy; } ;


 int FUNC_0 (struct vfio_pci_device*) ;
 int FUNC_1 (struct vfio_pci_device*) ;

int FUNC_2(struct vfio_pci_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1;

 return 0;
}
