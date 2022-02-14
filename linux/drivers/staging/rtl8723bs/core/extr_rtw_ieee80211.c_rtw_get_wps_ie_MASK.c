
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int*,int) ;

u8 *FUNC_2(u8 *VAR_1, uint VAR_2, u8 *VAR_3, uint *VAR_4)
{
 uint VAR_5;
 u8 *VAR_6 = ((void*)0);
 u8 VAR_7, VAR_8[4] = {0x0, 0x50, 0xf2, 0x04};

 if (VAR_4)
  *VAR_4 = 0;

 if (!VAR_1 || VAR_2 <= 0)
  return VAR_6;

 VAR_5 = 0;

 while (VAR_5 < VAR_2) {
  VAR_7 = VAR_1[VAR_5];

  if ((VAR_7 == VAR_0) && (!FUNC_0(&VAR_1[VAR_5+2], VAR_8, 4))) {
   VAR_6 = &VAR_1[VAR_5];

   if (VAR_3)
    FUNC_1(VAR_3, &VAR_1[VAR_5], VAR_1[VAR_5+1]+2);

   if (VAR_4)
    *VAR_4 = VAR_1[VAR_5+1]+2;

   VAR_5 += VAR_1[VAR_5+1]+2;

   break;
  } else {
   VAR_5 += VAR_1[VAR_5+1]+2;
  }
 }

 return VAR_6;
}
