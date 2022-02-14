
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; scalar_t__ has_tt; } ;


 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int FUNC_1(struct usb_hcd *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0->self.controller, "port %d cannot be enabled\n", VAR_1);
 if (VAR_0->has_tt) {
  FUNC_0(VAR_0->self.controller,
   "Maybe you have connected a low speed device?\n");

  FUNC_0(VAR_0->self.controller,
   "We do not support low speed devices\n");
 } else {
  FUNC_0(VAR_0->self.controller,
   "Maybe your device is not a high speed device?\n");
  FUNC_0(VAR_0->self.controller,
   "The USB host controller does not support full speed "
   "nor low speed devices\n");
  FUNC_0(VAR_0->self.controller,
   "You can reconfigure the host controller to have "
   "full speed support\n");
 }

 return 0;
}
