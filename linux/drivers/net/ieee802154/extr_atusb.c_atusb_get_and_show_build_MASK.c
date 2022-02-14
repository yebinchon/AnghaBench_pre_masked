
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;
struct atusb {struct usb_device* usb_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct atusb*,int ,int ,int ,int ,int ,char*,scalar_t__,int) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct atusb *VAR_5)
{
 struct usb_device *VAR_6 = VAR_5->usb_dev;
 char *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_1 + 1, VAR_4);
 if (!VAR_7)
  return -VAR_3;

 VAR_8 = FUNC_0(VAR_5, FUNC_4(VAR_6, 0),
    VAR_0, VAR_2, 0, 0,
    VAR_7, VAR_1, 1000);
 if (VAR_8 >= 0) {
  VAR_7[VAR_8] = 0;
  FUNC_1(&VAR_6->dev, "Firmware: build %s\n", VAR_7);
 }

 FUNC_2(VAR_7);
 return VAR_8;
}
