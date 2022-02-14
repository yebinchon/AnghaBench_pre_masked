
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_lockstatus {int flags; int lvb; } ;
struct dlm_lock_resource {scalar_t__ owner; int spinlock; int lvb; } ;
struct TYPE_2__ {scalar_t__ node; } ;
struct dlm_lock {TYPE_1__ ml; struct dlm_lockstatus* lksb; } ;
struct dlm_ctxt {scalar_t__ node_num; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dlm_ctxt *VAR_3, struct dlm_lock_resource *VAR_4,
      struct dlm_lock *VAR_5)
{
 struct dlm_lockstatus *VAR_6 = VAR_5->lksb;
 FUNC_0(!VAR_6);


 FUNC_3(&VAR_4->spinlock);
 if (VAR_4->owner == VAR_3->node_num) {

  if (VAR_6->flags & VAR_0) {
   FUNC_2(0, "getting lvb from lockres for %s node\n",
      VAR_5->ml.node == VAR_3->node_num ? "master" :
      "remote");
   FUNC_1(VAR_6->lvb, VAR_4->lvb, VAR_2);
  }







 }
 FUNC_4(&VAR_4->spinlock);


 VAR_6->flags &= ~(VAR_1|VAR_0);
}
