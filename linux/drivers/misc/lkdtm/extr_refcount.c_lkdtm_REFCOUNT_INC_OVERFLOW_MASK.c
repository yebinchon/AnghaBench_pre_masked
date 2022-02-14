
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int refcount_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(void)
{
 refcount_t VAR_1 = FUNC_0(VAR_0 - 1);

 FUNC_2("attempting good refcount_inc() without overflow\n");
 FUNC_3(&VAR_1);
 FUNC_4(&VAR_1);

 FUNC_2("attempting bad refcount_inc() overflow\n");
 FUNC_4(&VAR_1);
 FUNC_4(&VAR_1);

 FUNC_1(&VAR_1);
}
