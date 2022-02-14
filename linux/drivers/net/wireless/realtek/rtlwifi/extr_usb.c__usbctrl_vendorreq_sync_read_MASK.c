
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int,int ) ;
 int FUNC_1 (struct usb_device*,unsigned int,int ,int ,int ,int ,void*,int ,int) ;
 unsigned int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_4, u8 VAR_5,
     u16 VAR_6, u16 VAR_7, void *VAR_8,
     u16 VAR_9)
{
 unsigned int VAR_10;
 int VAR_11;
 u8 VAR_12;
 int VAR_13 = 0;
 static int VAR_14;

 VAR_10 = FUNC_2(VAR_4, 0);
 VAR_12 = VAR_3;

 do {
  VAR_11 = FUNC_1(VAR_4, VAR_10, VAR_5, VAR_12, VAR_6,
      VAR_7, VAR_8, VAR_9, 1000);
  if (VAR_11 < 0) {

   if ((VAR_6 >= VAR_1 &&
       VAR_6 <= VAR_0))
    break;
  } else {
   break;
  }
 } while (++VAR_13 < VAR_2);

 if (VAR_11 < 0 && VAR_14++ < 4)
  FUNC_0("reg 0x%x, usbctrl_vendorreq TimeOut! status:0x%x value=0x%x\n",
         VAR_6, VAR_11, *(u32 *)VAR_8);
 return VAR_11;
}
