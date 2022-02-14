
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (struct usb_serial*,int,int*) ;
 int FUNC_3 (struct usb_serial*,int,int) ;

__attribute__((used)) static int FUNC_4(struct usb_serial *VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 int VAR_6 = 0;
 u8 *VAR_7;

 VAR_7 = FUNC_1(1, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_2, VAR_3 | 0x80, VAR_7);
 if (VAR_6)
  goto out_free;

 *VAR_7 &= ~VAR_4;
 *VAR_7 |= VAR_5 & VAR_4;

 VAR_6 = FUNC_3(VAR_2, VAR_3, *VAR_7);
out_free:
 FUNC_0(VAR_7);

 return VAR_6;
}
