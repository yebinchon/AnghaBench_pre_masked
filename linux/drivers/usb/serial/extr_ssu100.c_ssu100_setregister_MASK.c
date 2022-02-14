
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,int,unsigned short,int *,int ,int) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct usb_device *VAR_1,
         unsigned short VAR_2,
         unsigned short VAR_3,
         u16 VAR_4)
{
 u16 VAR_5 = (VAR_4 << 8) | VAR_3;

 return FUNC_0(VAR_1, FUNC_1(VAR_1, 0),
          VAR_0, 0x40, VAR_5, VAR_2,
          ((void*)0), 0, 300);

}
