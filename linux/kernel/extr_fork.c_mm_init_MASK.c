
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct user_namespace {int dummy; } ;
struct task_struct {int dummy; } ;
struct mm_struct {int flags; int def_flags; int user_ns; int * pmd_huge_pte; int exe_file; int arg_lock; int page_table_lock; int rss_stat; int pinned_vm; scalar_t__ locked_vm; scalar_t__ map_count; int * core_state; int mmlist; int mmap_sem; int mm_count; int mm_users; scalar_t__ vmacache_seqnum; int mm_rb; int * mmap; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int flags; int def_flags; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (struct user_namespace*) ;
 scalar_t__ FUNC_6 (struct task_struct*,struct mm_struct*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mm_struct*) ;
 int FUNC_9 (int *,int ,int) ;
 scalar_t__ FUNC_10 (struct mm_struct*) ;
 int FUNC_11 (struct mm_struct*) ;
 int FUNC_12 (struct mm_struct*) ;
 int FUNC_13 (struct mm_struct*) ;
 int FUNC_14 (struct mm_struct*,struct task_struct*) ;
 int FUNC_15 (struct mm_struct*) ;
 int FUNC_16 (struct mm_struct*) ;
 int FUNC_17 (struct mm_struct*) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static struct mm_struct *FUNC_19(struct mm_struct *VAR_5, struct task_struct *VAR_6,
 struct user_namespace *VAR_7)
{
 VAR_5->mmap = ((void*)0);
 VAR_5->mm_rb = VAR_1;
 VAR_5->vmacache_seqnum = 0;
 FUNC_3(&VAR_5->mm_users, 1);
 FUNC_3(&VAR_5->mm_count, 1);
 FUNC_7(&VAR_5->mmap_sem);
 FUNC_0(&VAR_5->mmlist);
 VAR_5->core_state = ((void*)0);
 FUNC_16(VAR_5);
 VAR_5->map_count = 0;
 VAR_5->locked_vm = 0;
 FUNC_2(&VAR_5->pinned_vm, 0);
 FUNC_9(&VAR_5->rss_stat, 0, sizeof(VAR_5->rss_stat));
 FUNC_18(&VAR_5->page_table_lock);
 FUNC_18(&VAR_5->arg_lock);
 FUNC_13(VAR_5);
 FUNC_12(VAR_5);
 FUNC_14(VAR_5, VAR_6);
 FUNC_1(VAR_5->exe_file, ((void*)0));
 FUNC_17(VAR_5);
 FUNC_8(VAR_5);



 FUNC_15(VAR_5);

 if (VAR_3->mm) {
  VAR_5->flags = VAR_3->mm->flags & VAR_0;
  VAR_5->def_flags = VAR_3->mm->def_flags & VAR_2;
 } else {
  VAR_5->flags = VAR_4;
  VAR_5->def_flags = 0;
 }

 if (FUNC_10(VAR_5))
  goto fail_nopgd;

 if (FUNC_6(VAR_6, VAR_5))
  goto fail_nocontext;

 VAR_5->user_ns = FUNC_5(VAR_7);
 return VAR_5;

fail_nocontext:
 FUNC_11(VAR_5);
fail_nopgd:
 FUNC_4(VAR_5);
 return ((void*)0);
}
