
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_error_handlers {int (* mmio_enabled ) (struct pci_dev*) ;} ;
struct pci_dev {int dev; TYPE_1__* driver; } ;
typedef int pci_ers_result_t ;
struct TYPE_2__ {struct pci_error_handlers* err_handler; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_0, void *VAR_1)
{
 pci_ers_result_t VAR_2, *VAR_3 = VAR_1;
 const struct pci_error_handlers *VAR_4;

 FUNC_0(&VAR_0->dev);
 if (!VAR_0->driver ||
  !VAR_0->driver->err_handler ||
  !VAR_0->driver->err_handler->mmio_enabled)
  goto out;

 VAR_4 = VAR_0->driver->err_handler;
 VAR_2 = VAR_4->mmio_enabled(VAR_0);
 *VAR_3 = FUNC_2(*VAR_3, VAR_2);
out:
 FUNC_1(&VAR_0->dev);
 return 0;
}
