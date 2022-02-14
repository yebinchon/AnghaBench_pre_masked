
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_device {int dummy; } ;
struct gspca_dev {int usb_err; int usb_buf; struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct usb_device*,int ,int,int,int ,int ,int ,int,int) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_3, u16 VAR_4, u16 VAR_5)
{
 struct usb_device *VAR_6 = VAR_3->dev;
 int VAR_7;

 if (VAR_3->usb_err < 0)
  return;
 VAR_7 = FUNC_2(VAR_6, FUNC_3(VAR_6, 0),
   0x03,
   VAR_0 | VAR_2 | VAR_1,
   VAR_4,
   VAR_5,
   VAR_3->usb_buf,
   2,
   1000);
 if (VAR_7 < 0) {
  FUNC_1("reg_r err %d\n", VAR_7);
  VAR_3->usb_err = VAR_7;




  FUNC_0(VAR_3->usb_buf, 0, 2);
 }
}
