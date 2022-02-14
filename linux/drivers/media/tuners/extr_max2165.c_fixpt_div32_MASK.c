
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u32 VAR_1, u32 VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6, VAR_7 = 0;
 int VAR_8;

 if (0 == VAR_2)
  return -VAR_0;

 VAR_6 = VAR_1 / VAR_2;
 VAR_5 = VAR_1 - VAR_6 * VAR_2;

 for (VAR_8 = 0; VAR_8 < 31; VAR_8++) {
  VAR_5 <<= 1;
  if (VAR_5 >= VAR_2) {
   VAR_7 += 1;
   VAR_5 -= VAR_2;
  }
  VAR_7 <<= 1;
 }

 *VAR_3 = VAR_6;
 *VAR_4 = VAR_7;

 return 0;
}
