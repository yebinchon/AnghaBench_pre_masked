
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2)
{

 if (VAR_2 == 0)
  return 0;

 if (++VAR_0[VAR_2] > VAR_1[VAR_2])
  return -1;
 return 0;
}
