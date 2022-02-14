
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int) ;

u8 FUNC_1(u8 *VAR_1, uint *VAR_2)
{
 u8 VAR_3 = 0;
 u8 VAR_4, VAR_5[4] = {0x0, 0x50, 0xf2, 0x04};

 if (!VAR_1)
  return VAR_3;

 VAR_4 = VAR_1[0];

 if ((VAR_4 == VAR_0) && (!FUNC_0(&VAR_1[2], VAR_5, 4))) {

  *VAR_2 = VAR_1[1]+2;
  VAR_3 = 1;
 }
 return VAR_3;
}
