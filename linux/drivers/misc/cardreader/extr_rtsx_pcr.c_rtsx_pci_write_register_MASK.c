
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtsx_pcr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtsx_pcr*,int ) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int) ;

int FUNC_2(struct rtsx_pcr *VAR_6, u16 VAR_7, u8 VAR_8, u8 VAR_9)
{
 int VAR_10;
 u32 VAR_11 = VAR_3;

 VAR_11 |= (u32)(VAR_7 & 0x3FFF) << 16;
 VAR_11 |= (u32)VAR_8 << 8;
 VAR_11 |= (u32)VAR_9;

 FUNC_1(VAR_6, VAR_5, VAR_11);

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_11 = FUNC_0(VAR_6, VAR_5);
  if ((VAR_11 & VAR_2) == 0) {
   if (VAR_9 != (u8)VAR_11)
    return -VAR_0;
   return 0;
  }
 }

 return -VAR_1;
}
