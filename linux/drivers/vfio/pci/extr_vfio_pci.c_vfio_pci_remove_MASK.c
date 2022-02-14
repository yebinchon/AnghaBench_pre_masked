
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vfio_pci_device {struct vfio_pci_device* pm_save; int ioeventfds_lock; struct vfio_pci_device* region; int reflck; } ;
struct TYPE_3__ {int iommu_group; } ;
struct pci_dev {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vfio_pci_device*) ;
 int FUNC_1 (int *) ;
 struct vfio_pci_device* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct vfio_pci_device*,int ) ;
 int FUNC_7 (struct pci_dev*,int *,int *,int *) ;
 int FUNC_8 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_6)
{
 struct vfio_pci_device *VAR_7;

 VAR_7 = FUNC_2(&VAR_6->dev);
 if (!VAR_7)
  return;

 FUNC_5(VAR_7->reflck);

 FUNC_3(VAR_6->dev.iommu_group, &VAR_6->dev);
 FUNC_0(VAR_7->region);
 FUNC_1(&VAR_7->ioeventfds_lock);

 if (!VAR_5)
  FUNC_6(VAR_7, VAR_0);

 FUNC_0(VAR_7->pm_save);
 FUNC_0(VAR_7);

 if (FUNC_4(VAR_6)) {
  FUNC_7(VAR_6, ((void*)0), ((void*)0), ((void*)0));
  FUNC_8(VAR_6,
    VAR_3 | VAR_4 |
    VAR_1 | VAR_2);
 }
}
