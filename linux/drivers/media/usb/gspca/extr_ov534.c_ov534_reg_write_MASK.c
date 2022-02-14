
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct gspca_dev {int usb_err; int * usb_buf; struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct usb_device*,int ,int,int,int,int ,int *,int,int ) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_5, u16 VAR_6, u8 VAR_7)
{
 struct usb_device *VAR_8 = VAR_5->dev;
 int VAR_9;

 if (VAR_5->usb_err < 0)
  return;

 FUNC_0(VAR_5, VAR_1, "SET 01 0000 %04x %02x\n", VAR_6, VAR_7);
 VAR_5->usb_buf[0] = VAR_7;
 VAR_9 = FUNC_2(VAR_8,
         FUNC_3(VAR_8, 0),
         0x01,
         VAR_2 | VAR_4 | VAR_3,
         0x00, VAR_6, VAR_5->usb_buf, 1, VAR_0);
 if (VAR_9 < 0) {
  FUNC_1("write failed %d\n", VAR_9);
  VAR_5->usb_err = VAR_9;
 }
}
