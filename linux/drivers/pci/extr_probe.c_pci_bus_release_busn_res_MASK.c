
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int parent; int flags; } ;
struct pci_bus {int dev; struct resource busn_res; } ;


 int FUNC_0 (int *,char*,struct resource*,char*) ;
 int FUNC_1 (struct resource*) ;

void FUNC_2(struct pci_bus *VAR_0)
{
 struct resource *VAR_1 = &VAR_0->busn_res;
 int VAR_2;

 if (!VAR_1->flags || !VAR_1->parent)
  return;

 VAR_2 = FUNC_1(VAR_1);
 FUNC_0(&VAR_0->dev, "busn_res: %pR %s released\n",
   VAR_1, VAR_2 ? "can not be" : "is");
}
