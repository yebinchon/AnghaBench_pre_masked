
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int len; } ;
struct dlm_lock_resource {TYPE_1__ lockname; } ;
struct TYPE_4__ {int cookie; } ;
struct dlm_lock {int bast_pending; int spinlock; int bast_list; TYPE_2__ ml; struct dlm_lock_resource* lockres; } ;
struct dlm_ctxt {int pending_basts; int name; int ast_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dlm_lock*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct dlm_ctxt *VAR_0, struct dlm_lock *VAR_1)
{
 struct dlm_lock_resource *VAR_2;

 FUNC_0(!VAR_0);
 FUNC_0(!VAR_1);

 FUNC_1(&VAR_0->ast_lock);

 VAR_2 = VAR_1->lockres;

 FUNC_0(!FUNC_7(&VAR_1->bast_list));
 if (VAR_1->bast_pending)
  FUNC_8(0, "%s: res %.*s, lock %u:%llu, BAST getting flushed\n",
       VAR_0->name, VAR_2->lockname.len, VAR_2->lockname.name,
       FUNC_3(FUNC_2(VAR_1->ml.cookie)),
       FUNC_4(FUNC_2(VAR_1->ml.cookie)));


 FUNC_5(VAR_1);
 FUNC_9(&VAR_1->spinlock);
 FUNC_6(&VAR_1->bast_list, &VAR_0->pending_basts);
 VAR_1->bast_pending = 1;
 FUNC_10(&VAR_1->spinlock);
}
