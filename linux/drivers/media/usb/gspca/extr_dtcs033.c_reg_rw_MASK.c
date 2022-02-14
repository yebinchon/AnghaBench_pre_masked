
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct gspca_dev {int usb_err; int usb_buf; struct usb_device* dev; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct usb_device*,int ,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_0,
  u8 VAR_1, u8 VAR_2,
  u16 VAR_3, u16 VAR_4, u16 VAR_5)
{
 struct usb_device *VAR_6 = VAR_0->dev;
 int VAR_7;

 if (VAR_0->usb_err < 0)
  return;

 VAR_7 = FUNC_1(VAR_6,
  FUNC_2(VAR_6, 0),
  VAR_2,
  VAR_1,
  VAR_3, VAR_4,
  VAR_0->usb_buf, VAR_5, 500);

 if (VAR_7 < 0) {
  VAR_0->usb_err = VAR_7;
  FUNC_0("usb_control_msg error %d\n", VAR_7);
 }

 return;
}
