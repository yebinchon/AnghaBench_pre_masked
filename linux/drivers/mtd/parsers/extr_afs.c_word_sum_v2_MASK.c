
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  u32 VAR_4;

  VAR_4 = VAR_0[VAR_3];
  if (VAR_4 > ~VAR_2)
   VAR_2++;
  VAR_2 += VAR_4;
 }
 return ~VAR_2;
}
