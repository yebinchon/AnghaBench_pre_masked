
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int pme_poll; scalar_t__ current_state; int subordinate; int dev; scalar_t__ pme_support; } ;
struct acpi_device_wakeup_context {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int *) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct acpi_device_wakeup_context *VAR_1)
{
 struct pci_dev *VAR_2;

 VAR_2 = FUNC_4(VAR_1->dev);

 if (VAR_2->pme_poll)
  VAR_2->pme_poll = 0;

 if (VAR_2->current_state == VAR_0) {
  FUNC_2(VAR_2);
  FUNC_3(&VAR_2->dev);
  return;
 }


 if (VAR_2->pme_support)
  FUNC_0(VAR_2);

 FUNC_2(VAR_2);
 FUNC_3(&VAR_2->dev);

 FUNC_1(VAR_2->subordinate);
}
