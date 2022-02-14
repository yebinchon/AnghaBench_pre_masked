
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {int dev; TYPE_1__** port; } ;
struct qt2_port_private {struct qt2_port_private* write_buffer; int write_urb; struct usb_serial_port* port; int urb_lock; int lock; } ;
struct TYPE_2__ {int bulk_out_endpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qt2_port_private*) ;
 struct qt2_port_private* FUNC_1 (int ,int ) ;
 struct qt2_port_private* FUNC_2 (int,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,struct qt2_port_private*,int ,int ,struct usb_serial_port*) ;
 int FUNC_6 (struct usb_serial_port*,struct qt2_port_private*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_serial_port *VAR_4)
{
 struct usb_serial *VAR_5 = VAR_4->serial;
 struct qt2_port_private *VAR_6;
 u8 VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(&VAR_6->lock);
 FUNC_3(&VAR_6->urb_lock);
 VAR_6->port = VAR_4;

 VAR_6->write_buffer = FUNC_1(VAR_2, VAR_1);
 if (!VAR_6->write_buffer)
  goto err_buf;

 VAR_6->write_urb = FUNC_4(0, VAR_1);
 if (!VAR_6->write_urb)
  goto err_urb;

 VAR_7 = VAR_5->port[0]->bulk_out_endpointAddress;
 FUNC_5(VAR_6->write_urb, VAR_5->dev,
    FUNC_7(VAR_5->dev, VAR_7),
    VAR_6->write_buffer,
    VAR_2,
    VAR_3, VAR_4);

 FUNC_6(VAR_4, VAR_6);

 return 0;
err_urb:
 FUNC_0(VAR_6->write_buffer);
err_buf:
 FUNC_0(VAR_6);
 return -VAR_0;
}
