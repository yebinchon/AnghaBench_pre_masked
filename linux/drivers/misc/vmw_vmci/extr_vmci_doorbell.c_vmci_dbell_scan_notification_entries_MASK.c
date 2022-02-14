
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;

void FUNC_1(u8 *VAR_1)
{
 u32 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1[VAR_2] & 0x1) {
   VAR_1[VAR_2] &= ~1;
   FUNC_0(VAR_2);
  }
 }
}
