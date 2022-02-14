
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct userfaultfd_ctx* ctx; } ;
struct vm_area_struct {unsigned long vm_start; TYPE_1__ vm_userfaultfd_ctx; struct vm_area_struct* vm_next; } ;
struct userfaultfd_unmap_ctx {unsigned long start; unsigned long end; int list; struct userfaultfd_ctx* ctx; } ;
struct userfaultfd_ctx {int features; int mmap_changing; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct userfaultfd_ctx*,struct list_head*,unsigned long,unsigned long) ;
 struct userfaultfd_unmap_ctx* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct list_head*) ;
 int FUNC_4 (struct userfaultfd_ctx*) ;

int FUNC_5(struct vm_area_struct *VAR_3,
      unsigned long VAR_4, unsigned long VAR_5,
      struct list_head *VAR_6)
{
 for ( ; VAR_3 && VAR_3->vm_start < VAR_5; VAR_3 = VAR_3->vm_next) {
  struct userfaultfd_unmap_ctx *VAR_7;
  struct userfaultfd_ctx *VAR_8 = VAR_3->vm_userfaultfd_ctx.ctx;

  if (!VAR_8 || !(VAR_8->features & VAR_2) ||
      FUNC_1(VAR_8, VAR_6, VAR_4, VAR_5))
   continue;

  VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
  if (!VAR_7)
   return -VAR_0;

  FUNC_4(VAR_8);
  FUNC_0(VAR_8->mmap_changing, 1);
  VAR_7->ctx = VAR_8;
  VAR_7->start = VAR_4;
  VAR_7->end = VAR_5;
  FUNC_3(&VAR_7->list, VAR_6);
 }

 return 0;
}
