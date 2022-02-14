
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
 int VAR_4 ;
 int FUNC_1 (struct rtsx_chip*,int ) ;
 int FUNC_2 (struct rtsx_chip*,int ,int) ;

int FUNC_3(struct rtsx_chip *VAR_5, u16 VAR_6, u8 VAR_7, u8 VAR_8)
{
 int VAR_9;
 u32 VAR_10 = 3 << 30;

 VAR_10 |= (u32)(VAR_6 & 0x3FFF) << 16;
 VAR_10 |= (u32)VAR_7 << 8;
 VAR_10 |= (u32)VAR_8;

 FUNC_2(VAR_5, VAR_1, VAR_10);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_10 = FUNC_1(VAR_5, VAR_1);
  if ((VAR_10 & FUNC_0(31)) == 0) {
   if (VAR_8 != (u8)VAR_10)
    return VAR_2;

   return VAR_3;
  }
 }

 return VAR_4;
}
