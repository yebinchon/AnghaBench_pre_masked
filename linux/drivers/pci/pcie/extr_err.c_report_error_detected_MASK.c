
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_error_handlers {int (* error_detected ) (struct pci_dev*,int) ;} ;
struct pci_dev {scalar_t__ hdr_type; int dev; TYPE_1__* driver; } ;
typedef int pci_ers_result_t ;
typedef enum pci_ers_result { ____Placeholder_pci_ers_result } pci_ers_result ;
typedef enum pci_channel_state { ____Placeholder_pci_channel_state } pci_channel_state ;
struct TYPE_2__ {struct pci_error_handlers* err_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_3,
     enum pci_channel_state VAR_4,
     enum pci_ers_result *VAR_5)
{
 pci_ers_result_t VAR_6;
 const struct pci_error_handlers *VAR_7;

 FUNC_0(&VAR_3->dev);
 if (!FUNC_3(VAR_3, VAR_4) ||
  !VAR_3->driver ||
  !VAR_3->driver->err_handler ||
  !VAR_3->driver->err_handler->error_detected) {






  if (VAR_3->hdr_type != VAR_2)
   VAR_6 = VAR_1;
  else
   VAR_6 = VAR_0;
 } else {
  VAR_7 = VAR_3->driver->err_handler;
  VAR_6 = VAR_7->error_detected(VAR_3, VAR_4);
 }
 FUNC_4(VAR_3, VAR_6);
 *VAR_5 = FUNC_2(*VAR_5, VAR_6);
 FUNC_1(&VAR_3->dev);
 return 0;
}
