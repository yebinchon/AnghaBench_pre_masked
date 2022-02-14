
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_userfaultfd_ctx {struct userfaultfd_ctx* ctx; } ;
struct TYPE_2__ {struct userfaultfd_ctx* ctx; } ;
struct vm_area_struct {int vm_flags; TYPE_1__ vm_userfaultfd_ctx; } ;
struct userfaultfd_ctx {int features; int mmap_changing; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct userfaultfd_ctx*) ;

void FUNC_2(struct vm_area_struct *VAR_4,
        struct vm_userfaultfd_ctx *VAR_5)
{
 struct userfaultfd_ctx *VAR_6;

 VAR_6 = VAR_4->vm_userfaultfd_ctx.ctx;

 if (!VAR_6)
  return;

 if (VAR_6->features & VAR_1) {
  VAR_5->ctx = VAR_6;
  FUNC_1(VAR_6);
  FUNC_0(VAR_6->mmap_changing, 1);
 } else {

  VAR_4->vm_userfaultfd_ctx = VAR_0;
  VAR_4->vm_flags &= ~(VAR_3 | VAR_2);
 }
}
