
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,int ,int ,int *,int,int ) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct usb_device *VAR_3,
      u8 VAR_4,
      u8 VAR_5,
      u8 *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, FUNC_1(VAR_3, 0),
         VAR_2, 0xc0, VAR_5,
         VAR_4, VAR_6, sizeof(*VAR_6), VAR_1);
 if (VAR_7 < (int)sizeof(*VAR_6)) {
  if (VAR_7 >= 0)
   VAR_7 = -VAR_0;
 }

 return VAR_7;
}
