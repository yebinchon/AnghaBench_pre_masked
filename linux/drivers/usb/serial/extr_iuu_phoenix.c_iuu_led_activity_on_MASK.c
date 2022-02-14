
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
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int,int ,int ,int ,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ,int ,char*,int,int ,struct usb_serial_port*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_4)
{
 struct usb_serial_port *VAR_5 = VAR_4->context;
 int VAR_6;
 char *VAR_7 = VAR_5->write_urb->transfer_buffer;
 *VAR_7++ = VAR_1;
 if (VAR_3) {
  FUNC_0(VAR_7, 6);
  *(VAR_7+7) = 1;
 } else {
  FUNC_1(VAR_7, 255, 255, 0, 0, 0, 0, 255);
 }

 FUNC_2(VAR_5->write_urb, VAR_5->serial->dev,
     FUNC_3(VAR_5->serial->dev,
       VAR_5->bulk_out_endpointAddress),
     VAR_5->write_urb->transfer_buffer, 8 ,
     VAR_2, VAR_5);
 VAR_6 = FUNC_4(VAR_5->write_urb, VAR_0);
}
