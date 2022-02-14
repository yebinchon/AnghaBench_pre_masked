
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;

int
FUNC_0(int VAR_1)
{

 if (VAR_1 >= 1000)
  return 60;



 if (VAR_1 >= 100)
  return 20 + (int)VAR_0[VAR_1 / 10];


 if (VAR_1 < 1)
  return 0;


 return (int)VAR_0[VAR_1];
}
