
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct gbphy_device {int dummy; } ;
struct gb_usb_device {struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;


 int FUNC_0 (struct gb_connection*) ;
 int FUNC_1 (struct gb_connection*) ;
 struct gb_usb_device* FUNC_2 (struct gbphy_device*) ;
 struct usb_hcd* FUNC_3 (struct gb_usb_device*) ;
 int FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (struct usb_hcd*) ;

__attribute__((used)) static void FUNC_6(struct gbphy_device *VAR_0)
{
 struct gb_usb_device *VAR_1 = FUNC_2(VAR_0);
 struct gb_connection *VAR_2 = VAR_1->connection;
 struct usb_hcd *VAR_3 = FUNC_3(VAR_1);

 FUNC_5(VAR_3);
 FUNC_1(VAR_2);
 FUNC_0(VAR_2);
 FUNC_4(VAR_3);
}
