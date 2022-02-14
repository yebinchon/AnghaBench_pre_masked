
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long reserved1; } ;
struct TYPE_5__ {TYPE_1__ reserved; } ;
struct TYPE_6__ {TYPE_2__ arg; int event; } ;
struct userfaultfd_wait_queue {TYPE_3__ msg; } ;
struct userfaultfd_fork_ctx {scalar_t__ new; struct userfaultfd_ctx* orig; } ;
struct userfaultfd_ctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct userfaultfd_ctx*,struct userfaultfd_wait_queue*) ;

__attribute__((used)) static void FUNC_2(struct userfaultfd_fork_ctx *VAR_1)
{
 struct userfaultfd_ctx *VAR_2 = VAR_1->orig;
 struct userfaultfd_wait_queue VAR_3;

 FUNC_0(&VAR_3.msg);

 VAR_3.msg.event = VAR_0;
 VAR_3.msg.arg.reserved.reserved1 = (unsigned long)VAR_1->new;

 FUNC_1(VAR_2, &VAR_3);
}
