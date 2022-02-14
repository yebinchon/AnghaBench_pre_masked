
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_serial_port {int dev; struct usb_serial* serial; } ;
struct usb_serial {int dev; } ;
struct cp210x_port_private {int bInterfaceNumber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int *,int ,int ) ;
 struct cp210x_port_private* FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_serial_port *VAR_2, u8 VAR_3, u16 VAR_4)
{
 struct usb_serial *VAR_5 = VAR_2->serial;
 struct cp210x_port_private *VAR_6 = FUNC_2(VAR_2);
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5->dev, FUNC_3(VAR_5->dev, 0),
   VAR_3, VAR_0, VAR_4,
   VAR_6->bInterfaceNumber, ((void*)0), 0,
   VAR_1);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_2->dev, "failed set request 0x%x status: %d\n",
    VAR_3, VAR_7);
 }

 return VAR_7;
}
