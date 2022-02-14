
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct gspca_dev {int usb_err; unsigned int* usb_buf; struct usb_device* dev; } ;
typedef int __u8 ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct gspca_dev*,int) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 int FUNC_3 (struct usb_device*,int ,unsigned int*,int,int*,int) ;
 int FUNC_4 (struct usb_device*,int) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_0,
   int VAR_1,
   unsigned int VAR_2)
{
 struct usb_device *VAR_3 = VAR_0->dev;
 int VAR_4, VAR_5;
 __u8 VAR_6 = 0;

 if (VAR_1 == 0x003f08) {
  FUNC_1(VAR_0, 0x0704);
  VAR_6 = FUNC_1(VAR_0, 0x0705);
  FUNC_1(VAR_0, 0x0650);
  FUNC_2(VAR_0, 0x654, VAR_6);
 } else {
  FUNC_2(VAR_0, 0x654, (VAR_1 >> 16) & 0xff);
 }
 FUNC_2(VAR_0, 0x655, (VAR_1 >> 8) & 0xff);
 FUNC_2(VAR_0, 0x656, VAR_1 & 0xff);
 FUNC_2(VAR_0, 0x657, 0);
 FUNC_2(VAR_0, 0x658, 0x04);
 FUNC_2(VAR_0, 0x659, 0);
 FUNC_2(VAR_0, 0x65a, 0);
 FUNC_2(VAR_0, 0x65b, 0);
 FUNC_2(VAR_0, 0x650, 5);
 if (VAR_0->usb_err < 0)
  return;
 VAR_0->usb_buf[0] = VAR_2 >> 24;
 VAR_0->usb_buf[1] = VAR_2 >> 16;
 VAR_0->usb_buf[2] = VAR_2 >> 8;
 VAR_0->usb_buf[3] = VAR_2;
 VAR_5 = FUNC_3(VAR_3,
   FUNC_4(VAR_3, 6),
   VAR_0->usb_buf,
   4,
   &VAR_4,
   500);
 if (VAR_5 < 0) {
  FUNC_0("snd_val err %d\n", VAR_5);
  VAR_0->usb_err = VAR_5;
 } else {
  if (VAR_1 == 0x003f08) {
   VAR_6 += 4;
   VAR_6 &= 0x3f;
   FUNC_2(VAR_0, 0x705, VAR_6);
  }
 }
}
