
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int usb_mutex; int udev; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int,int*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_4, u16 VAR_5,
      u8 * VAR_6, u16 VAR_7)
{
 int VAR_8 = 0;
 u8 VAR_9;
 u16 VAR_10;

 if (!VAR_4) {
  FUNC_0("no usb_device");
  return -VAR_1;
 }
 if (FUNC_1(&VAR_4->usb_mutex) < 0)
  return -VAR_0;

 switch (VAR_5>>1){
  case 130:
   VAR_9=0xb6;
   VAR_10=0x00;
   break;
  case 129:
   VAR_9=0xb6;
   VAR_10=0x01;
   break;
  case 131:
   VAR_9=0xb1;
   VAR_10=0xa6;
   break;
  case 128:
   VAR_9=0xb8;
   VAR_10=0x80;
   break;
  default:
   VAR_9=0xb1;
   VAR_10=VAR_5;
 }
 VAR_8 = FUNC_3(VAR_4->udev, VAR_9,
  VAR_10, VAR_6, VAR_7,
  VAR_5&0x01?VAR_2:VAR_3);

 FUNC_2(&VAR_4->usb_mutex);
 return VAR_8;
}
