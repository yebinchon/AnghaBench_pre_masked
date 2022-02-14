
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct TYPE_5__ {int devfn; int bus; int seg; } ;
struct TYPE_6__ {TYPE_1__ pci; } ;
struct physdev_dbgp_op {int op; int bus; TYPE_2__ u; } ;
struct pci_dev {int devfn; TYPE_3__* bus; } ;
struct device {int dummy; } ;
struct TYPE_8__ {struct device* controller; } ;
struct TYPE_7__ {int number; } ;


 int FUNC_0 (int ,struct physdev_dbgp_op*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct device const*) ;
 TYPE_4__* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (TYPE_3__*) ;
 struct pci_dev* FUNC_4 (struct device const*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct usb_hcd *VAR_3, int VAR_4)
{



 struct physdev_dbgp_op VAR_5;

 if (!FUNC_5())
  return 0;

 VAR_5.op = VAR_4;
  VAR_5.bus = VAR_1;

 return FUNC_0(VAR_2, &VAR_5);
}
