
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct usb_serial_port {int dev; TYPE_1__* serial; } ;
struct usb_device {int dummy; } ;
struct spcp8x5_private {int quirks; } ;
struct TYPE_2__ {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct usb_device*,int ,int ,int ,int ,int ,int *,int ,int) ;
 struct spcp8x5_private* FUNC_3 (struct usb_serial_port*) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct usb_serial_port *VAR_3, u16 VAR_4,
         u16 VAR_5)
{
 struct spcp8x5_private *VAR_6 = FUNC_3(VAR_3);
 struct usb_device *VAR_7 = VAR_3->serial->dev;
 int VAR_8;

 if (VAR_6->quirks & VAR_2)
  return;

 VAR_8 = FUNC_2(VAR_7, FUNC_4(VAR_7, 0),
         VAR_1, VAR_0,
         VAR_4, VAR_5, ((void*)0), 0, 100);
 FUNC_0(&VAR_3->dev, "value = %#x , index = %#x\n", VAR_4, VAR_5);
 if (VAR_8 < 0)
  FUNC_1(&VAR_3->dev, "failed to set work mode: %d\n", VAR_8);
}
