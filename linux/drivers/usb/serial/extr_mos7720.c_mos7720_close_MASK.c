
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial_port {int port_number; TYPE_1__* read_urb; TYPE_1__* write_urb; struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct moschip_port {scalar_t__ open; TYPE_1__** write_urb_pool; } ;
struct TYPE_3__ {int transfer_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 struct moschip_port* FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct usb_serial*,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct usb_serial_port *VAR_3)
{
 struct usb_serial *VAR_4;
 struct moschip_port *VAR_5;
 int VAR_6;

 VAR_4 = VAR_3->serial;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 == ((void*)0))
  return;

 for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6)
  FUNC_3(VAR_5->write_urb_pool[VAR_6]);


 for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
  if (VAR_5->write_urb_pool[VAR_6]) {
   FUNC_0(VAR_5->write_urb_pool[VAR_6]->transfer_buffer);
   FUNC_1(VAR_5->write_urb_pool[VAR_6]);
  }
 }



 FUNC_3(VAR_3->write_urb);
 FUNC_3(VAR_3->read_urb);

 FUNC_4(VAR_4, VAR_3->port_number, VAR_1, 0x00);
 FUNC_4(VAR_4, VAR_3->port_number, VAR_0, 0x00);

 VAR_5->open = 0;
}
