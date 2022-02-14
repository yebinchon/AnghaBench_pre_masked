
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_wwan_port_private {scalar_t__ rts_state; scalar_t__ dtr_state; } ;
struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {TYPE_3__* interface; int dev; } ;
struct TYPE_7__ {TYPE_2__* cur_altsetting; } ;
struct TYPE_5__ {int bInterfaceNumber; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,int,int,int,int,int *,int ,int ) ;
 struct usb_wwan_port_private* FUNC_3 (struct usb_serial_port*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_serial_port *VAR_1)
{
 struct usb_serial *VAR_2 = VAR_1->serial;
 struct usb_wwan_port_private *VAR_3;
 int VAR_4 = 0;
 int VAR_5;
 int VAR_6;

 VAR_3 = FUNC_3(VAR_1);

 if (VAR_3->dtr_state)
  VAR_4 |= 0x01;
 if (VAR_3->rts_state)
  VAR_4 |= 0x02;

 VAR_5 = VAR_2->interface->cur_altsetting->desc.bInterfaceNumber;

 VAR_6 = FUNC_0(VAR_2->interface);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_2->dev, FUNC_4(VAR_2->dev, 0),
    0x22, 0x21, VAR_4, VAR_5, ((void*)0), 0,
    VAR_0);

 FUNC_1(VAR_1->serial->interface);

 return VAR_6;
}
