
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
 int FUNC_0 (struct usb_device*,int ,int ,int ,int,int,int *,int ,int) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct usb_device *VAR_4, u16 VAR_5, u16 VAR_6)
{

 if (((VAR_5 >> 11) & VAR_1) ==
   VAR_2) {
  int VAR_7 = FUNC_0(VAR_4, FUNC_1(VAR_4, 0),
    VAR_0, VAR_3,
    VAR_5 ^ 0x8000, VAR_6, ((void*)0), 0, 1000);
  if (VAR_7)
   return VAR_7;
 }
 return FUNC_0(VAR_4, FUNC_1(VAR_4, 0),
          VAR_0, VAR_3, VAR_5,
          VAR_6, ((void*)0), 0, 1000);
}
