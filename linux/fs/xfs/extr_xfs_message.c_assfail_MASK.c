
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bug_on_assert; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,char*,char*,int) ;
 TYPE_1__ VAR_0 ;

void
FUNC_3(char *VAR_1, char *VAR_2, int VAR_3)
{
 FUNC_2(((void*)0), "Assertion failed: %s, file: %s, line: %d",
  VAR_1, VAR_2, VAR_3);
 if (VAR_0.bug_on_assert)
  FUNC_0();
 else
  FUNC_1(1);
}
