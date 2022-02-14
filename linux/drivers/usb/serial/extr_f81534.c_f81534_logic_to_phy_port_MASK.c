
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int port_number; int serial; } ;
struct usb_serial {int dummy; } ;
struct f81534_serial_private {int* conf_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct f81534_serial_private* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct usb_serial *VAR_3,
     struct usb_serial_port *VAR_4)
{
 struct f81534_serial_private *VAR_5 =
   FUNC_0(VAR_4->serial);
 int VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
  if (VAR_5->conf_data[VAR_7] & VAR_2)
   continue;

  if (VAR_4->port_number == VAR_6)
   return VAR_7;

  ++VAR_6;
 }

 return -VAR_0;
}
