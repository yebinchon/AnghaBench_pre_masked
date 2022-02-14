
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_epf {TYPE_2__* driver; int dev; } ;
struct TYPE_4__ {TYPE_1__* ops; int owner; } ;
struct TYPE_3__ {int (* bind ) (struct pci_epf*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_epf*) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct pci_epf *VAR_2)
{
 if (!VAR_2->driver) {
  FUNC_0(&VAR_2->dev, "epf device not bound to driver\n");
  return -VAR_1;
 }

 if (!FUNC_2(VAR_2->driver->owner))
  return -VAR_0;

 return VAR_2->driver->ops->bind(VAR_2);
}
