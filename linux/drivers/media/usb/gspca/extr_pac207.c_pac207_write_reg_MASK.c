
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
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (struct usb_device*,int ,int,int,int ,int ,int *,int ,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_4, u16 VAR_5, u16 VAR_6)
{
 struct usb_device *VAR_7 = VAR_4->dev;
 int VAR_8;

 if (VAR_4->usb_err < 0)
  return;

 VAR_8 = FUNC_1(VAR_7, FUNC_2(VAR_7, 0), 0x00,
   VAR_1 | VAR_3 | VAR_2,
   VAR_6, VAR_5, ((void*)0), 0, VAR_0);
 if (VAR_8) {
  FUNC_0("Failed to write a register (index 0x%04X, value 0x%02X, error %d)\n",
         VAR_5, VAR_6, VAR_8);
  VAR_4->usb_err = VAR_8;
 }
}
