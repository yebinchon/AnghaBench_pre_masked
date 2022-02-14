
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct iuu_private {struct iuu_private* buf; struct iuu_private* writebuf; } ;


 int FUNC_0 (struct usb_serial_port*) ;
 int FUNC_1 (struct iuu_private*) ;
 struct iuu_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_3(struct usb_serial_port *VAR_0)
{
 struct iuu_private *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_0);
 FUNC_1(VAR_1->writebuf);
 FUNC_1(VAR_1->buf);
 FUNC_1(VAR_1);

 return 0;
}
