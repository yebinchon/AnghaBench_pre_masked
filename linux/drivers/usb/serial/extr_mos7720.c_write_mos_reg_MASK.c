
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {struct usb_device* dev; } ;
struct usb_device {int dev; } ;
typedef enum mos_regs { ____Placeholder_mos_regs } mos_regs ;
typedef scalar_t__ __u8 ;
typedef scalar_t__ __u16 ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,unsigned int) ;
 int FUNC_3 (struct usb_device*,unsigned int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int ,int ) ;
 unsigned int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_serial *VAR_1, unsigned int VAR_2,
    enum mos_regs VAR_3, __u8 VAR_4)
{
 struct usb_device *VAR_5 = VAR_1->dev;
 unsigned int VAR_6 = FUNC_4(VAR_5, 0);
 __u8 VAR_7 = (__u8)0x0e;
 __u8 VAR_8 = (__u8)0x40;
 __u16 VAR_9 = FUNC_1(VAR_3);
 __u16 VAR_10 = FUNC_2(VAR_3, VAR_2) + VAR_4;
 int VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, VAR_10,
         VAR_9, ((void*)0), 0, VAR_0);
 if (VAR_11 < 0)
  FUNC_0(&VAR_5->dev,
   "mos7720: usb_control_msg() failed: %d\n", VAR_11);
 return VAR_11;
}
