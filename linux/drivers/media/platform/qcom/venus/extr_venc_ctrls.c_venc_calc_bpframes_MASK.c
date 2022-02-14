
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u32 VAR_1, u32 VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 u32 VAR_5 = (VAR_1 - 1) >> 1;
 u32 VAR_6, VAR_7, VAR_8;
 bool VAR_9 = 0;

 if (!VAR_1)
  return -VAR_0;

 *VAR_3 = *VAR_4 = 0;

 if (!VAR_2) {
  *VAR_4 = VAR_1 - 1;
  return 0;
 }

 VAR_6 = VAR_7 = VAR_5;

 for (; VAR_6 <= VAR_1 - 1; VAR_6++, VAR_7--) {
  if (VAR_6 % VAR_7)
   continue;

  VAR_8 = VAR_6 / VAR_7;

  if (VAR_8 == VAR_2) {
   VAR_9 = 1;
   break;
  }

  if (VAR_8 > VAR_2)
   break;
 }

 if (!VAR_9)
  return -VAR_0;

 if (VAR_6 + VAR_7 + 1 != VAR_1)
  return -VAR_0;

 *VAR_3 = VAR_6;
 *VAR_4 = VAR_7;

 return 0;
}
