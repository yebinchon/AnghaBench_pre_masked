
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct module* owner; int * bus; } ;
struct pci_epf_driver {TYPE_2__ driver; TYPE_1__* ops; } ;
struct module {int dummy; } ;
struct TYPE_3__ {int linkup; int unbind; int bind; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct pci_epf_driver*) ;
 int VAR_1 ;

int FUNC_2(struct pci_epf_driver *VAR_2,
         struct module *VAR_3)
{
 int VAR_4;

 if (!VAR_2->ops)
  return -VAR_0;

 if (!VAR_2->ops->bind || !VAR_2->ops->unbind || !VAR_2->ops->linkup)
  return -VAR_0;

 VAR_2->driver.bus = &VAR_1;
 VAR_2->driver.owner = VAR_3;

 VAR_4 = FUNC_0(&VAR_2->driver);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_2);

 return 0;
}
