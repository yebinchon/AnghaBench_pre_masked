
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_device {int pm_save; scalar_t__ needs_pm_restore; struct pci_dev* pdev; } ;
struct pci_dev {scalar_t__ current_state; } ;
typedef scalar_t__ pci_power_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,int *) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__) ;
 int FUNC_4 (struct pci_dev*) ;

int FUNC_5(struct vfio_pci_device *VAR_2, pci_power_t VAR_3)
{
 struct pci_dev *VAR_4 = VAR_2->pdev;
 bool VAR_5 = 0, VAR_6 = 0;
 int VAR_7;

 if (VAR_2->needs_pm_restore) {
  if (VAR_4->current_state < VAR_1 && VAR_3 >= VAR_1) {
   FUNC_2(VAR_4);
   VAR_6 = 1;
  }

  if (VAR_4->current_state >= VAR_1 && VAR_3 <= VAR_0)
   VAR_5 = 1;
 }

 VAR_7 = FUNC_3(VAR_4, VAR_3);

 if (!VAR_7) {

  if (VAR_6 && VAR_4->current_state >= VAR_1) {
   VAR_2->pm_save = FUNC_4(VAR_4);
  } else if (VAR_5) {
   FUNC_0(VAR_4, &VAR_2->pm_save);
   FUNC_1(VAR_4);
  }
 }

 return VAR_7;
}
