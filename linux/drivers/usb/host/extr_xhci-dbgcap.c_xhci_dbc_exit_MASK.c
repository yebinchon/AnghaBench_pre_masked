
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_hcd {int dbc; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* controller; } ;
struct TYPE_4__ {TYPE_1__ self; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct xhci_hcd*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct xhci_hcd*) ;
 TYPE_2__* FUNC_4 (struct xhci_hcd*) ;

void FUNC_5(struct xhci_hcd *VAR_1)
{
 struct device *VAR_2 = FUNC_4(VAR_1)->self.controller;

 if (!VAR_1->dbc)
  return;

 FUNC_0(VAR_2, &VAR_0);
 FUNC_2();
 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
}
