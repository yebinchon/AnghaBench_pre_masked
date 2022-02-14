
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_serial_port {TYPE_4__* serial; } ;
struct usb_device {int dummy; } ;
struct TYPE_8__ {TYPE_3__* interface; struct usb_device* dev; } ;
struct TYPE_7__ {TYPE_2__* cur_altsetting; } ;
struct TYPE_5__ {int bInterfaceNumber; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,int,int ,int *,int ,int) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_serial_port *VAR_4, int VAR_5)
{
 struct usb_device *VAR_6 = VAR_4->serial->dev;

 return FUNC_0(
  VAR_6,
  FUNC_1(VAR_6, 0),
  VAR_0,
  VAR_1|VAR_3|VAR_2,
  VAR_5,
  VAR_4->serial->interface->cur_altsetting->desc.bInterfaceNumber,
  ((void*)0), 0,
  5000);
}
