
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_userfaultfd_ctx {struct userfaultfd_ctx* ctx; } ;
struct TYPE_4__ {unsigned long from; unsigned long to; unsigned long len; } ;
struct TYPE_5__ {TYPE_1__ remap; } ;
struct TYPE_6__ {TYPE_2__ arg; int event; } ;
struct userfaultfd_wait_queue {TYPE_3__ msg; } ;
struct userfaultfd_ctx {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct userfaultfd_ctx*) ;
 int FUNC_2 (struct userfaultfd_ctx*,struct userfaultfd_wait_queue*) ;

void FUNC_3(struct vm_userfaultfd_ctx *VAR_2,
     unsigned long VAR_3, unsigned long VAR_4,
     unsigned long VAR_5)
{
 struct userfaultfd_ctx *VAR_6 = VAR_2->ctx;
 struct userfaultfd_wait_queue VAR_7;

 if (!VAR_6)
  return;

 if (VAR_4 & ~VAR_0) {
  FUNC_1(VAR_6);
  return;
 }

 FUNC_0(&VAR_7.msg);

 VAR_7.msg.event = VAR_1;
 VAR_7.msg.arg.remap.from = VAR_3;
 VAR_7.msg.arg.remap.to = VAR_4;
 VAR_7.msg.arg.remap.len = VAR_5;

 FUNC_2(VAR_6, &VAR_7);
}
