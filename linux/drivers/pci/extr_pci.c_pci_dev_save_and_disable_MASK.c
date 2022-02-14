
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_error_handlers {int (* reset_prepare ) (struct pci_dev*) ;} ;
struct pci_dev {TYPE_1__* driver; } ;
struct TYPE_2__ {struct pci_error_handlers* err_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,int ,int ) ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_3)
{
 const struct pci_error_handlers *VAR_4 =
   VAR_3->driver ? VAR_3->driver->err_handler : ((void*)0);






 if (VAR_4 && VAR_4->reset_prepare)
  VAR_4->reset_prepare(VAR_3);






 FUNC_1(VAR_3, VAR_2);

 FUNC_0(VAR_3);







 FUNC_2(VAR_3, VAR_0, VAR_1);
}
