
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epc {int dev; int group; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_epc*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct pci_epc *VAR_0)
{
 FUNC_2(VAR_0->group);
 FUNC_0(&VAR_0->dev);
 FUNC_1(VAR_0);
}
