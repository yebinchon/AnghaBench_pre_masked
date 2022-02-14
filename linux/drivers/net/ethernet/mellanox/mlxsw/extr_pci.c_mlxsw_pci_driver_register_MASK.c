
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_driver {int remove; int probe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_driver*) ;

int FUNC_1(struct pci_driver *VAR_2)
{
 VAR_2->probe = VAR_0;
 VAR_2->remove = VAR_1;
 return FUNC_0(VAR_2);
}
