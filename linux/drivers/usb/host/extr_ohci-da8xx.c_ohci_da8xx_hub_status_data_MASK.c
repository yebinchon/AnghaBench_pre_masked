
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_hcd*,char*) ;

__attribute__((used)) static int FUNC_2(struct usb_hcd *VAR_1, char *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1, VAR_2);


 if (VAR_0 & (1 << 1)) {
  FUNC_0(VAR_1->self.controller, "over-current indicator change "
   "on port 1\n");

  if (!VAR_3)
   VAR_3 = 1;

  VAR_2[0] |= 1 << 1;
 }
 return VAR_3;
}
