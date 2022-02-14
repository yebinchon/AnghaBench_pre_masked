
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(unsigned int VAR_3)
{
 if (VAR_3 > VAR_0) {
  FUNC_0(1);
  return;
 }

 FUNC_2(&VAR_1);
 if (VAR_2[VAR_3] == 0)
  FUNC_1(6, 31 - VAR_3);
 VAR_2[VAR_3]++;
 FUNC_3(&VAR_1);
}
