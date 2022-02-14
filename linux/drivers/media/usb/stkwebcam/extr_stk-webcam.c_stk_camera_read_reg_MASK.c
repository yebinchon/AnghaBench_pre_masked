
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct stk_camera {struct usb_device* udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (struct usb_device*,int ,int,int,int,int ,unsigned char*,int,int) ;
 int FUNC_3 (struct usb_device*,int ) ;

int FUNC_4(struct stk_camera *VAR_5, u16 VAR_6, u8 *VAR_7)
{
 struct usb_device *VAR_8 = VAR_5->udev;
 unsigned char *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(sizeof(u8), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_8, FUNC_3(VAR_8, 0),
   0x00,
   VAR_2 | VAR_4 | VAR_3,
   0x00,
   VAR_6,
   VAR_9,
   sizeof(u8),
   500);
 if (VAR_10 >= 0)
  *VAR_7 = *VAR_9;

 FUNC_0(VAR_9);

 if (VAR_10 < 0)
  return VAR_10;
 else
  return 0;
}
