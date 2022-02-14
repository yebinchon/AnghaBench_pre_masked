
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_device {int dummy; } ;
struct gspca_dev {int usb_err; int * usb_buf; struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int ,...) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct usb_device*,int ,int,int,int,int ,int *,int,int) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_5,
   u16 VAR_6,
   int VAR_7)
{
 struct usb_device *VAR_8 = VAR_5->dev;
 int VAR_9;

 if (VAR_5->usb_err < 0)
  return;
 VAR_9 = FUNC_3(VAR_8, FUNC_4(VAR_8, 0),
   0x00,
   VAR_2 | VAR_4 | VAR_3,
   0x00, VAR_6,
   VAR_5->usb_buf, VAR_7, 500);
 if (VAR_9 < 0) {
  FUNC_2("reg_r err %d\n", VAR_9);
  VAR_5->usb_err = VAR_9;




  FUNC_1(VAR_5->usb_buf, 0, VAR_1);
  return;
 }
 if (VAR_7 == 1)
  FUNC_0(VAR_5, VAR_0, "GET 00 0000 %04x %02x\n",
     VAR_6, VAR_5->usb_buf[0]);
 else
  FUNC_0(VAR_5, VAR_0, "GET 00 0000 %04x %02x %02x ..\n",
     VAR_6, VAR_5->usb_buf[0],
     VAR_5->usb_buf[1]);
}
