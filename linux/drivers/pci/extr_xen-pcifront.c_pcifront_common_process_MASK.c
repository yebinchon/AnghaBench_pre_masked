
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pcifront_device {TYPE_4__* xdev; TYPE_2__* sh_info; } ;
struct pci_driver {TYPE_3__* err_handler; } ;
struct pci_dev {struct pci_driver* driver; } ;
typedef int pci_ers_result_t ;
typedef int pci_channel_state_t ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int (* resume ) (struct pci_dev*) ;int (* slot_reset ) (struct pci_dev*) ;int (* mmio_enabled ) (struct pci_dev*) ;int (* error_detected ) (struct pci_dev*,int ) ;} ;
struct TYPE_5__ {int bus; int devfn; int domain; } ;
struct TYPE_6__ {TYPE_1__ aer_op; } ;


 int VAR_0 ;




 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct pci_dev*,char*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (int,int,int) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_9(int VAR_1,
      struct pcifront_device *VAR_2,
      pci_channel_state_t VAR_3)
{
 pci_ers_result_t VAR_4;
 struct pci_driver *VAR_5;
 int VAR_6 = VAR_2->sh_info->aer_op.bus;
 int VAR_7 = VAR_2->sh_info->aer_op.devfn;
 int VAR_8 = VAR_2->sh_info->aer_op.domain;
 struct pci_dev *VAR_9;
 int VAR_10 = 0;

 FUNC_0(&VAR_2->xdev->dev,
  "pcifront AER process: cmd %x (bus:%x, devfn%x)",
  VAR_1, VAR_6, VAR_7);
 VAR_4 = VAR_0;

 VAR_9 = FUNC_4(VAR_8, VAR_6, VAR_7);
 if (!VAR_9 || !VAR_9->driver) {
  FUNC_1(&VAR_2->xdev->dev, "device or AER driver is NULL\n");
  FUNC_3(VAR_9);
  return VAR_4;
 }
 VAR_5 = VAR_9->driver;

 if (VAR_5) {
  if (VAR_5->err_handler && VAR_5->err_handler->error_detected) {
   FUNC_2(VAR_9, "trying to call AER service\n");
   if (VAR_9) {
    VAR_10 = 1;
    switch (VAR_1) {
    case 131:
     VAR_4 = VAR_5->err_handler->
       error_detected(VAR_9, VAR_3);
     break;
    case 130:
     VAR_4 = VAR_5->err_handler->
       mmio_enabled(VAR_9);
     break;
    case 128:
     VAR_4 = VAR_5->err_handler->
       slot_reset(VAR_9);
     break;
    case 129:
     VAR_5->err_handler->resume(VAR_9);
     break;
    default:
     FUNC_1(&VAR_2->xdev->dev,
      "bad request in aer recovery "
      "operation!\n");

    }
   }
  }
 }
 if (!VAR_10)
  VAR_4 = VAR_0;

 return VAR_4;
}
