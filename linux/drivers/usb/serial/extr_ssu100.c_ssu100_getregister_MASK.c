
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,unsigned short,unsigned short,int *,int,int) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct usb_device *VAR_2,
         unsigned short VAR_3,
         unsigned short VAR_4,
         u8 *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, FUNC_1(VAR_2, 0),
         VAR_1, 0xc0, VAR_4,
         VAR_3, VAR_5, sizeof(*VAR_5), 300);
 if (VAR_6 < (int)sizeof(*VAR_5)) {
  if (VAR_6 >= 0)
   VAR_6 = -VAR_0;
 }

 return VAR_6;
}
