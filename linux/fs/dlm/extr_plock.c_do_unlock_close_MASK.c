
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int flags; void* owner; int end; scalar_t__ start; int number; int fsid; scalar_t__ pid; int optype; } ;
struct plock_op {TYPE_2__ info; } ;
struct file_lock {scalar_t__ fl_owner; scalar_t__ fl_pid; TYPE_1__* fl_lmops; } ;
struct file {int dummy; } ;
struct dlm_ls {int ls_global_id; } ;
typedef void* __u64 ;
struct TYPE_3__ {scalar_t__ lm_grant; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct plock_op* FUNC_0 (int,int ) ;
 int FUNC_1 (struct plock_op*) ;

__attribute__((used)) static void FUNC_2(struct dlm_ls *VAR_4, u64 VAR_5,
       struct file *VAR_6, struct file_lock *VAR_7)
{
 struct plock_op *VAR_8;

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return;

 VAR_8->info.optype = VAR_1;
 VAR_8->info.pid = VAR_7->fl_pid;
 VAR_8->info.fsid = VAR_4->ls_global_id;
 VAR_8->info.number = VAR_5;
 VAR_8->info.start = 0;
 VAR_8->info.end = VAR_3;
 if (VAR_7->fl_lmops && VAR_7->fl_lmops->lm_grant)
  VAR_8->info.owner = (__u64) VAR_7->fl_pid;
 else
  VAR_8->info.owner = (__u64)(long) VAR_7->fl_owner;

 VAR_8->info.flags |= VAR_0;
 FUNC_1(VAR_8);
}
