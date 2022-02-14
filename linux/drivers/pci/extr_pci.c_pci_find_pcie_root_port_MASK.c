
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (struct pci_dev*) ;

struct pci_dev *FUNC_3(struct pci_dev *VAR_1)
{
 struct pci_dev *VAR_2, *VAR_3 = VAR_1;

 VAR_2 = FUNC_2(VAR_1);
 while (VAR_2 && FUNC_0(VAR_2)) {
  VAR_3 = VAR_2;
  VAR_2 = FUNC_2(VAR_2);
 }

 if (FUNC_1(VAR_3) != VAR_0)
  return ((void*)0);

 return VAR_3;
}
