
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct pci_bus {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,struct pci_bus*) ;
 struct pci_dev* FUNC_2 (struct pci_bus*,int) ;
 struct pci_dev* FUNC_3 (struct pci_bus*,int) ;

struct pci_dev *FUNC_4(struct pci_bus *VAR_0, int VAR_1)
{
 struct pci_dev *VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(VAR_2, VAR_0);

 return VAR_2;
}
