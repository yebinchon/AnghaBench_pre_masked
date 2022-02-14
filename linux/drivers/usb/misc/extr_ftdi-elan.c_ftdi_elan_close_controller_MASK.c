
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_ftdi {int dummy; } ;


 int FUNC_0 (struct usb_ftdi*,int,int ,int*) ;
 int FUNC_1 (struct usb_ftdi*,int,int,int) ;
 int FUNC_2 (struct usb_ftdi*,int) ;

__attribute__((used)) static int FUNC_3(struct usb_ftdi *VAR_0, int VAR_1)
{
 u32 VAR_2;
 int VAR_3;
 u32 VAR_4;
 int VAR_5 = 0;
 int VAR_6 = VAR_1 << 8;
 VAR_3 = FUNC_2(VAR_0, 0x0000025FL | 0x2800);
 if (VAR_3)
  return VAR_3;
 VAR_5 = 16;
 VAR_3 = FUNC_1(VAR_0, VAR_6 | VAR_5, 0,
         0xFFFFFFFF);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_0(VAR_0, VAR_6 | VAR_5, 0,
        &VAR_4);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_1(VAR_0, VAR_6 | VAR_5, 0,
         0x00000000);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_0(VAR_0, VAR_6 | VAR_5, 0,
        &VAR_4);
 if (VAR_3)
  return VAR_3;
 VAR_5 = 12;
 VAR_3 = FUNC_0(VAR_0, VAR_6 | VAR_5, 0,
        &VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_2 &= 0xFFFF00FF;
 VAR_2 |= 0x00001600;
 VAR_3 = FUNC_1(VAR_0, VAR_6 | VAR_5, 0x00,
         VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_0(VAR_0, VAR_6 | VAR_5, 0,
        &VAR_4);
 if (VAR_3)
  return VAR_3;
 VAR_5 = 4;
 VAR_3 = FUNC_1(VAR_0, VAR_6 | VAR_5, 0x00,
         0x00);
 if (VAR_3)
  return VAR_3;
 return FUNC_0(VAR_0, VAR_6 | VAR_5, 0, &VAR_4);
}
