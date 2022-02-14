
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct TYPE_2__ {int speed; } ;
struct renesas_usb3 {int softconnect; scalar_t__ phy; int * driver; TYPE_1__ gadget; } ;


 int VAR_0 ;
 struct renesas_usb3* FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct renesas_usb3*) ;
 int FUNC_4 (struct renesas_usb3*) ;

__attribute__((used)) static int FUNC_5(struct usb_gadget *VAR_1)
{
 struct renesas_usb3 *VAR_2 = FUNC_0(VAR_1);

 VAR_2->softconnect = 0;
 VAR_2->gadget.speed = VAR_0;
 VAR_2->driver = ((void*)0);
 FUNC_3(VAR_2);

 if (VAR_2->phy)
  FUNC_1(VAR_2->phy);

 FUNC_2(FUNC_4(VAR_2));

 return 0;
}
