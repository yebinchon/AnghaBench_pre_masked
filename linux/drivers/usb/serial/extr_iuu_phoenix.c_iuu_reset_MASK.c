
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usb_serial_port {TYPE_2__* write_urb; int bulk_out_endpointAddress; TYPE_1__* serial; } ;
struct iuu_private {scalar_t__ reset; } ;
struct TYPE_5__ {char* transfer_buffer; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,int ,char*,int,int ,struct usb_serial_port*) ;
 struct iuu_private* FUNC_1 (struct usb_serial_port*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_serial_port *VAR_5, u8 VAR_6)
{
 struct iuu_private *VAR_7 = FUNC_1(VAR_5);
 int VAR_8;
 char *VAR_9 = VAR_5->write_urb->transfer_buffer;



 *VAR_9++ = VAR_3;
 *VAR_9++ = VAR_1;
 *VAR_9++ = VAR_6;
 *VAR_9 = VAR_2;



 FUNC_0(VAR_5->write_urb,
     VAR_5->serial->dev,
     FUNC_2(VAR_5->serial->dev,
       VAR_5->bulk_out_endpointAddress),
     VAR_5->write_urb->transfer_buffer, 4, VAR_4, VAR_5);
 VAR_8 = FUNC_3(VAR_5->write_urb, VAR_0);
 VAR_7->reset = 0;
 return VAR_8;
}
