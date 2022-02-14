
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int s64 ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;

s32 FUNC_3(u32 *VAR_3, u16 VAR_4, s64 VAR_5, u32 VAR_6)
{
 u32 *VAR_7;


 if (!VAR_3 || !VAR_6 || VAR_6 > 8 || (VAR_6 & (VAR_6 - 1)))
  return VAR_0;

 VAR_7 = &VAR_3[FUNC_1(*VAR_3)];

 if (VAR_6 < 4) {
  VAR_7[1] = (u32)VAR_5 & (FUNC_0(8 * VAR_6) - 1);
 } else {
  VAR_7[1] = (u32)VAR_5;
  if (VAR_6 > 4)
   VAR_7[2] = (u32)(VAR_5 >> 32);
 }


 VAR_6 <<= VAR_2;
 VAR_7[0] = VAR_6 | VAR_4;


 VAR_6 += VAR_1 << VAR_2;
 *VAR_3 += FUNC_2(VAR_6);

 return 0;
}
