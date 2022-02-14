
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_device*,int ,int,int ) ;

__attribute__((used)) static inline int FUNC_1(struct usb_device *VAR_1, u8 *VAR_2)
{
 u16 VAR_3 = ((u16) (VAR_2[1] << 8) | (u16) (VAR_2[0]));

 return FUNC_0(VAR_1, VAR_0, VAR_3, 0);
}
