
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pnv_php_slot {scalar_t__ irq; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct hotplug_slot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 int FUNC_4 (struct pci_dev*,int ,int) ;
 struct pnv_php_slot* FUNC_5 (struct hotplug_slot*) ;

__attribute__((used)) static int FUNC_6(struct hotplug_slot *VAR_3, int VAR_4)
{
 struct pnv_php_slot *VAR_5 = FUNC_5(VAR_3);
 struct pci_dev *VAR_6 = VAR_5->pdev;
 uint16_t VAR_7;






 if (VAR_4)
  return !VAR_6;


 if (VAR_5->irq > 0)
  FUNC_0(VAR_5->irq);

 FUNC_2(VAR_6);


 FUNC_3(VAR_5->pdev, VAR_0, &VAR_7);
 VAR_7 &= (VAR_2 | VAR_1);
 FUNC_4(VAR_5->pdev, VAR_0, VAR_7);

 if (VAR_5->irq > 0)
  FUNC_1(VAR_5->irq);

 return 0;
}
