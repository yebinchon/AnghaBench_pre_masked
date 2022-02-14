
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int refcount_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(void)
{
 unsigned int VAR_1;
 refcount_t VAR_2 = FUNC_0(1);

 for (VAR_1 = 0; VAR_1 < VAR_0 - 1; VAR_1++)
  FUNC_4(&VAR_2);

 for (VAR_1 = VAR_0; VAR_1 > 0; VAR_1--)
  if (FUNC_3(&VAR_2))
   break;

 if (VAR_1 != 1)
  FUNC_1("refcount: out of sync up/down cycle: %u\n", VAR_1 - 1);
 else
  FUNC_2("refcount timing: done\n");
}
