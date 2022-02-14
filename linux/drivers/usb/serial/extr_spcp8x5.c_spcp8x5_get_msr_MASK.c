
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_serial_port {int dev; TYPE_1__* serial; } ;
struct usb_device {int dummy; } ;
struct spcp8x5_private {int quirks; } ;
struct TYPE_2__ {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (struct usb_device*,int ,int ,int ,int ,int ,int *,int,int) ;
 struct spcp8x5_private* FUNC_5 (struct usb_serial_port*) ;
 int FUNC_6 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct usb_serial_port *VAR_8, u8 *VAR_9)
{
 struct spcp8x5_private *VAR_10 = FUNC_5(VAR_8);
 struct usb_device *VAR_11 = VAR_8->serial->dev;
 u8 *VAR_12;
 int VAR_13;

 if (VAR_10->quirks & VAR_7)
  return -VAR_2;

 VAR_12 = FUNC_3(1, VAR_6);
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = FUNC_4(VAR_11, FUNC_6(VAR_11, 0),
         VAR_3, VAR_5,
         0, VAR_4, VAR_12, 1, 100);
 if (VAR_13 < 1) {
  FUNC_1(&VAR_8->dev, "failed to get modem status: %d\n", VAR_13);
  if (VAR_13 >= 0)
   VAR_13 = -VAR_0;
  goto out;
 }

 FUNC_0(&VAR_8->dev, "0xc0:0x22:0:6  %d - 0x02%x\n", VAR_13, *VAR_12);
 *VAR_9 = *VAR_12;
 VAR_13 = 0;
out:
 FUNC_2(VAR_12);

 return VAR_13;
}
