
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum ctx_state { ____Placeholder_ctx_state } ctx_state ;
struct TYPE_5__ {int state; int active; } ;
struct TYPE_4__ {int mm; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 TYPE_3__ VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8(enum ctx_state VAR_3)
{

 FUNC_0(!VAR_2->mm);

 if (!FUNC_3())
  return;

 if ( FUNC_1(VAR_1.state) != VAR_3) {
  if (FUNC_1(VAR_1.active)) {







   if (VAR_3 == VAR_0) {
    FUNC_6(0);
    FUNC_7(VAR_2);
   }
   FUNC_5();
  }
  FUNC_2(VAR_1.state, VAR_3);
 }
 FUNC_4();
}
