
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct usb_device {int dummy; } ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_device*,int ,scalar_t__,scalar_t__,int *,scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct usb_device *VAR_2, u32 VAR_3, u32 VAR_4,
        u16 VAR_5)
{
 u8 VAR_6;
 u16 VAR_7;
 u16 VAR_8;
 __le32 VAR_9;

 VAR_6 = VAR_1;
 VAR_8 = VAR_0;
 VAR_7 = (u16)(VAR_3&0x0000ffff);
 VAR_9 = FUNC_1(VAR_4);
 FUNC_0(VAR_2, VAR_6, VAR_7, VAR_8, &VAR_9,
           VAR_5);
}
