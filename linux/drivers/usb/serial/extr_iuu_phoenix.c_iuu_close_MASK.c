
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int read_urb; int write_urb; } ;


 int FUNC_0 (struct usb_serial_port*,int ,int ,int,int) ;
 int FUNC_1 (struct usb_serial_port*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct usb_serial_port *VAR_0)
{


 FUNC_1(VAR_0);

 FUNC_2(VAR_0->write_urb);
 FUNC_2(VAR_0->read_urb);

 FUNC_0(VAR_0, 0, 0, 0xF000, 0xFF);
}
