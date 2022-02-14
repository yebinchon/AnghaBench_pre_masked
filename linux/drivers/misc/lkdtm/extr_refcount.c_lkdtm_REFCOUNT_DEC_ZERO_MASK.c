
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int refcount_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

void FUNC_4(void)
{
 refcount_t VAR_0 = FUNC_0(2);

 FUNC_2("attempting good refcount_dec()\n");
 FUNC_3(&VAR_0);

 FUNC_2("attempting bad refcount_dec() to zero\n");
 FUNC_3(&VAR_0);

 FUNC_1(&VAR_0);
}
