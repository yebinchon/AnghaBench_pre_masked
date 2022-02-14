
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;


 int FUNC_0 (int) ;

int FUNC_1(u8 VAR_0)
{
 unsigned char VAR_1[] = {2, 4, 11, 22, 12, 18, 24, 36, 48, 72, 96, 108, 0};
 int VAR_2 = 0;

 while (VAR_1[VAR_2] != 0) {
  if (VAR_1[VAR_2] == VAR_0)
   return FUNC_0(VAR_2);
  VAR_2++;
 }
 return 0;
}
