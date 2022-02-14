
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vfio_pci_device {int needs_pm_restore; struct pci_dev* pdev; } ;
struct pci_dev {scalar_t__ pm_cap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int*) ;

__attribute__((used)) static void FUNC_1(struct vfio_pci_device *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;
 u16 VAR_4;

 if (!VAR_3->pm_cap)
  return;

 FUNC_0(VAR_3, VAR_3->pm_cap + VAR_0, &VAR_4);

 VAR_2->needs_pm_restore = !(VAR_4 & VAR_1);
}
