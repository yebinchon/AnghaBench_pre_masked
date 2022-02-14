
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_3, VAR_4;
 u32 VAR_5;
 u8 *VAR_6 = (u8 *)&VAR_5, *VAR_7;
 u8 VAR_8;

 if (VAR_1 == 1)
  return;

 VAR_5 = 0x12340000;

 for (VAR_3 = 0; VAR_3 < 256; ++VAR_3) {
  VAR_8 = FUNC_0((u8)VAR_3);
  for (VAR_5 = ((u32)VAR_8) << 24, VAR_4 = 8; VAR_4 > 0; --VAR_4)
   VAR_5 = VAR_5 & 0x80000000 ? (VAR_5 << 1) ^ VAR_0 : (VAR_5 << 1);
  VAR_7 = (u8 *)&VAR_2[VAR_3];

  VAR_7[0] = FUNC_0(VAR_6[3]);
  VAR_7[1] = FUNC_0(VAR_6[2]);
  VAR_7[2] = FUNC_0(VAR_6[1]);
  VAR_7[3] = FUNC_0(VAR_6[0]);
 }
 VAR_1 = 1;
}
