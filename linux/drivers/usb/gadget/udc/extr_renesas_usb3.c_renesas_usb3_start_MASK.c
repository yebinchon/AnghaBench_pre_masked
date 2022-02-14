
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget_driver {scalar_t__ max_speed; int setup; } ;
struct usb_gadget {int dummy; } ;
struct renesas_usb3 {scalar_t__ phy; struct usb_gadget_driver* driver; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct renesas_usb3* FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct renesas_usb3*) ;
 int FUNC_4 (struct renesas_usb3*) ;

__attribute__((used)) static int FUNC_5(struct usb_gadget *VAR_2,
         struct usb_gadget_driver *VAR_3)
{
 struct renesas_usb3 *VAR_4;

 if (!VAR_3 || VAR_3->max_speed < VAR_1 ||
     !VAR_3->setup)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2);


 VAR_4->driver = VAR_3;

 if (VAR_4->phy)
  FUNC_1(VAR_4->phy);

 FUNC_2(FUNC_4(VAR_4));

 FUNC_3(VAR_4);

 return 0;
}
