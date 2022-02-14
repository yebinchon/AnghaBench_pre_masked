
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{




 if (FUNC_2(VAR_0)) {
  FUNC_0(&VAR_0->dev,
    "disabling driver while VFs are assigned\n");
  return;
 }

 FUNC_1(VAR_0);
}
