
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int number; } ;


 struct pci_bus* FUNC_0 (struct pci_bus*,int *,int) ;
 int FUNC_1 (struct pci_bus*,int,int) ;
 int FUNC_2 (struct pci_bus*) ;
 struct pci_bus* FUNC_3 (int ,int) ;

__attribute__((used)) static struct pci_bus *FUNC_4(struct pci_bus *VAR_0, int VAR_1)
{
 struct pci_bus *VAR_2;

 if (VAR_0->number == VAR_1)
  return VAR_0;

 VAR_2 = FUNC_3(FUNC_2(VAR_0), VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, ((void*)0), VAR_1);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(VAR_2, VAR_1, VAR_1);

 return VAR_2;
}
