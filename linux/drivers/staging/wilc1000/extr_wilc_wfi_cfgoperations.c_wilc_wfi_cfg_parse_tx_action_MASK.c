
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

__attribute__((used)) static void FUNC_1(u8 *VAR_4, u32 VAR_5, bool VAR_6,
      u8 VAR_7, u8 VAR_8)
{
 u32 VAR_9 = 0;
 u8 VAR_10 = 0;
 u8 VAR_11 = 0;

 while (VAR_9 < VAR_5) {
  if (VAR_4[VAR_9] == VAR_1) {
   VAR_4[VAR_9 + 3] = (VAR_4[VAR_9 + 3] & 0x01) | (0x0f << 1);

   break;
  }

  if (VAR_4[VAR_9] == VAR_0)
   VAR_11 = VAR_9;
  else if (VAR_4[VAR_9] == VAR_2)
   VAR_10 = VAR_9;
  VAR_9 += VAR_4[VAR_9 + 1] + 3;
 }
 if (VAR_8 != VAR_3 && VAR_6)
  FUNC_0(VAR_4, VAR_11,
        VAR_10, VAR_8);
}
