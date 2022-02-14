
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_serial_port {TYPE_2__* write_urb; int bulk_out_endpointAddress; TYPE_1__* serial; } ;
struct urb {struct usb_serial_port* context; } ;
struct TYPE_5__ {char* transfer_buffer; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int,int,int ,int ,int) ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (TYPE_2__*,int ,int ,char*,int,int (*) (struct urb*),struct usb_serial_port*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_3)
{
 struct usb_serial_port *VAR_4 = VAR_3->context;
 int VAR_5;
 char *VAR_6 = VAR_4->write_urb->transfer_buffer;
 if (VAR_2) {
  FUNC_1(VAR_3);
  return;
 } else {
  *VAR_6++ = VAR_1;
  FUNC_0(VAR_6, 0, 0, 255, 255, 0, 0, 255);
 }
 FUNC_2(VAR_4->write_urb, VAR_4->serial->dev,
     FUNC_3(VAR_4->serial->dev,
       VAR_4->bulk_out_endpointAddress),
     VAR_4->write_urb->transfer_buffer, 8 ,
     FUNC_1, VAR_4);
 VAR_5 = FUNC_4(VAR_4->write_urb, VAR_0);
}
