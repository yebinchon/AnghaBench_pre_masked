
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_serial {int dummy; } ;


 int FUNC_0 (struct usb_serial*,int ,int *) ;
 int FUNC_1 (struct usb_serial*) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_0, u16 VAR_1,
     u8 *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_0);
}
