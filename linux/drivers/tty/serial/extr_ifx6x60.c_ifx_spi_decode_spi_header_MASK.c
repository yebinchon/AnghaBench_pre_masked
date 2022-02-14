
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;

__attribute__((used)) static int FUNC_0(unsigned char *VAR_4, int *VAR_5,
   unsigned char *VAR_6, unsigned char *VAR_7)
{
 u16 VAR_8;
 u16 VAR_9;
 u16 *VAR_10 = (u16 *)VAR_4;

 VAR_8 = *VAR_10;
 VAR_9 = *(VAR_10+1);

 if (VAR_8 == 0 && VAR_9 == 0) {
  *VAR_7 = 0;
  *VAR_6 = 0;
  return VAR_1;
 } else if (VAR_8 == 0xffff && VAR_9 == 0xffff) {
  *VAR_6 = 0;

  return VAR_2;
 }

 *VAR_5 = VAR_8 & 0xfff;
 *VAR_6 = (VAR_4[1] >> VAR_3) & 1;
 *VAR_7 = (VAR_4[3] >> VAR_0) & 1;
 return 0;
}
