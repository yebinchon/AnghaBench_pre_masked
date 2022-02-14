
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct adapter*,scalar_t__) ;
 int FUNC_1 (struct adapter*,scalar_t__,int) ;

u8 FUNC_2(struct adapter *VAR_1, u16 VAR_2, u8 VAR_3)
{
 u8 VAR_4 = 0;
 u8 VAR_5;

 FUNC_1(VAR_1, VAR_0 + 1, (u8)(VAR_2 & 0xff));
 FUNC_1(VAR_1, VAR_0 + 2,
     (FUNC_0(VAR_1, VAR_0 + 2) & 0xFC) |
     (u8)((VAR_2 >> 8) & 0x03));
 FUNC_1(VAR_1, VAR_0, VAR_3);

 FUNC_1(VAR_1, VAR_0 + 3, 0xF2);

 while ((0x80 & FUNC_0(VAR_1, VAR_0 + 3)) && (VAR_4 < 100))
  VAR_4++;

 if (VAR_4 < 100)
  VAR_5 = 1;
 else
  VAR_5 = 0;

 return VAR_5;
}
