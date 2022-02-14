
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
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct usb_device*,int ,int,int,int,int,int ,int,int) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_4, u16 VAR_5, u16 VAR_6)
{
 struct usb_device *VAR_7 = VAR_4->dev;
 int VAR_8;

 if (VAR_4->usb_err < 0)
  return;
 VAR_8 = FUNC_3(VAR_7, FUNC_4(VAR_7, 0),
   0x00,
   VAR_1 | VAR_3 | VAR_2,
   VAR_5,
   0x00,
   VAR_4->usb_buf,
   VAR_6,
   500);
 if (FUNC_2(VAR_8 < 0 || VAR_8 != VAR_6)) {
  FUNC_1("Read register %02x failed %d\n", VAR_5, VAR_8);
  VAR_4->usb_err = VAR_8;




  FUNC_0(VAR_4->usb_buf, 0, VAR_0);
 }
}
