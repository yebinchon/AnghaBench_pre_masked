
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int const FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(const u8 VAR_1, const u8 *VAR_2,
          u8 *VAR_3)
{
 u8 VAR_4 = 0;
 u8 VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (!(VAR_1 & FUNC_0(VAR_5))) {
   VAR_6 = VAR_5 * 2;
   VAR_3[VAR_6] = VAR_2[VAR_4++];
   VAR_3[VAR_6 + 1] = VAR_2[VAR_4++];
  }
 }
}
