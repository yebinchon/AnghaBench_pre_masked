
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int refcount_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

void FUNC_7(void)
{
 refcount_t VAR_0 = FUNC_0(0);

 FUNC_3("attempting safe refcount_inc_not_zero() from zero\n");
 if (!FUNC_5(&VAR_0)) {
  FUNC_3("Good: zero detected\n");
  if (FUNC_6(&VAR_0) == 0)
   FUNC_3("Correctly stayed at zero\n");
  else
   FUNC_2("Fail: refcount went past zero!\n");
 } else {
  FUNC_2("Fail: Zero not detected!?\n");
 }

 FUNC_3("attempting bad refcount_inc() from zero\n");
 FUNC_4(&VAR_0);

 FUNC_1(&VAR_0);
}
