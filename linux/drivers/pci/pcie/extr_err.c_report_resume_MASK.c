
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_error_handlers {int (* resume ) (struct pci_dev*) ;} ;
struct pci_dev {int dev; TYPE_1__* driver; } ;
struct TYPE_2__ {struct pci_error_handlers* err_handler; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_2, void *VAR_3)
{
 const struct pci_error_handlers *VAR_4;

 FUNC_0(&VAR_2->dev);
 if (!FUNC_2(VAR_2, VAR_1) ||
  !VAR_2->driver ||
  !VAR_2->driver->err_handler ||
  !VAR_2->driver->err_handler->resume)
  goto out;

 VAR_4 = VAR_2->driver->err_handler;
 VAR_4->resume(VAR_2);
out:
 FUNC_3(VAR_2, VAR_0);
 FUNC_1(&VAR_2->dev);
 return 0;
}
