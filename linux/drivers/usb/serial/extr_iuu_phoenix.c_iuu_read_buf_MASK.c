
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_serial_port {TYPE_2__* read_urb; int bulk_in_endpointAddress; TYPE_1__* serial; } ;
struct TYPE_5__ {int transfer_buffer; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ,int,int ,struct usb_serial_port*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_serial_port *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2->read_urb, VAR_2->serial->dev,
     FUNC_1(VAR_2->serial->dev,
       VAR_2->bulk_in_endpointAddress),
     VAR_2->read_urb->transfer_buffer, VAR_3,
     VAR_1, VAR_2);
 VAR_4 = FUNC_2(VAR_2->read_urb, VAR_0);
 return VAR_4;
}
