
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct usbnet*,int ,int ,int,int,int*) ;

__attribute__((used)) static int FUNC_1(struct usbnet *VAR_2, u16 *VAR_3)
{
 u8 VAR_4;
 u8 VAR_5[64];
 u16 VAR_6 = 0;

 if (FUNC_0(VAR_2, VAR_0, 0, 64, 64, VAR_5) < 0)
  return -VAR_1;

 if (*VAR_5 == 0xFF)
  return -VAR_1;

 for (VAR_4 = 0; VAR_4 < 64; VAR_4++)
  VAR_6 = VAR_6 + VAR_5[VAR_4];

 while (VAR_6 > 255)
  VAR_6 = (VAR_6 & 0x00FF) + ((VAR_6 >> 8) & 0x00FF);

 if (VAR_6 != 0xFF)
  return -VAR_1;

 *VAR_3 = (VAR_5[51] << 8) | VAR_5[52];

 return 0;
}
