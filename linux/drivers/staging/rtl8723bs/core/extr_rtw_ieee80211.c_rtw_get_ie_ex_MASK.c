
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef scalar_t__ u8 ;


 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,scalar_t__) ;

u8 *FUNC_2(u8 *VAR_0, uint VAR_1, u8 VAR_2, u8 *VAR_3, u8 VAR_4, u8 *VAR_5, uint *VAR_6)
{
 uint VAR_7;
 u8 *VAR_8 = ((void*)0);

 if (VAR_6)
  *VAR_6 = 0;

 if (!VAR_0 || VAR_1 <= 0)
  return VAR_8;

 VAR_7 = 0;

 while (VAR_7 < VAR_1) {
  if (VAR_2 == VAR_0[VAR_7]
   && (!VAR_3 || !FUNC_0(&VAR_0[VAR_7+2], VAR_3, VAR_4))) {
   VAR_8 = &VAR_0[VAR_7];

   if (VAR_5)
    FUNC_1(VAR_5, &VAR_0[VAR_7], VAR_0[VAR_7+1]+2);

   if (VAR_6)
    *VAR_6 = VAR_0[VAR_7+1]+2;

   break;
  } else {
   VAR_7 += VAR_0[VAR_7+1]+2;
  }
 }

 return VAR_8;
}
