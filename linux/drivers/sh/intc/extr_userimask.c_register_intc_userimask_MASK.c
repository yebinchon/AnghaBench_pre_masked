
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(unsigned long VAR_4)
{
 if (FUNC_3(VAR_3))
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_4, VAR_2);
 if (FUNC_3(!VAR_3))
  return -VAR_1;

 FUNC_2("userimask support registered for levels 0 -> %d\n",
  FUNC_0() - 1);

 return 0;
}
