
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_lock {int fl_owner; TYPE_1__* fl_lmops; int * fl_ops; int fl_end; int fl_start; int fl_type; int fl_flags; int * fl_file; int fl_pid; } ;
struct TYPE_2__ {int (* lm_get_owner ) (int ) ;} ;


 int FUNC_0 (int ) ;

void FUNC_1(struct file_lock *VAR_0, struct file_lock *VAR_1)
{
 VAR_0->fl_owner = VAR_1->fl_owner;
 VAR_0->fl_pid = VAR_1->fl_pid;
 VAR_0->fl_file = ((void*)0);
 VAR_0->fl_flags = VAR_1->fl_flags;
 VAR_0->fl_type = VAR_1->fl_type;
 VAR_0->fl_start = VAR_1->fl_start;
 VAR_0->fl_end = VAR_1->fl_end;
 VAR_0->fl_lmops = VAR_1->fl_lmops;
 VAR_0->fl_ops = ((void*)0);

 if (VAR_1->fl_lmops) {
  if (VAR_1->fl_lmops->lm_get_owner)
   VAR_1->fl_lmops->lm_get_owner(VAR_1->fl_owner);
 }
}
