
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int action; int name; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(void)
{
 unsigned int VAR_4;

 if (!VAR_2)
  return;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {
  if (FUNC_2(VAR_2,
   VAR_3[VAR_4].name) == 0) {
   VAR_1 = VAR_3[VAR_4].action;
   return;
  }
 }

 FUNC_1("%s: invalid lockup action setting \"%s\" - supported settings: none, reboot, panic\n",
  VAR_0, VAR_2);
}
