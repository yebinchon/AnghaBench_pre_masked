
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int refcount_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,int *) ;

void FUNC_5(void)
{
 refcount_t VAR_0 = FUNC_0(3);

 FUNC_2("attempting bad refcount_sub_and_test() below zero\n");
 if (FUNC_4(5, &VAR_0))
  FUNC_3("Weird: refcount_sub_and_test() reported zero\n");

 FUNC_1(&VAR_0, 3);
}
