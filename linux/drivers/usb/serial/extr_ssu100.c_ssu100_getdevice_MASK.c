
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,int ,int ,int *,int,int) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct usb_device *VAR_2, u8 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, FUNC_1(VAR_2, 0),
         VAR_1, 0xc0, 0, 0,
         VAR_3, 3, 300);
 if (VAR_4 < 3) {
  if (VAR_4 >= 0)
   VAR_4 = -VAR_0;
 }

 return VAR_4;
}
