
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_device*,int ,int,int,int,int ,void*,int,int ) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct usb_device *VAR_5, u16 VAR_6, void *VAR_7,
          int VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_0(VAR_5, FUNC_1(VAR_5, 0), 0x33,
         VAR_4 | VAR_2 |
         VAR_3, VAR_6 << 8, 0, VAR_7, VAR_8,
         VAR_1);
 if (VAR_9 >= 0 && VAR_9 != VAR_8)
  return -VAR_0;
 return VAR_9;
}
