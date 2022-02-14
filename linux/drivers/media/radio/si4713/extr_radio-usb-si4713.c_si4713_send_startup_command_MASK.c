
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si4713_usb_device {int* buffer; int usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,int ,int,int,int,int ,int*,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct si4713_usb_device *VAR_6)
{
 unsigned long VAR_7 = VAR_5 + FUNC_5(VAR_3) + 1;
 u8 *VAR_8 = VAR_6->buffer;
 int VAR_9;


 VAR_9 = FUNC_2(VAR_6->usbdev, FUNC_4(VAR_6->usbdev, 0),
     0x09, 0x21, 0x033f, 0, VAR_6->buffer,
     VAR_0, VAR_4);
 if (VAR_9 < 0)
  return VAR_9;

 for (;;) {

  VAR_9 = FUNC_2(VAR_6->usbdev, FUNC_3(VAR_6->usbdev, 0),
    0x01, 0xa1, 0x033f, 0, VAR_6->buffer,
    VAR_0, VAR_4);
  if (VAR_9 < 0)
   return VAR_9;
  if (!VAR_6->buffer[1]) {


   switch (VAR_8[1]) {
   case 0x32:
    if (VAR_6->buffer[2] == 0)
     return 0;
    break;
   case 0x14:
   case 0x12:
    if (VAR_6->buffer[2] & VAR_2)
     return 0;
    break;
   case 0x06:
    if ((VAR_6->buffer[2] & VAR_2) && VAR_6->buffer[9] == 0x08)
     return 0;
    break;
   default:
    return 0;
   }
  }
  if (FUNC_1(VAR_7))
   return -VAR_1;
  FUNC_0(3);
 }

 return VAR_9;
}
