
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int bus; int slot; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct pci_dev *VAR_0)
{
 return (!FUNC_2(VAR_0->slot)) ?
     FUNC_1(VAR_0->slot) : FUNC_0(VAR_0->bus);
}
