
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct userfaultfd_ctx* ctx; } ;
struct vm_area_struct {TYPE_1__ vm_userfaultfd_ctx; struct mm_struct* vm_mm; } ;
struct TYPE_6__ {unsigned long start; unsigned long end; } ;
struct TYPE_7__ {TYPE_2__ remove; } ;
struct TYPE_8__ {TYPE_3__ arg; int event; } ;
struct userfaultfd_wait_queue {TYPE_4__ msg; } ;
struct userfaultfd_ctx {int features; int mmap_changing; } ;
struct mm_struct {int mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct userfaultfd_ctx*) ;
 int FUNC_4 (struct userfaultfd_ctx*,struct userfaultfd_wait_queue*) ;

bool FUNC_5(struct vm_area_struct *VAR_2,
   unsigned long VAR_3, unsigned long VAR_4)
{
 struct mm_struct *VAR_5 = VAR_2->vm_mm;
 struct userfaultfd_ctx *VAR_6;
 struct userfaultfd_wait_queue VAR_7;

 VAR_6 = VAR_2->vm_userfaultfd_ctx.ctx;
 if (!VAR_6 || !(VAR_6->features & VAR_1))
  return 1;

 FUNC_3(VAR_6);
 FUNC_0(VAR_6->mmap_changing, 1);
 FUNC_2(&VAR_5->mmap_sem);

 FUNC_1(&VAR_7.msg);

 VAR_7.msg.event = VAR_0;
 VAR_7.msg.arg.remove.start = VAR_3;
 VAR_7.msg.arg.remove.end = VAR_4;

 FUNC_4(VAR_6, &VAR_7);

 return 0;
}
