
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ device; int dev; } ;
struct dwc3_pci {int dwc3; int wakeup_work; struct pci_dev* pci; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 struct dwc3_pci* FUNC_3 (struct pci_dev*) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_2)
{
 struct dwc3_pci *VAR_3 = FUNC_3(VAR_2);
 struct pci_dev *VAR_4 = VAR_3->pci;

 if (VAR_4->device == VAR_0)
  FUNC_2(&VAR_1);



 FUNC_1(&VAR_2->dev, 0);
 FUNC_5(&VAR_2->dev);
 FUNC_4(VAR_3->dwc3);
}
