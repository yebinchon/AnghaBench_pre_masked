
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef unsigned short u16 ;
typedef int sint ;


 unsigned short FUNC_0 (int ) ;
 unsigned short FUNC_1 (int ) ;
 unsigned short FUNC_2 (int const,int const) ;
 int VAR_0 ;
 unsigned short FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned short) ;

__attribute__((used)) static void FUNC_5(u16 *VAR_1, const u8 *VAR_2, const u8 *VAR_3, u32 VAR_4)
{
 sint VAR_5;


 VAR_1[0] = FUNC_1(VAR_4);
 VAR_1[1] = FUNC_0(VAR_4);
 VAR_1[2] = FUNC_2(VAR_3[1], VAR_3[0]);
 VAR_1[3] = FUNC_2(VAR_3[3], VAR_3[2]);
 VAR_1[4] = FUNC_2(VAR_3[5], VAR_3[4]);


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_1[0] += FUNC_4(VAR_1[4] ^ FUNC_3((VAR_5 & 1) + 0));
  VAR_1[1] += FUNC_4(VAR_1[0] ^ FUNC_3((VAR_5 & 1) + 2));
  VAR_1[2] += FUNC_4(VAR_1[1] ^ FUNC_3((VAR_5 & 1) + 4));
  VAR_1[3] += FUNC_4(VAR_1[2] ^ FUNC_3((VAR_5 & 1) + 6));
  VAR_1[4] += FUNC_4(VAR_1[3] ^ FUNC_3((VAR_5 & 1) + 0));
  VAR_1[4] += (unsigned short)VAR_5;
 }
}
