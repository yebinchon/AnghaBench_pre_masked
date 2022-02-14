
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct usb_ftdi {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_ftdi*,int*) ;
 int FUNC_1 (struct usb_ftdi*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct usb_ftdi *VAR_1)
{
 u32 VAR_2;
 u8 VAR_3;
 int VAR_4;
 VAR_4 = FUNC_0(VAR_1, &VAR_2);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_1(VAR_1, 0x00000000L);
 if (VAR_4)
  return VAR_4;
 FUNC_2(750);
 VAR_4 = FUNC_1(VAR_1, 0x00000200L | 0x100);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_1(VAR_1, 0x00000200L | 0x500);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_1, &VAR_2);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_1(VAR_1, 0x0000020CL | 0x000);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_1(VAR_1, 0x0000020DL | 0x000);
 if (VAR_4)
  return VAR_4;
 FUNC_2(250);
 VAR_4 = FUNC_1(VAR_1, 0x0000020FL | 0x000);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_1, &VAR_2);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_1(VAR_1, 0x0000025FL | 0x800);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_1, &VAR_2);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_1, &VAR_2);
 if (VAR_4)
  return VAR_4;
 FUNC_2(1000);
 VAR_3 = (VAR_2 >> 16) & 0x000F;
 if (0x0D == VAR_3)
  return 0;
 else
  return - VAR_0;
}
