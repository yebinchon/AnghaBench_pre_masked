
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int refcount_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int *) ;

void FUNC_5(void)
{
 refcount_t VAR_1 = FUNC_0(VAR_0);

 FUNC_2("attempting bad refcount_add_not_zero() overflow\n");
 if (!FUNC_4(6, &VAR_1))
  FUNC_3("Weird: refcount_add_not_zero() reported zero\n");

 FUNC_1(&VAR_1);
}
