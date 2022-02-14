
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct gspca_dev {int usb_err; int usb_buf; struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int const,...) ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct usb_device*,int ,int,int,int,int ,int ,int,int) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_4,
   u16 VAR_5,
   const u8 *VAR_6,
   int VAR_7)
{
 struct usb_device *VAR_8 = VAR_4->dev;
 int VAR_9;

 if (VAR_4->usb_err < 0)
  return;
 if (VAR_7 == 1)
  FUNC_0(VAR_4, VAR_0, "SET 00 0000 %04x %02x\n",
     VAR_5, *VAR_6);
 else
  FUNC_0(VAR_4, VAR_0, "SET 00 0000 %04x %02x %02x ...\n",
     VAR_5, *VAR_6, VAR_6[1]);
 FUNC_1(VAR_4->usb_buf, VAR_6, VAR_7);
 VAR_9 = FUNC_3(VAR_8, FUNC_4(VAR_8, 0),
   0x00,
   VAR_1 | VAR_3 | VAR_2,
   0x00,
   VAR_5,
   VAR_4->usb_buf,
   VAR_7,
   500);
 if (VAR_9 < 0) {
  FUNC_2("reg_w err %d\n", VAR_9);
  VAR_4->usb_err = VAR_9;
 }
}
