
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef short u8 ;
struct usb_device {int dummy; } ;
struct ch341_private {unsigned long baud_rate; } ;


 short FUNC_0 (int) ;
 short VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct usb_device*,int ,int,short) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_4,
      struct ch341_private *VAR_5, u8 VAR_6)
{
 short VAR_7;
 int VAR_8;
 unsigned long VAR_9;
 short VAR_10;

 if (!VAR_5->baud_rate)
  return -VAR_3;
 VAR_9 = (VAR_1 / VAR_5->baud_rate);
 VAR_10 = VAR_0;

 while ((VAR_9 > 0xfff0) && VAR_10) {
  VAR_9 >>= 3;
  VAR_10--;
 }

 if (VAR_9 > 0xfff0)
  return -VAR_3;

 VAR_9 = 0x10000 - VAR_9;
 VAR_7 = (VAR_9 & 0xff00) | VAR_10;





 VAR_7 |= FUNC_0(7);

 VAR_8 = FUNC_1(VAR_4, VAR_2, 0x1312, VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_4, VAR_2, 0x2518, VAR_6);
 if (VAR_8)
  return VAR_8;

 return VAR_8;
}
