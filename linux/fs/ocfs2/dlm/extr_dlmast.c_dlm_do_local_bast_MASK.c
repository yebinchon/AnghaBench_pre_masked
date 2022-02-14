
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int len; } ;
struct dlm_lock_resource {TYPE_1__ lockname; } ;
struct TYPE_4__ {scalar_t__ node; int cookie; } ;
struct dlm_lock {int astdata; TYPE_2__ ml; int (* bast ) (int ,int) ;} ;
struct dlm_ctxt {scalar_t__ node_num; int name; } ;
typedef int (* dlm_bastlockfunc_t ) (int ,int) ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ,int ,int) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(struct dlm_ctxt *VAR_0, struct dlm_lock_resource *VAR_1,
         struct dlm_lock *VAR_2, int VAR_3)
{
 dlm_bastlockfunc_t *VAR_4 = &VAR_2->bast;

 FUNC_0(VAR_2->ml.node != VAR_0->node_num);

 FUNC_4(0, "%s: res %.*s, lock %u:%llu, Local BAST, blocked %d\n",
      VAR_0->name, VAR_1->lockname.len, VAR_1->lockname.name,
      FUNC_2(FUNC_1(VAR_2->ml.cookie)),
      FUNC_3(FUNC_1(VAR_2->ml.cookie)),
      VAR_3);

 (*VAR_4)(VAR_2->astdata, VAR_3);
}
