
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,int) ;

void FUNC_1(void *VAR_2, int VAR_3, u32 VAR_4)
{
 u32 *VAR_5 = VAR_2;

 FUNC_0(VAR_2, VAR_1, VAR_3);
 while (VAR_3 > 0) {
  if (VAR_4 & VAR_0)
   *VAR_5 = 0x471FFF10;
  else
   *VAR_5 = 0x10FF1F47;
  VAR_5 += (188 / 4);
  VAR_3 -= 188;
 }
}
