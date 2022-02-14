
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {struct userfaultfd_ctx* ctx; } ;
struct vm_area_struct {int vm_flags; TYPE_9__ vm_userfaultfd_ctx; struct vm_area_struct* vm_next; } ;
struct TYPE_10__ {scalar_t__ reserved1; } ;
struct TYPE_11__ {TYPE_1__ reserved; } ;
struct TYPE_12__ {scalar_t__ event; TYPE_2__ arg; } ;
struct userfaultfd_wait_queue {TYPE_3__ msg; int wq; struct userfaultfd_ctx* ctx; } ;
struct TYPE_14__ {int lock; } ;
struct userfaultfd_ctx {int mmap_changing; struct mm_struct* mm; TYPE_7__ event_wqh; int fd_wqh; int released; } ;
struct mm_struct {int mmap_sem; struct vm_area_struct* mmap; } ;
struct TYPE_13__ {int flags; } ;


 int VAR_0 ;
 TYPE_9__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_7__*,int *) ;
 int FUNC_5 (TYPE_7__*,int *) ;
 int FUNC_6 (int ) ;
 TYPE_4__* VAR_8 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int *,TYPE_4__*) ;
 int FUNC_10 (struct mm_struct*) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct userfaultfd_ctx*) ;
 int FUNC_17 (int *,int ) ;

__attribute__((used)) static void FUNC_18(struct userfaultfd_ctx *VAR_9,
           struct userfaultfd_wait_queue *VAR_10)
{
 struct userfaultfd_ctx *VAR_11;

 if (FUNC_2(VAR_8->flags & VAR_2))
  goto out;

 VAR_10->ctx = VAR_9;
 FUNC_9(&VAR_10->wq, VAR_8);
 VAR_11 = ((void*)0);

 FUNC_13(&VAR_9->event_wqh.lock);




 FUNC_4(&VAR_9->event_wqh, &VAR_10->wq);
 for (;;) {
  FUNC_12(VAR_3);
  if (VAR_10->msg.event == 0)
   break;
  if (FUNC_0(VAR_9->released) ||
      FUNC_8(VAR_8)) {






   FUNC_5(&VAR_9->event_wqh, &VAR_10->wq);
   if (VAR_10->msg.event == VAR_5) {
    struct userfaultfd_ctx *VAR_12;

    VAR_12 = (struct userfaultfd_ctx *)
     (unsigned long)
     VAR_10->msg.arg.reserved.reserved1;
    VAR_11 = VAR_12;
   }
   break;
  }

  FUNC_14(&VAR_9->event_wqh.lock);

  FUNC_17(&VAR_9->fd_wqh, VAR_0);
  FUNC_11();

  FUNC_13(&VAR_9->event_wqh.lock);
 }
 FUNC_6(VAR_4);
 FUNC_14(&VAR_9->event_wqh.lock);

 if (VAR_11) {
  struct vm_area_struct *VAR_13;
  struct mm_struct *VAR_14 = VAR_11->mm;


  FUNC_7(&VAR_14->mmap_sem);

  FUNC_1(!FUNC_10(VAR_14));
  for (VAR_13 = VAR_14->mmap; VAR_13; VAR_13 = VAR_13->vm_next)
   if (VAR_13->vm_userfaultfd_ctx.ctx == VAR_11) {
    VAR_13->vm_userfaultfd_ctx = VAR_1;
    VAR_13->vm_flags &= ~(VAR_7 | VAR_6);
   }
  FUNC_15(&VAR_14->mmap_sem);

  FUNC_16(VAR_11);
 }





out:
 FUNC_3(VAR_9->mmap_changing, 0);
 FUNC_16(VAR_9);
}
