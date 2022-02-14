
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ s64 ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static s32 FUNC_1(s32 VAR_2, s32 VAR_3, s64 VAR_4, int VAR_5)
{
 const u32 VAR_6 = 16;
 const u32 VAR_7 = 500000000;
 s32 VAR_8;

 VAR_4 >>= VAR_0;

 if (FUNC_0(VAR_4 <= 0 || VAR_4 > VAR_1))
  return VAR_5;




 VAR_8 = VAR_6 * VAR_3 * (VAR_7 >> VAR_0);
 VAR_8 = VAR_8 / (s32)VAR_4;

 VAR_8 += VAR_6 * VAR_2;

 return VAR_8;
}
