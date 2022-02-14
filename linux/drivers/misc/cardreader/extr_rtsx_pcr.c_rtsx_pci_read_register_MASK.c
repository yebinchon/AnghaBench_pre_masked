
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
 int FUNC_0 (struct rtsx_pcr*,int ) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int) ;

int FUNC_2(struct rtsx_pcr *VAR_5, u16 VAR_6, u8 *VAR_7)
{
 u32 VAR_8 = VAR_1;
 int VAR_9;

 VAR_8 |= (u32)(VAR_6 & 0x3FFF) << 16;
 FUNC_1(VAR_5, VAR_4, VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_8 = FUNC_0(VAR_5, VAR_4);
  if ((VAR_8 & VAR_2) == 0)
   break;
 }

 if (VAR_9 >= VAR_3)
  return -VAR_0;

 if (VAR_7)
  *VAR_7 = (u8)(VAR_8 & 0xFF);

 return 0;
}
