
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

int FUNC_1(unsigned int VAR_3, unsigned int VAR_4)
{
 if (VAR_4 == 0)
  return -VAR_0;

 if (FUNC_0(VAR_1 == 0 || VAR_2 == 0))
  return -VAR_0;

 if (VAR_3 >= VAR_1 && VAR_3 < VAR_2) {
  if (FUNC_0(VAR_3 + VAR_4 - 1 >= VAR_2))
   return -VAR_0;
  return 1;
 }

 if (FUNC_0(VAR_3 + VAR_4 > VAR_1 && VAR_3 < VAR_2))
  return -VAR_0;

 return 0;
}
