
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (struct usb_device*,int ,int,int,int,int ,int*,int,int ) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static inline int FUNC_4(struct usb_device *VAR_6, u8 VAR_7)
{
 u8 *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(40, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_6, FUNC_3(VAR_6, 0), 0x22,
   VAR_5 | VAR_3 |
   VAR_4, VAR_7, 0, VAR_8,
   40, VAR_2);
 if (VAR_9 >= 0)
  VAR_9 = VAR_8[5];
 FUNC_0(VAR_8);

 return VAR_9;
}
