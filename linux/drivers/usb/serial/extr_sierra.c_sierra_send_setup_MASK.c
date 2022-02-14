
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int bulk_out_endpointAddress; scalar_t__ interrupt_in_urb; struct usb_serial* serial; } ;
struct usb_serial {int num_ports; int interface; int dev; } ;
struct sierra_port_private {scalar_t__ rts_state; scalar_t__ dtr_state; } ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (struct usb_serial*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int,int,int,int *,int ,int ) ;
 struct sierra_port_private* FUNC_4 (struct usb_serial_port*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_serial_port *VAR_1)
{
 struct usb_serial *VAR_2 = VAR_1->serial;
 struct sierra_port_private *VAR_3;
 __u16 VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7;

 VAR_3 = FUNC_4(VAR_1);

 if (VAR_3->dtr_state)
  VAR_5 |= 0x01;
 if (VAR_3->rts_state)
  VAR_5 |= 0x02;


 if (VAR_2->num_ports == 1) {
  VAR_4 = FUNC_0(VAR_2);



  if (VAR_1->interrupt_in_urb) {

   VAR_6 = 1;
  }
 }


 else {
  if (VAR_1->bulk_out_endpointAddress == 2)
   VAR_4 = 0;
  else if (VAR_1->bulk_out_endpointAddress == 4)
   VAR_4 = 1;
  else if (VAR_1->bulk_out_endpointAddress == 5)
   VAR_4 = 2;

  VAR_6 = 1;
 }
 if (!VAR_6)
  return 0;

 VAR_7 = FUNC_1(VAR_2->interface);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_2->dev, FUNC_5(VAR_2->dev, 0),
  0x22, 0x21, VAR_5, VAR_4, ((void*)0), 0, VAR_0);
 FUNC_2(VAR_2->interface);

 return VAR_7;
}
