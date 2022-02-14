
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_device {int dummy; } ;
struct gspca_dev {int * usb_buf; struct usb_device* dev; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct usb_device*,int ,int,int,int,int ,int *,int,int) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_4, u16 VAR_5, int VAR_6)
{
 struct usb_device *VAR_7 = VAR_4->dev;
 __u8 *VAR_8 = VAR_4->usb_buf;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_7, FUNC_3(VAR_7, 0), 0x01,
   VAR_1 | VAR_3 | VAR_2,
   0x00, VAR_5, VAR_8, 8, 1000);
 if (VAR_9 < 0) {
  FUNC_1("Failed to read a register (index 0x%04X, error %d)\n",
         VAR_5, VAR_9);
  return VAR_9;
 }

 if (VAR_6)
  FUNC_0(VAR_4, VAR_0, "Register %04x value: %02x\n",
     VAR_5, VAR_8[0]);

 return 0;
}
