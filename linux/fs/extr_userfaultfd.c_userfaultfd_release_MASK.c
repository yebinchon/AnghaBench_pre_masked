
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct userfaultfd_ctx* ctx; } ;
struct vm_area_struct {unsigned long vm_flags; TYPE_1__ vm_userfaultfd_ctx; int vm_pgoff; int vm_file; int anon_vma; int vm_end; int vm_start; struct vm_area_struct* vm_next; } ;
struct userfaultfd_wake_range {int len; } ;
struct TYPE_5__ {int lock; } ;
struct userfaultfd_ctx {int fd_wqh; int event_wqh; TYPE_2__ fault_pending_wqh; int fault_wqh; int released; struct mm_struct* mm; } ;
struct mm_struct {int mmap_sem; struct vm_area_struct* mmap; } ;
struct inode {int dummy; } ;
struct file {struct userfaultfd_ctx* private_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ,int,struct userfaultfd_wake_range*) ;
 int FUNC_3 (TYPE_2__*,int ,struct userfaultfd_wake_range*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mm_struct*) ;
 int FUNC_7 (struct mm_struct*) ;
 int FUNC_8 (struct mm_struct*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct userfaultfd_ctx*) ;
 struct vm_area_struct* FUNC_13 (struct mm_struct*,struct vm_area_struct*,int ,int ,unsigned long,int ,int ,int ,int ,TYPE_1__) ;
 int FUNC_14 (struct vm_area_struct*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_5, struct file *VAR_6)
{
 struct userfaultfd_ctx *VAR_7 = VAR_6->private_data;
 struct mm_struct *VAR_8 = VAR_7->mm;
 struct vm_area_struct *VAR_9, *VAR_10;

 struct userfaultfd_wake_range VAR_11 = { .len = 0, };
 unsigned long VAR_12;
 bool VAR_13;

 FUNC_1(VAR_7->released, 1);

 if (!FUNC_6(VAR_8))
  goto wakeup;
 FUNC_5(&VAR_8->mmap_sem);
 VAR_13 = FUNC_7(VAR_8);
 VAR_10 = ((void*)0);
 for (VAR_9 = VAR_8->mmap; VAR_9; VAR_9 = VAR_9->vm_next) {
  FUNC_4();
  FUNC_0(!!VAR_9->vm_userfaultfd_ctx.ctx ^
         !!(VAR_9->vm_flags & (VAR_3 | VAR_4)));
  if (VAR_9->vm_userfaultfd_ctx.ctx != VAR_7) {
   VAR_10 = VAR_9;
   continue;
  }
  VAR_12 = VAR_9->vm_flags & ~(VAR_3 | VAR_4);
  if (VAR_13) {
   VAR_10 = FUNC_13(VAR_8, VAR_10, VAR_9->vm_start, VAR_9->vm_end,
      VAR_12, VAR_9->anon_vma,
      VAR_9->vm_file, VAR_9->vm_pgoff,
      FUNC_14(VAR_9),
      VAR_1);
   if (VAR_10)
    VAR_9 = VAR_10;
   else
    VAR_10 = VAR_9;
  }
  VAR_9->vm_flags = VAR_12;
  VAR_9->vm_userfaultfd_ctx = VAR_1;
 }
 FUNC_11(&VAR_8->mmap_sem);
 FUNC_8(VAR_8);
wakeup:





 FUNC_9(&VAR_7->fault_pending_wqh.lock);
 FUNC_3(&VAR_7->fault_pending_wqh, VAR_2, &VAR_11);
 FUNC_2(&VAR_7->fault_wqh, VAR_2, 1, &VAR_11);
 FUNC_10(&VAR_7->fault_pending_wqh.lock);


 FUNC_15(&VAR_7->event_wqh);

 FUNC_16(&VAR_7->fd_wqh, VAR_0);
 FUNC_12(VAR_7);
 return 0;
}
