
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_bus {int dev; TYPE_1__* ops; int node; } ;
struct TYPE_2__ {int (* remove_bus ) (struct pci_bus*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pci_bus*) ;
 int VAR_0 ;
 int FUNC_4 (struct pci_bus*) ;
 int FUNC_5 (struct pci_bus*) ;
 int FUNC_6 (struct pci_bus*) ;
 int FUNC_7 (struct pci_bus*) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct pci_bus *VAR_1)
{
 FUNC_4(VAR_1);

 FUNC_1(&VAR_0);
 FUNC_2(&VAR_1->node);
 FUNC_3(VAR_1);
 FUNC_8(&VAR_0);
 FUNC_5(VAR_1);

 if (VAR_1->ops->remove_bus)
  VAR_1->ops->remove_bus(VAR_1);

 FUNC_6(VAR_1);
 FUNC_0(&VAR_1->dev);
}
