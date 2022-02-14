
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct gspca_dev {int usb_err; struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct usb_device*,int ,int,int,int ,int ,int *,int ,int) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_4, u16 VAR_5, u8 VAR_6)
{
 int VAR_7;
 struct usb_device *VAR_8 = VAR_4->dev;

 if (VAR_4->usb_err < 0)
  return;
 VAR_7 = FUNC_2(VAR_8, FUNC_3(VAR_8, 0),
   0x01,
   VAR_1 | VAR_3 | VAR_2,
   VAR_6,
   VAR_5,
   ((void*)0),
   0,
   500);
 FUNC_0(VAR_4, VAR_0, "reg_w 0x%x:=0x%02x\n", VAR_5, VAR_6);
 if (VAR_7 < 0) {
  FUNC_1("reg_w 0x%x err %d\n", VAR_5, VAR_7);
  VAR_4->usb_err = VAR_7;
 }
}
