
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int s32 ;


 int VAR_0 ;

__attribute__((used)) static s32 FUNC_0(u32 VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4, VAR_5;
 s32 VAR_6;
 u16 VAR_7 = VAR_1 / VAR_0;

 if (VAR_7 % 2)
  return -FUNC_0(VAR_1 - VAR_0);
 VAR_1 = VAR_1 % VAR_0;
 if (VAR_1 > VAR_0 / 2)
  return -FUNC_0(VAR_0 / 2 - (VAR_1 % (VAR_0 / 2)));




 VAR_2 = VAR_1 * VAR_1 / 32768 / 2;
 VAR_3 = VAR_2 * VAR_1 / 32768 * VAR_1 / 32768 / 3 / 4;
 VAR_4 = VAR_3 * VAR_1 / 32768 * VAR_1 / 32768 / 5 / 6;
 VAR_5 = VAR_4 * VAR_1 / 32768 * VAR_1 / 32768 / 7 / 8;
 VAR_6 = 32768 - VAR_2 + VAR_3 - VAR_4 + VAR_5;
 return VAR_6;
}
