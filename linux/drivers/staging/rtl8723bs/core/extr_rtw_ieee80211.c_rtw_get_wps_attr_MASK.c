
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;


 scalar_t__ FUNC_0 (int*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int*,scalar_t__) ;

u8 *FUNC_3(u8 *VAR_1, uint VAR_2, u16 VAR_3, u8 *VAR_4, u32 *VAR_5)
{
 u8 *VAR_6 = ((void*)0);
 u8 *VAR_7 = ((void*)0);
 u8 VAR_8[4] = {0x00, 0x50, 0xF2, 0x04};

 if (VAR_5)
  *VAR_5 = 0;

 if ((VAR_1[0] != VAR_0) ||
  (FUNC_1(VAR_1 + 2, VAR_8, 4))) {
  return VAR_6;
 }


 VAR_6 = VAR_1 + 6;

 while (VAR_6 - VAR_1 < VAR_2) {

  u16 VAR_9 = FUNC_0(VAR_6);
  u16 VAR_10 = FUNC_0(VAR_6 + 2);
  u16 VAR_11 = VAR_10 + 4;


  if (VAR_9 == VAR_3) {
   VAR_7 = VAR_6;

   if (VAR_4)
    FUNC_2(VAR_4, VAR_6, VAR_11);

   if (VAR_5)
    *VAR_5 = VAR_11;

   break;
  } else {
   VAR_6 += VAR_11;
  }
 }

 return VAR_7;
}
