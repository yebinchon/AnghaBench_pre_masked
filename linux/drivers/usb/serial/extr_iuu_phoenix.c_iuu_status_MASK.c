
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_serial_port {TYPE_2__* write_urb; int bulk_out_endpointAddress; TYPE_1__* serial; } ;
struct TYPE_5__ {int transfer_buffer; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int,int ,struct usb_serial_port*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_serial_port *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3->write_urb->transfer_buffer, VAR_1, 1);
 FUNC_1(VAR_3->write_urb, VAR_3->serial->dev,
     FUNC_2(VAR_3->serial->dev,
       VAR_3->bulk_out_endpointAddress),
     VAR_3->write_urb->transfer_buffer, 1,
     VAR_2, VAR_3);
 VAR_4 = FUNC_3(VAR_3->write_urb, VAR_0);
 return VAR_4;

}
