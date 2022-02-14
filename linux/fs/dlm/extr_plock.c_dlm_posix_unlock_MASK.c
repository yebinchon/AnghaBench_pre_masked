
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int rv; int flags; void* owner; int end; int start; scalar_t__ number; int fsid; scalar_t__ pid; int optype; } ;
struct plock_op {scalar_t__ done; TYPE_2__ info; int list; } ;
struct file_lock {unsigned char fl_flags; scalar_t__ fl_owner; scalar_t__ fl_pid; TYPE_1__* fl_lmops; int fl_end; int fl_start; } ;
struct file {int dummy; } ;
struct dlm_ls {int ls_global_id; } ;
typedef int dlm_lockspace_t ;
typedef void* __u64 ;
struct TYPE_3__ {scalar_t__ lm_grant; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 struct dlm_ls* FUNC_0 (int *) ;
 int FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (struct plock_op*) ;
 struct plock_op* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct file*,struct file_lock*) ;
 int FUNC_7 (struct dlm_ls*,char*,unsigned long long,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (struct plock_op*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int) ;

int FUNC_12(dlm_lockspace_t *VAR_10, u64 VAR_11, struct file *VAR_12,
       struct file_lock *VAR_13)
{
 struct dlm_ls *VAR_14;
 struct plock_op *VAR_15;
 int VAR_16;
 unsigned char VAR_17 = VAR_13->fl_flags;

 VAR_14 = FUNC_0(VAR_10);
 if (!VAR_14)
  return -VAR_2;

 VAR_15 = FUNC_3(sizeof(*VAR_15), VAR_7);
 if (!VAR_15) {
  VAR_16 = -VAR_4;
  goto out;
 }


 VAR_13->fl_flags |= VAR_6;

 VAR_16 = FUNC_6(VAR_12, VAR_13);
 if (VAR_16 == -VAR_3) {
  VAR_16 = 0;
  goto out_free;
 }
 if (VAR_16 < 0) {
  FUNC_7(VAR_14, "dlm_posix_unlock: vfs unlock error %d %llx",
     VAR_16, (unsigned long long)VAR_11);
 }

 VAR_15->info.optype = VAR_1;
 VAR_15->info.pid = VAR_13->fl_pid;
 VAR_15->info.fsid = VAR_14->ls_global_id;
 VAR_15->info.number = VAR_11;
 VAR_15->info.start = VAR_13->fl_start;
 VAR_15->info.end = VAR_13->fl_end;
 if (VAR_13->fl_lmops && VAR_13->fl_lmops->lm_grant)
  VAR_15->info.owner = (__u64) VAR_13->fl_pid;
 else
  VAR_15->info.owner = (__u64)(long) VAR_13->fl_owner;

 if (VAR_13->fl_flags & VAR_5) {
  VAR_15->info.flags |= VAR_0;
  FUNC_8(VAR_15);
  VAR_16 = 0;
  goto out;
 }

 FUNC_8(VAR_15);
 FUNC_11(VAR_9, (VAR_15->done != 0));

 FUNC_9(&VAR_8);
 if (!FUNC_5(&VAR_15->list)) {
  FUNC_7(VAR_14, "dlm_posix_unlock: op on list %llx",
     (unsigned long long)VAR_11);
  FUNC_4(&VAR_15->list);
 }
 FUNC_10(&VAR_8);

 VAR_16 = VAR_15->info.rv;

 if (VAR_16 == -VAR_3)
  VAR_16 = 0;

out_free:
 FUNC_2(VAR_15);
out:
 FUNC_1(VAR_14);
 VAR_13->fl_flags = VAR_17;
 return VAR_16;
}
