
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u32 VAR_1, u32 VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 u32 VAR_5 = 6;

 if (VAR_1 >= 64 * VAR_2)
  return -VAR_0;

 while (VAR_5--) {
  u32 VAR_6 = 1 << VAR_5;
  if (VAR_1 >= VAR_2 * VAR_6) {
   *VAR_4 = VAR_5, *VAR_3 = VAR_6;
   return 0;
  }
 }
 *VAR_4 = 0, *VAR_3 = 1;
 return 0;
}
