
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int safe; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_1(void)
{
 if (VAR_3)
 {
  int VAR_4;

  FUNC_0(VAR_1, "Using safe settings.\n");
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  {
   VAR_2[VAR_4].value = VAR_2[VAR_4].safe;
  }
 }
}
