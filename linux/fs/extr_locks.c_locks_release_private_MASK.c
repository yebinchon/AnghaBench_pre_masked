
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file_lock {TYPE_2__* fl_lmops; int * fl_owner; TYPE_1__* fl_ops; int fl_link; int fl_blocked_member; int fl_blocked_requests; int fl_list; int fl_wait; } ;
struct TYPE_4__ {int (* lm_put_owner ) (int *) ;} ;
struct TYPE_3__ {int (* fl_release_private ) (struct file_lock*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file_lock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct file_lock *VAR_0)
{
 FUNC_0(FUNC_5(&VAR_0->fl_wait));
 FUNC_0(!FUNC_2(&VAR_0->fl_list));
 FUNC_0(!FUNC_2(&VAR_0->fl_blocked_requests));
 FUNC_0(!FUNC_2(&VAR_0->fl_blocked_member));
 FUNC_0(!FUNC_1(&VAR_0->fl_link));

 if (VAR_0->fl_ops) {
  if (VAR_0->fl_ops->fl_release_private)
   VAR_0->fl_ops->fl_release_private(VAR_0);
  VAR_0->fl_ops = ((void*)0);
 }

 if (VAR_0->fl_lmops) {
  if (VAR_0->fl_lmops->lm_put_owner) {
   VAR_0->fl_lmops->lm_put_owner(VAR_0->fl_owner);
   VAR_0->fl_owner = ((void*)0);
  }
  VAR_0->fl_lmops = ((void*)0);
 }
}
