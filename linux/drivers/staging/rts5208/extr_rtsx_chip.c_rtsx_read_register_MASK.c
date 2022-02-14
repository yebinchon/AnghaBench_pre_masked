
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtsx_chip {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rtsx_chip*,int ) ;
 int FUNC_2 (struct rtsx_chip*,int ,int) ;

int FUNC_3(struct rtsx_chip *VAR_4, u16 VAR_5, u8 *VAR_6)
{
 u32 VAR_7 = 2 << 30;
 int VAR_8;

 if (VAR_6)
  *VAR_6 = 0;

 VAR_7 |= (u32)(VAR_5 & 0x3FFF) << 16;

 FUNC_2(VAR_4, VAR_1, VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7 = FUNC_1(VAR_4, VAR_1);
  if ((VAR_7 & FUNC_0(31)) == 0)
   break;
 }

 if (VAR_8 >= VAR_0)
  return VAR_3;

 if (VAR_6)
  *VAR_6 = (u8)(VAR_7 & 0xFF);

 return VAR_2;
}
