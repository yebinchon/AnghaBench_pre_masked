
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int* VAR_2 ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_3)
{
 int VAR_4;
 u32 VAR_5, VAR_6, VAR_7;

 FUNC_0();

 VAR_7 = VAR_0;
 VAR_5 = VAR_3 & 0xfff00000;
 VAR_6 = VAR_3 & 0x000fffff;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_2[VAR_4] == VAR_5) {
   VAR_7 = VAR_4 << 20;
   break;
  }
 }
 if (VAR_7 == VAR_0)
  return VAR_7;
 else
  return VAR_7 + VAR_6;
}
