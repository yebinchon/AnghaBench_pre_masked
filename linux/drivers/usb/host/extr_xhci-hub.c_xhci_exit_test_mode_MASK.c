
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_hcd {scalar_t__ test_mode; int xhc_state; } ;
struct TYPE_3__ {int controller; } ;
struct TYPE_4__ {TYPE_1__ self; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xhci_hcd*,char*) ;
 int FUNC_2 (struct xhci_hcd*) ;
 int FUNC_3 (struct xhci_hcd*) ;
 TYPE_2__* FUNC_4 (struct xhci_hcd*) ;

__attribute__((used)) static int FUNC_5(struct xhci_hcd *VAR_2)
{
 int VAR_3;

 if (!VAR_2->test_mode) {
  FUNC_1(VAR_2, "Not in test mode, do nothing.\n");
  return 0;
 }
 if (VAR_2->test_mode == VAR_0 &&
  !(VAR_2->xhc_state & VAR_1)) {
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3)
   return VAR_3;
 }
 FUNC_0(FUNC_4(VAR_2)->self.controller);
 VAR_2->test_mode = 0;
 return FUNC_3(VAR_2);
}
