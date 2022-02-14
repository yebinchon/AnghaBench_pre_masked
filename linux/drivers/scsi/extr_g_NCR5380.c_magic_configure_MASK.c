
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(int VAR_0, u8 VAR_1, u8 VAR_2[])
{
 u8 VAR_3 = 0;

 FUNC_0(VAR_2[0], 0x779);
 FUNC_0(VAR_2[1], 0x379);
 FUNC_0(VAR_2[2], 0x379);
 FUNC_0(VAR_2[3], 0x379);
 FUNC_0(VAR_2[4], 0x379);

 if (VAR_1 == 9)
  VAR_1 = 2;

 if (VAR_0 >= 0 && VAR_0 <= 7)
  VAR_3 = 0x80 | VAR_0 | (VAR_1 << 4);
 FUNC_0(VAR_3, 0x379);
}
