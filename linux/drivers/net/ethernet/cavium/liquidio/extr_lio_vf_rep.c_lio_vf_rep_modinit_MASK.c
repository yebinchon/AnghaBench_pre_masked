
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;

int
FUNC_2(void)
{
 if (FUNC_1(&VAR_1)) {
  FUNC_0("netdev notifier registration failed\n");
  return -VAR_0;
 }

 return 0;
}
