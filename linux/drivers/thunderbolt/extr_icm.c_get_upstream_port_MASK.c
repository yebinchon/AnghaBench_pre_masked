
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int device; } ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static struct pci_dev *FUNC_3(struct pci_dev *VAR_1)
{
 struct pci_dev *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 while (VAR_2) {
  if (!FUNC_0(VAR_2))
   return ((void*)0);
  if (FUNC_1(VAR_2) == VAR_0)
   break;
  VAR_2 = FUNC_2(VAR_2);
 }

 if (!VAR_2)
  return ((void*)0);

 switch (VAR_2->device) {
 case 134:
 case 133:
 case 130:
 case 131:
 case 132:
 case 129:
 case 128:
  return VAR_2;
 }

 return ((void*)0);
}
