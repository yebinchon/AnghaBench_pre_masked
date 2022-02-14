
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct au0828_dev {int height; int width; int usbdev; int dev_state; } ;
struct TYPE_3__ {int bAlternateSetting; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct au0828_dev*,int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 struct usb_interface* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct au0828_dev *VAR_5)
{
 struct usb_interface *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 FUNC_1(1, "au0828_analog_stream_enable called\n");

 if (FUNC_3(VAR_2, &VAR_5->dev_state))
  return -VAR_4;

 VAR_6 = FUNC_4(VAR_5->usbdev, 0);
 if (VAR_6 && VAR_6->cur_altsetting->desc.bAlternateSetting != 5) {
  FUNC_1(1, "Changing intf#0 to alt 5\n");

  VAR_7 = FUNC_5(VAR_5->usbdev, 0, 5);
  if (VAR_7 < 0) {
   FUNC_2("Au0828 can't set alt setting to 5!\n");
   return -VAR_3;
  }
 }

 VAR_8 = VAR_5->height / 2 + 2;
 VAR_9 = VAR_5->width * 2;

 FUNC_0(VAR_5, VAR_1, 0x00);
 FUNC_0(VAR_5, 0x106, 0x00);

 FUNC_0(VAR_5, 0x110, 0x00);
 FUNC_0(VAR_5, 0x111, 0x00);
 FUNC_0(VAR_5, 0x114, VAR_9 & 0xff);
 FUNC_0(VAR_5, 0x115, VAR_9 >> 8);

 FUNC_0(VAR_5, 0x112, 0x00);
 FUNC_0(VAR_5, 0x113, 0x00);
 FUNC_0(VAR_5, 0x116, VAR_8 & 0xff);
 FUNC_0(VAR_5, 0x117, VAR_8 >> 8);
 FUNC_0(VAR_5, VAR_0, 0xb3);

 return 0;
}
