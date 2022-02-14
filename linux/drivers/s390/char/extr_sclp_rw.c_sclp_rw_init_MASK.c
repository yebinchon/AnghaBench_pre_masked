
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int VAR_0 ;

int
FUNC_1(void)
{
 static int VAR_1 = 0;
 int VAR_2;

 if (VAR_1)
  return 0;

 VAR_2 = FUNC_0(&VAR_0);
 if (VAR_2 == 0)
  VAR_1 = 1;
 return VAR_2;
}
