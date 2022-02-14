
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct usb_serial_port {struct device dev; TYPE_1__* serial; } ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*,int ,int) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (void const*,int,int ) ;
 int FUNC_3 (struct usb_device*,int ,int,int,int,int,void*,int,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_serial_port *VAR_8,
   const void *VAR_9, int VAR_10)
{
 struct usb_device *VAR_11 = VAR_8->serial->dev;
 void *VAR_12;
 int VAR_13;

 if (VAR_10 <= 0 || !VAR_9)
  return -VAR_0;

 VAR_12 = FUNC_2(VAR_9, VAR_10, VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_13 = FUNC_3(VAR_11, FUNC_4(VAR_11, 0), 0x00,
   VAR_7 | VAR_6 | VAR_5,
   0x0000, 0x0000, VAR_12, VAR_10, VAR_4);

 FUNC_1(VAR_12);

 if (VAR_13 != VAR_10) {
  struct device *VAR_14 = &VAR_8->dev;

  FUNC_0(VAR_14, "failed to send control request %02x: %d\n",
   *(u8 *)VAR_9, VAR_13);

  if (VAR_13 >= 0)
   VAR_13 = -VAR_1;

  return VAR_13;
 }

 return 0;
}
