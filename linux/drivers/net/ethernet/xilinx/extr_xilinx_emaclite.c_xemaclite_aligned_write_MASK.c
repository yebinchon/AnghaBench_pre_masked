
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(void *VAR_0, u32 *VAR_1,
        unsigned VAR_2)
{
 u32 VAR_3;
 u32 *VAR_4;
 u16 *VAR_5, *VAR_6;

 VAR_4 = VAR_1;
 VAR_5 = VAR_0;
 VAR_3 = 0;

 for (; VAR_2 > 3; VAR_2 -= 4) {
  VAR_6 = (u16 *)&VAR_3;
  *VAR_6++ = *VAR_5++;
  *VAR_6++ = *VAR_5++;






  FUNC_0();


  *VAR_4++ = VAR_3;
 }
 if (VAR_2) {
  u8 *VAR_7, *VAR_8;


  VAR_3 = 0;
  VAR_8 = (u8 *)&VAR_3;
  VAR_7 = (u8 *)VAR_5;


  for (; VAR_2 > 0; VAR_2--)
   *VAR_8++ = *VAR_7++;






  FUNC_0();
  *VAR_4 = VAR_3;
 }
}
