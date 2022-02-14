
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dlm_migratable_lockres {int lvb; } ;
struct TYPE_7__ {scalar_t__ type; int node; int cookie; } ;
struct dlm_lock {TYPE_4__* lockres; TYPE_3__ ml; TYPE_1__* lksb; } ;
struct TYPE_6__ {int name; int len; } ;
struct TYPE_8__ {TYPE_2__ lockname; } ;
struct TYPE_5__ {int lvb; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct dlm_lock *VAR_5,
       struct dlm_migratable_lockres *VAR_6,
       int VAR_7)
{
 if (!VAR_5->lksb)
        return;


 if (VAR_7 == VAR_0)
  return;


 if (VAR_5->ml.type != VAR_2 && VAR_5->ml.type != VAR_3)
  return;

 if (FUNC_4(VAR_6->lvb)) {
  FUNC_7(VAR_6->lvb, VAR_5->lksb->lvb, VAR_1);
  return;
 }


 if (!FUNC_6(VAR_6->lvb, VAR_5->lksb->lvb, VAR_1))
  return;

 FUNC_8(VAR_4, "Mismatched lvb in lock cookie=%u:%llu, name=%.*s, "
      "node=%u\n",
      FUNC_2(FUNC_1(VAR_5->ml.cookie)),
      FUNC_3(FUNC_1(VAR_5->ml.cookie)),
      VAR_5->lockres->lockname.len, VAR_5->lockres->lockname.name,
      VAR_5->ml.node);
 FUNC_5(VAR_5->lockres);
 FUNC_0();
}
