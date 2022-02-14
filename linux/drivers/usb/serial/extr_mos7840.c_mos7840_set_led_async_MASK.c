
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct usb_ctrlrequest {void* wLength; void* wIndex; void* wValue; int bRequest; int bRequestType; } ;
struct moschip_port {int led_urb; struct usb_ctrlrequest* led_dr; TYPE_2__* port; } ;
typedef int __u16 ;
struct TYPE_4__ {TYPE_1__* serial; } ;
struct TYPE_3__ {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,struct usb_device*,int ,unsigned char*,int *,int ,int ,int *) ;
 int FUNC_2 (struct usb_device*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct moschip_port *VAR_4, __u16 VAR_5,
    __u16 VAR_6)
{
 struct usb_device *VAR_7 = VAR_4->port->serial->dev;
 struct usb_ctrlrequest *VAR_8 = VAR_4->led_dr;

 VAR_8->bRequestType = VAR_2;
 VAR_8->bRequest = VAR_1;
 VAR_8->wValue = FUNC_0(VAR_5);
 VAR_8->wIndex = FUNC_0(VAR_6);
 VAR_8->wLength = FUNC_0(0);

 FUNC_1(VAR_4->led_urb, VAR_7, FUNC_2(VAR_7, 0),
  (unsigned char *)VAR_8, ((void*)0), 0, VAR_3, ((void*)0));

 FUNC_3(VAR_4->led_urb, VAR_0);
}
