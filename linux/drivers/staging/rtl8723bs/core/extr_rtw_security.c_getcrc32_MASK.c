
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ sint ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int* VAR_1 ;

__attribute__((used)) static __le32 FUNC_2(u8 *VAR_2, sint VAR_3)
{
 u8 *VAR_4;
 u32 VAR_5;

 if (VAR_0 == 0)
  FUNC_1();

 VAR_5 = 0xffffffff;

 for (VAR_4 = VAR_2; VAR_3 > 0; ++VAR_4, --VAR_3) {
  VAR_5 = VAR_1[(VAR_5 ^ *VAR_4) & 0xff] ^ (VAR_5 >> 8);
 }
 return FUNC_0(~VAR_5);
}
