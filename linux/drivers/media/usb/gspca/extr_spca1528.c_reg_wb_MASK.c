
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
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct usb_device*,int ,int ,int,int ,int ,int *,int,int) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_4,
   u8 VAR_5,
   u16 VAR_6,
   u16 VAR_7,
   u8 VAR_8)
{
 struct usb_device *VAR_9 = VAR_4->dev;
 int VAR_10;

 if (VAR_4->usb_err < 0)
  return;
 FUNC_0(VAR_4, VAR_0, "SET %02x %04x %04x %02x\n",
    VAR_5, VAR_6, VAR_7, VAR_8);
 VAR_4->usb_buf[0] = VAR_8;
 VAR_10 = FUNC_2(VAR_9, FUNC_3(VAR_9, 0),
   VAR_5,
   VAR_1 | VAR_3 | VAR_2,
   VAR_6, VAR_7,
   VAR_4->usb_buf, 1, 500);
 if (VAR_10 < 0) {
  FUNC_1("reg_w err %d\n", VAR_10);
  VAR_4->usb_err = VAR_10;
 }
}
