
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_hcd {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* controller; } ;
struct TYPE_4__ {TYPE_1__ self; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct xhci_hcd*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct xhci_hcd*) ;
 int FUNC_4 (struct xhci_hcd*) ;
 TYPE_2__* FUNC_5 (struct xhci_hcd*) ;

int FUNC_6(struct xhci_hcd *VAR_1)
{
 int VAR_2;
 struct device *VAR_3 = FUNC_5(VAR_1)->self.controller;

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2)
  goto init_err3;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  goto init_err2;

 VAR_2 = FUNC_0(VAR_3, &VAR_0);
 if (VAR_2)
  goto init_err1;

 return 0;

init_err1:
 FUNC_2();
init_err2:
 FUNC_3(VAR_1);
init_err3:
 return VAR_2;
}
