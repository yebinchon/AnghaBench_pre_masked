
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (int,int*,int,int*,int*) ;

void FUNC_1(u8 VAR_0, u8 VAR_1, u8 *VAR_2,
        u8 *VAR_3, u16 VAR_4,
        u8 *VAR_5)
{
 u16 VAR_6, VAR_7;
 u8 VAR_8 = VAR_0;
 u16 VAR_9 = 0, VAR_10 = 0;

 for (VAR_6 = 0; VAR_6 <= (VAR_1 - VAR_0) / 2; VAR_6++) {
  FUNC_0(VAR_8, VAR_2,
            VAR_4, &(VAR_9),
            &(VAR_10));
  if (VAR_10 < 1)
   VAR_10 = 1;
  if (VAR_9 == VAR_4 - 1)
   VAR_9 = (u16) (VAR_4 - 2);
  if (VAR_2[VAR_9] == VAR_2[VAR_10])
   VAR_7 = VAR_3[VAR_9];
  else
   VAR_7 = (u16)(((VAR_8 - VAR_2[VAR_9]) * VAR_3[VAR_10] +
       (VAR_2[VAR_10] - VAR_8) * VAR_3[VAR_9]) /
      (VAR_2[VAR_10] - VAR_2[VAR_9]));
  VAR_5[VAR_6] = (u8) VAR_7;
  VAR_8 += 2;
 }
}
