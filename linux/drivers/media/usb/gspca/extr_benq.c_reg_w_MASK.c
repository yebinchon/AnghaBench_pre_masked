
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_device {int dummy; } ;
struct gspca_dev {int usb_err; struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct usb_device*,int ,int,int,int ,int ,int *,int ,int) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_3,
   u16 VAR_4, u16 VAR_5)
{
 struct usb_device *VAR_6 = VAR_3->dev;
 int VAR_7;

 if (VAR_3->usb_err < 0)
  return;
 VAR_7 = FUNC_1(VAR_6, FUNC_2(VAR_6, 0),
   0x02,
   VAR_0 | VAR_2 | VAR_1,
   VAR_4,
   VAR_5,
   ((void*)0),
   0,
   500);
 if (VAR_7 < 0) {
  FUNC_0("reg_w err %d\n", VAR_7);
  VAR_3->usb_err = VAR_7;
 }
}
