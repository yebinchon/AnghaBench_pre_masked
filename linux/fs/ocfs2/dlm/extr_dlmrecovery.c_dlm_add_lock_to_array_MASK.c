
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dlm_migratable_lockres {int num_locks; struct dlm_migratable_lock* ml; } ;
struct dlm_migratable_lock {int list; int node; int flags; int highest_blocked; int convert_type; int type; int cookie; } ;
struct TYPE_4__ {int node; int highest_blocked; int convert_type; int type; int cookie; } ;
struct dlm_lock {TYPE_2__ ml; TYPE_1__* lksb; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_lock*,struct dlm_migratable_lockres*,int) ;

__attribute__((used)) static int FUNC_1(struct dlm_lock *VAR_1,
     struct dlm_migratable_lockres *VAR_2, int VAR_3)
{
 struct dlm_migratable_lock *VAR_4;
 int VAR_5 = VAR_2->num_locks;

 VAR_4 = &(VAR_2->ml[VAR_5]);
 VAR_4->cookie = VAR_1->ml.cookie;
 VAR_4->type = VAR_1->ml.type;
 VAR_4->convert_type = VAR_1->ml.convert_type;
 VAR_4->highest_blocked = VAR_1->ml.highest_blocked;
 VAR_4->list = VAR_3;
 if (VAR_1->lksb) {
  VAR_4->flags = VAR_1->lksb->flags;
  FUNC_0(VAR_1, VAR_2, VAR_3);
 }
 VAR_4->node = VAR_1->ml.node;
 VAR_2->num_locks++;

 if (VAR_2->num_locks == VAR_0)
  return 1;
 return 0;
}
