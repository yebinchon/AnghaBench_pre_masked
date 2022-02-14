
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct edgeport_port {int dummy; } ;


 int FUNC_0 (struct edgeport_port*) ;
 struct edgeport_port* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static bool FUNC_2(struct usb_serial_port *VAR_0)
{
 struct edgeport_port *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 > 0)
  return 0;

 return 1;
}
