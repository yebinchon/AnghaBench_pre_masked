
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct pci_bus_resource {unsigned int flags; int list; struct resource* res; } ;
struct pci_bus {int resources; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,struct resource*) ;
 struct pci_bus_resource* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(struct pci_bus *VAR_1, struct resource *VAR_2,
     unsigned int VAR_3)
{
 struct pci_bus_resource *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct pci_bus_resource), VAR_0);
 if (!VAR_4) {
  FUNC_0(&VAR_1->dev, "can't add %pR resource\n", VAR_2);
  return;
 }

 VAR_4->res = VAR_2;
 VAR_4->flags = VAR_3;
 FUNC_2(&VAR_4->list, &VAR_1->resources);
}
