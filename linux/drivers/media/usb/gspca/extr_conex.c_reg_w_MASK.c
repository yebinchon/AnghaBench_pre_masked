
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct gspca_dev {int usb_buf; struct usb_device* dev; } ;
typedef int __u8 ;
typedef scalar_t__ __u16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,scalar_t__,int const) ;
 int FUNC_1 (struct gspca_dev*,char*) ;
 int FUNC_2 (int ,int const*,scalar_t__) ;
 int FUNC_3 (struct usb_device*,int ,int ,int,int ,scalar_t__,int ,scalar_t__,int) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_5,
    __u16 VAR_6,
    const __u8 *VAR_7,
    __u16 VAR_8)
{
 struct usb_device *VAR_9 = VAR_5->dev;

 if (VAR_8 > VAR_1) {
  FUNC_1(VAR_5, "reg_w: buffer overflow\n");
  return;
 }
 FUNC_0(VAR_5, VAR_0, "reg write [%02x] = %02x..\n",
    VAR_6, *VAR_7);

 FUNC_2(VAR_5->usb_buf, VAR_7, VAR_8);
 FUNC_3(VAR_9,
   FUNC_4(VAR_9, 0),
   0,
   VAR_2 | VAR_4 | VAR_3,
   0,
   VAR_6, VAR_5->usb_buf, VAR_8, 500);
}
