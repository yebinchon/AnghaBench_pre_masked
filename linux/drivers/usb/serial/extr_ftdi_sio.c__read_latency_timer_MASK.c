
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {TYPE_1__* serial; } ;
struct usb_device {int dummy; } ;
struct ftdi_private {int interface; } ;
struct TYPE_2__ {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (struct usb_device*,int ,int ,int ,int ,int ,unsigned char*,int,int ) ;
 struct ftdi_private* FUNC_3 (struct usb_serial_port*) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_serial_port *VAR_6)
{
 struct ftdi_private *VAR_7 = FUNC_3(VAR_6);
 struct usb_device *VAR_8 = VAR_6->serial->dev;
 unsigned char *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(1, VAR_4);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_2(VAR_8,
        FUNC_4(VAR_8, 0),
        VAR_2,
        VAR_3,
        0, VAR_7->interface,
        VAR_9, 1, VAR_5);
 if (VAR_10 < 1) {
  if (VAR_10 >= 0)
   VAR_10 = -VAR_0;
 } else {
  VAR_10 = VAR_9[0];
 }

 FUNC_0(VAR_9);

 return VAR_10;
}
