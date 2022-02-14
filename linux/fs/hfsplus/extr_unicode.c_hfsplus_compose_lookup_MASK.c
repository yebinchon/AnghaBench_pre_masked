
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int* VAR_0 ;

__attribute__((used)) static u16 *FUNC_0(u16 *VAR_1, u16 VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_4 = 1;
 VAR_5 = VAR_1[1];
 if (!VAR_5 || VAR_2 < VAR_1[VAR_4 * 2] || VAR_2 > VAR_1[VAR_5 * 2])
  return ((void*)0);
 do {
  VAR_3 = (VAR_4 + VAR_5) / 2;
  if (VAR_2 > VAR_1[VAR_3 * 2])
   VAR_4 = VAR_3 + 1;
  else if (VAR_2 < VAR_1[VAR_3 * 2])
   VAR_5 = VAR_3 - 1;
  else
   return VAR_0 + VAR_1[VAR_3 * 2 + 1];
 } while (VAR_4 <= VAR_5);
 return ((void*)0);
}
