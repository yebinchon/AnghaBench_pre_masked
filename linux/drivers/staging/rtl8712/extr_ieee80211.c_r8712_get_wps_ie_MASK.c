
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int*,int) ;

int FUNC_2(u8 *VAR_1, uint VAR_2, u8 *VAR_3, uint *VAR_4)
{
 int VAR_5;
 uint VAR_6;
 u8 VAR_7, VAR_8[4] = {0x0, 0x50, 0xf2, 0x04};

 VAR_6 = 12;
 VAR_5 = 0;
 while (VAR_6 < VAR_2) {
  VAR_7 = VAR_1[VAR_6];
  if ((VAR_7 == VAR_0) &&
      (!FUNC_0(&VAR_1[VAR_6 + 2], VAR_8, 4))) {
   FUNC_1(VAR_3, &VAR_1[VAR_6], VAR_1[VAR_6 + 1] + 2);
   *VAR_4 = VAR_1[VAR_6 + 1] + 2;
   VAR_6 += VAR_1[VAR_6 + 1] + 2;
   VAR_5 = 1;
   break;
  }
  VAR_6 += VAR_1[VAR_6 + 1] + 2;
 }
 return VAR_5;
}
