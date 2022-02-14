
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enter_kgdb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 char FUNC_3 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_2, VAR_3, VAR_4 = 1;
 char VAR_5, VAR_6 = '?';

 FUNC_2("Currently on cpu %d\n", FUNC_4());
 FUNC_2("Available cpus: ");
 for (VAR_3 = -1, VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!FUNC_1(VAR_2)) {
   VAR_5 = 'F';
  } else if (!VAR_1[VAR_2].enter_kgdb) {
   VAR_5 = 'D';
  } else {
   VAR_5 = ' ';
   if (FUNC_3(FUNC_0(VAR_2)) == 'I')
    VAR_5 = 'I';
  }
  if (VAR_5 != VAR_6) {
   if (VAR_6 != '?') {
    if (!VAR_4)
     FUNC_2(", ");
    VAR_4 = 0;
    FUNC_2("%d", VAR_3);
    if (VAR_3 < VAR_2-1)
     FUNC_2("-%d", VAR_2-1);
    if (VAR_6 != ' ')
     FUNC_2("(%c)", VAR_6);
   }
   VAR_6 = VAR_5;
   VAR_3 = VAR_2;
  }
 }

 if (VAR_6 != 'F') {
  if (!VAR_4)
   FUNC_2(", ");
  FUNC_2("%d", VAR_3);
  if (VAR_3 < VAR_2-1)
   FUNC_2("-%d", VAR_2-1);
  if (VAR_6 != ' ')
   FUNC_2("(%c)", VAR_6);
 }
 FUNC_2("\n");
}
