
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 size_t VAR_0 ;
 int const VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int const*,int const*,int) ;

__attribute__((used)) static bool
FUNC_1(const u8 *VAR_3, const u8 **VAR_4, u32 *VAR_5,
   const u8 *VAR_6, u32 VAR_7, u8 VAR_8)
{

 if (VAR_3[VAR_2] >= VAR_7 + 1 &&
     !FUNC_0(&VAR_3[VAR_0], VAR_6, VAR_7) &&
     VAR_8 == VAR_3[VAR_0 + VAR_7]) {
  return 1;
 }

 if (VAR_4 == ((void*)0))
  return 0;

 VAR_3 += VAR_3[VAR_2] + VAR_1;

 *VAR_5 -= (int)(VAR_3 - *VAR_4);

 *VAR_4 = VAR_3;

 return 0;
}
