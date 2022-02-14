
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
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct usb_device*,int ,int,int,int,int ,int *,int,int) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static u8 FUNC_4(struct gspca_dev *VAR_4, u16 VAR_5)
{
 struct usb_device *VAR_6 = VAR_4->dev;
 int VAR_7;

 if (VAR_4->usb_err < 0)
  return 0;
 VAR_7 = FUNC_2(VAR_6, FUNC_3(VAR_6, 0),
   0x00,
   VAR_1 | VAR_3 | VAR_2,
   0x00,
   VAR_5,
   VAR_4->usb_buf, 1,
   500);

 FUNC_0(VAR_4, VAR_0, "reg_r 0x%x=0x%02x\n",
    VAR_5, VAR_4->usb_buf[0]);
 if (VAR_7 < 0) {
  FUNC_1("reg_r 0x%x err %d\n", VAR_5, VAR_7);
  VAR_4->usb_err = VAR_7;
  return 0;
 }

 return VAR_4->usb_buf[0];
}
