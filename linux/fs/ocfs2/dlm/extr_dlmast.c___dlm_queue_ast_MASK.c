
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int len; } ;
struct dlm_lock_resource {TYPE_1__ lockname; } ;
struct TYPE_4__ {int highest_blocked; int cookie; int type; } ;
struct dlm_lock {int ast_pending; int spinlock; int ast_list; TYPE_2__ ml; int bast_list; scalar_t__ bast_pending; struct dlm_lock_resource* lockres; } ;
struct dlm_ctxt {int pending_asts; int name; int ast_lock; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct dlm_lock*) ;
 int FUNC_7 (struct dlm_lock*) ;
 int FUNC_8 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 scalar_t__ FUNC_9 (struct dlm_ctxt*,struct dlm_lock*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,char*,int ,int ,int ,int ,int ,...) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

void FUNC_16(struct dlm_ctxt *VAR_2, struct dlm_lock *VAR_3)
{
 struct dlm_lock_resource *VAR_4;

 FUNC_1(!VAR_2);
 FUNC_1(!VAR_3);

 VAR_4 = VAR_3->lockres;

 FUNC_2(&VAR_2->ast_lock);

 if (!FUNC_12(&VAR_3->ast_list)) {
  FUNC_13(VAR_1, "%s: res %.*s, lock %u:%llu, "
       "AST list not empty, pending %d, newlevel %d\n",
       VAR_2->name, VAR_4->lockname.len, VAR_4->lockname.name,
       FUNC_4(FUNC_3(VAR_3->ml.cookie)),
       FUNC_5(FUNC_3(VAR_3->ml.cookie)),
       VAR_3->ast_pending, VAR_3->ml.type);
  FUNC_0();
 }
 if (VAR_3->ast_pending)
  FUNC_13(0, "%s: res %.*s, lock %u:%llu, AST getting flushed\n",
       VAR_2->name, VAR_4->lockname.len, VAR_4->lockname.name,
       FUNC_4(FUNC_3(VAR_3->ml.cookie)),
       FUNC_5(FUNC_3(VAR_3->ml.cookie)));


 FUNC_6(VAR_3);
 FUNC_14(&VAR_3->spinlock);


 if (FUNC_9(VAR_2, VAR_3)) {
  FUNC_13(0, "%s: res %.*s, lock %u:%llu, Cancelling BAST\n",
       VAR_2->name, VAR_4->lockname.len, VAR_4->lockname.name,
       FUNC_4(FUNC_3(VAR_3->ml.cookie)),
       FUNC_5(FUNC_3(VAR_3->ml.cookie)));
  VAR_3->bast_pending = 0;
  FUNC_11(&VAR_3->bast_list);
  VAR_3->ml.highest_blocked = VAR_0;



  FUNC_7(VAR_3);





  FUNC_8(VAR_2, VAR_4);
 }
 FUNC_10(&VAR_3->ast_list, &VAR_2->pending_asts);
 VAR_3->ast_pending = 1;
 FUNC_15(&VAR_3->spinlock);
}
