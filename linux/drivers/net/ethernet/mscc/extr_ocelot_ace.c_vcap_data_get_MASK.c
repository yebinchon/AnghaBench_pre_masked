
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;


 size_t VAR_0 ;

__attribute__((used)) static u32 FUNC_0(u32 *VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++, VAR_2++) {
  VAR_5 = VAR_1[VAR_2 / VAR_0];
  VAR_6 = (1 << (VAR_2 % VAR_0));
  if (VAR_5 & VAR_6)
   VAR_7 |= (1 << VAR_4);
 }
 return VAR_7;
}
