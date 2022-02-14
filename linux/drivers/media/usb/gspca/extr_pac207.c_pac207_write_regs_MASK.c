
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
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct usb_device*,int ,int,int,int,int ,int ,int ,int ) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_4, u16 VAR_5,
 const u8 *VAR_6, u16 VAR_7)
{
 struct usb_device *VAR_8 = VAR_4->dev;
 int VAR_9;

 if (VAR_4->usb_err < 0)
  return;

 FUNC_0(VAR_4->usb_buf, VAR_6, VAR_7);

 VAR_9 = FUNC_2(VAR_8, FUNC_3(VAR_8, 0), 0x01,
   VAR_1 | VAR_3 | VAR_2,
   0x00, VAR_5,
   VAR_4->usb_buf, VAR_7, VAR_0);
 if (VAR_9 < 0) {
  FUNC_1("Failed to write registers to index 0x%04X, error %d\n",
         VAR_5, VAR_9);
  VAR_4->usb_err = VAR_9;
 }
}
