
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct ark3116_private {int hw_lock; } ;


 int FUNC_0 (struct ark3116_private*) ;
 int FUNC_1 (int *) ;
 struct ark3116_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_3(struct usb_serial_port *VAR_0)
{
 struct ark3116_private *VAR_1 = FUNC_2(VAR_0);


 FUNC_1(&VAR_1->hw_lock);
 FUNC_0(VAR_1);

 return 0;
}
