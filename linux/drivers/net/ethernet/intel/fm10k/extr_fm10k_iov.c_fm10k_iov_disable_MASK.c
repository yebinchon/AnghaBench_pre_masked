
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;

void FUNC_5(struct pci_dev *VAR_0)
{
 if (FUNC_3(VAR_0) && FUNC_4(VAR_0))
  FUNC_0(&VAR_0->dev,
   "Cannot disable SR-IOV while VFs are assigned\n");
 else
  FUNC_2(VAR_0);

 FUNC_1(VAR_0);
}
