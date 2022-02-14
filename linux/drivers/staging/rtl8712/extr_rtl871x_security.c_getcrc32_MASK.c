
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static u32 FUNC_1(u8 *VAR_2, u32 VAR_3)
{
 u8 *VAR_4;
 u32 VAR_5;

 if (!VAR_0)
  FUNC_0();
 VAR_5 = 0xffffffff;
 for (VAR_4 = VAR_2; VAR_3 > 0; ++VAR_4, --VAR_3)
  VAR_5 = VAR_1[(VAR_5 ^ *VAR_4) & 0xff] ^ (VAR_5 >> 8);
 return ~VAR_5;
}
