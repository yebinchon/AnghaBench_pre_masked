
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int,int,int) ;

__attribute__((used)) static void FUNC_1(u8 *VAR_4, u32 VAR_5, u8 VAR_6)
{
 u32 VAR_7 = 0;
 u8 VAR_8 = 0;
 u8 VAR_9 = 0;

 while (VAR_7 < VAR_5) {
  if (VAR_4[VAR_7] == VAR_1)
   VAR_4[VAR_7 + 3] = (VAR_4[VAR_7 + 3] & 0x01) | (0x00 << 1);

  if (VAR_4[VAR_7] == VAR_0)
   VAR_9 = VAR_7;
  else if (VAR_4[VAR_7] == VAR_2)
   VAR_8 = VAR_7;
  VAR_7 += VAR_4[VAR_7 + 1] + 3;
 }
 if (VAR_6 != VAR_3)
  FUNC_0(VAR_4, VAR_9,
        VAR_8, VAR_6);
}
