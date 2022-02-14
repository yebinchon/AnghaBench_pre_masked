
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,int,int,int *,int ,int ) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct usb_device *VAR_2,
      u8 VAR_3, u8 VAR_4, u16 VAR_5)
{
 u16 VAR_6 = (VAR_5 << 8) | VAR_4;

 return FUNC_0(VAR_2, FUNC_1(VAR_2, 0),
          VAR_1, 0x40, VAR_6, VAR_3,
          ((void*)0), 0, VAR_0);
}
