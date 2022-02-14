
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial {struct usb_device* dev; } ;
struct usb_device {int dev; } ;
typedef enum mos_regs { ____Placeholder_mos_regs } mos_regs ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (struct usb_device*,unsigned int,int ,int ,int ,int ,int *,int,int ) ;
 unsigned int FUNC_6 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct usb_serial *VAR_4, unsigned int VAR_5,
   enum mos_regs VAR_6, __u8 *VAR_7)
{
 struct usb_device *VAR_8 = VAR_4->dev;
 unsigned int VAR_9 = FUNC_6(VAR_8, 0);
 __u8 VAR_10 = (__u8)0x0d;
 __u8 VAR_11 = (__u8)0xc0;
 __u16 VAR_12 = FUNC_1(VAR_6);
 __u16 VAR_13 = FUNC_2(VAR_6, VAR_5);
 u8 *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_4(1, VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_15 = FUNC_5(VAR_8, VAR_9, VAR_10, VAR_11, VAR_13,
         VAR_12, VAR_14, 1, VAR_3);
 if (VAR_15 == 1) {
  *VAR_7 = *VAR_14;
 } else {
  FUNC_0(&VAR_8->dev,
   "mos7720: usb_control_msg() failed: %d\n", VAR_15);
  if (VAR_15 >= 0)
   VAR_15 = -VAR_0;
  *VAR_7 = 0;
 }

 FUNC_3(VAR_14);

 return VAR_15;
}
