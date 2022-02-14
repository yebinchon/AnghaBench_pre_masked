
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dlm_lockstatus {int flags; } ;
struct TYPE_4__ {int name; int len; } ;
struct dlm_lock_resource {TYPE_2__ lockname; } ;
struct TYPE_3__ {scalar_t__ node; int cookie; } ;
struct dlm_lock {TYPE_1__ ml; struct dlm_lockstatus* lksb; } ;
struct dlm_ctxt {scalar_t__ node_num; int name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_lock*,int) ;
 int FUNC_5 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_lock*) ;
 int FUNC_6 (int ,char*,int ,int ,int ,int ,int ) ;

int FUNC_7(struct dlm_ctxt *VAR_0, struct dlm_lock_resource *VAR_1,
        struct dlm_lock *VAR_2)
{
 int VAR_3;
 struct dlm_lockstatus *VAR_4;
 int VAR_5;

 FUNC_6(0, "%s: res %.*s, lock %u:%llu, Remote AST\n", VAR_0->name,
      VAR_1->lockname.len, VAR_1->lockname.name,
      FUNC_2(FUNC_1(VAR_2->ml.cookie)),
      FUNC_3(FUNC_1(VAR_2->ml.cookie)));

 VAR_4 = VAR_2->lksb;
 FUNC_0(VAR_2->ml.node == VAR_0->node_num);

 VAR_5 = VAR_4->flags;
 FUNC_5(VAR_0, VAR_1, VAR_2);



 VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_5);
 return VAR_3;
}
