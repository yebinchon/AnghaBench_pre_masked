
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_error_handlers {int (* reset_done ) (struct pci_dev*) ;} ;
struct pci_dev {TYPE_1__* driver; } ;
struct TYPE_2__ {struct pci_error_handlers* err_handler; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
 const struct pci_error_handlers *VAR_1 =
   VAR_0->driver ? VAR_0->driver->err_handler : ((void*)0);

 FUNC_0(VAR_0);






 if (VAR_1 && VAR_1->reset_done)
  VAR_1->reset_done(VAR_0);
}
