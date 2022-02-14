
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dummy; } ;
struct sierra_intf_private {int dummy; } ;


 int FUNC_0 (struct sierra_intf_private*) ;
 struct sierra_intf_private* FUNC_1 (struct usb_serial*) ;

__attribute__((used)) static void FUNC_2(struct usb_serial *VAR_0)
{
 struct sierra_intf_private *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_1);
}
