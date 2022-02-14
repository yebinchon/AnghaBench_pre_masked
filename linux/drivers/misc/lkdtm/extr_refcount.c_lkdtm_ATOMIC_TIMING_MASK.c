
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atomic_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (char*) ;

void FUNC_5(void)
{
 unsigned int VAR_1;
 atomic_t VAR_2 = FUNC_0(1);

 for (VAR_1 = 0; VAR_1 < VAR_0 - 1; VAR_1++)
  FUNC_2(&VAR_2);

 for (VAR_1 = VAR_0; VAR_1 > 0; VAR_1--)
  if (FUNC_1(&VAR_2))
   break;

 if (VAR_1 != 1)
  FUNC_3("atomic timing: out of sync up/down cycle: %u\n", VAR_1 - 1);
 else
  FUNC_4("atomic timing: done\n");
}
