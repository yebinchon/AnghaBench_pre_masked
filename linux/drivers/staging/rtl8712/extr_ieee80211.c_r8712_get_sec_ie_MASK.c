
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
typedef int u8 ;
typedef int u16 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int*,int) ;

int FUNC_2(u8 *VAR_5, uint VAR_6, u8 *VAR_7, u16 *VAR_8,
       u8 *VAR_9, u16 *VAR_10)
{
 u8 VAR_11;
 u8 VAR_12[4] = {0x0, 0x50, 0xf2, 0x01};
 uint VAR_13;


 VAR_13 = VAR_2 + VAR_0 + VAR_1;
 while (VAR_13 < VAR_6) {
  VAR_11 = VAR_5[VAR_13];
  if ((VAR_11 == VAR_4) &&
      (!FUNC_0(&VAR_5[VAR_13 + 2], &VAR_12[0], 4))) {
   FUNC_1(VAR_9, &VAR_5[VAR_13], VAR_5[VAR_13 + 1] + 2);
   *VAR_10 = VAR_5[VAR_13 + 1] + 2;
   VAR_13 += VAR_5[VAR_13 + 1] + 2;
  } else {
   if (VAR_11 == VAR_3) {
    FUNC_1(VAR_7, &VAR_5[VAR_13],
           VAR_5[VAR_13 + 1] + 2);
    *VAR_8 = VAR_5[VAR_13 + 1] + 2;
    VAR_13 += VAR_5[VAR_13 + 1] + 2;
   } else {
    VAR_13 += VAR_5[VAR_13 + 1] + 2;
   }
  }
 }
 return *VAR_8 + *VAR_10;
}
