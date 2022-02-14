
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;



__attribute__((used)) static void FUNC_0(u32 *VAR_0, u8 *VAR_1,
       unsigned VAR_2)
{
 u16 *VAR_3, *VAR_4;
 u32 *VAR_5;
 u32 VAR_6;

 VAR_5 = VAR_0;
 VAR_3 = (u16 *)VAR_1;

 for (; VAR_2 > 3; VAR_2 -= 4) {

  VAR_6 = *VAR_5++;
  VAR_4 = (u16 *)&VAR_6;


  *VAR_3++ = *VAR_4++;
  *VAR_3++ = *VAR_4++;
 }

 if (VAR_2) {
  u8 *VAR_7, *VAR_8;


  VAR_7 = (u8 *)VAR_3;
  VAR_6 = *VAR_5++;
  VAR_8 = (u8 *)&VAR_6;


  for (; VAR_2 > 0; VAR_2--)
   *VAR_7 = *VAR_8;
 }
}
