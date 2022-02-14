
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_epf {TYPE_2__* driver; int dev; } ;
struct TYPE_4__ {int owner; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* unbind ) (struct pci_epf*) ;} ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_epf*) ;

void FUNC_3(struct pci_epf *VAR_0)
{
 if (!VAR_0->driver) {
  FUNC_0(&VAR_0->dev, "epf device not bound to driver\n");
  return;
 }

 VAR_0->driver->ops->unbind(VAR_0);
 FUNC_1(VAR_0->driver->owner);
}
