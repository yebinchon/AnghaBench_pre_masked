
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial {TYPE_1__* interface; } ;
struct cp210x_serial_private {int partnum; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_serial*) ;
 int FUNC_1 (struct usb_serial*) ;
 int FUNC_2 (struct usb_serial*,int ,int ,int *,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*) ;
 struct cp210x_serial_private* FUNC_5 (int,int ) ;
 int FUNC_6 (struct usb_serial*,struct cp210x_serial_private*) ;

__attribute__((used)) static int FUNC_7(struct usb_serial *VAR_5)
{
 int VAR_6;
 struct cp210x_serial_private *VAR_7;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_6 = FUNC_2(VAR_5, VAR_4,
       VAR_0, &VAR_7->partnum,
       sizeof(VAR_7->partnum));
 if (VAR_6 < 0) {
  FUNC_4(&VAR_5->interface->dev,
    "querying part number failed\n");
  VAR_7->partnum = VAR_1;
 }

 FUNC_6(VAR_5, VAR_7);

 FUNC_1(VAR_5);

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 < 0) {
  FUNC_3(&VAR_5->interface->dev, "GPIO initialisation failed: %d\n",
    VAR_6);
 }

 return 0;
}
