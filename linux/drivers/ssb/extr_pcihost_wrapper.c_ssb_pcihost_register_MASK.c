
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pm; } ;
struct pci_driver {TYPE_1__ driver; int remove; int probe; } ;


 int FUNC_0 (struct pci_driver*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(struct pci_driver *VAR_3)
{
 VAR_3->probe = VAR_1;
 VAR_3->remove = VAR_2;




 return FUNC_0(VAR_3);
}
