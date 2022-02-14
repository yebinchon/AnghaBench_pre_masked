
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct moschip_port {int dummy; } ;


 int FUNC_0 (struct moschip_port*) ;
 struct moschip_port* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_2(struct usb_serial_port *VAR_0)
{
 struct moschip_port *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_1);

 return 0;
}
