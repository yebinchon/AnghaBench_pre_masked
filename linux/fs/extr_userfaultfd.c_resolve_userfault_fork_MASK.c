
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct userfaultfd_ctx {int flags; } ;
struct TYPE_5__ {int ufd; } ;
struct TYPE_4__ {scalar_t__ reserved1; } ;
struct TYPE_6__ {TYPE_2__ fork; TYPE_1__ reserved; } ;
struct uffd_msg {TYPE_3__ arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,struct userfaultfd_ctx*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct userfaultfd_ctx *VAR_3,
      struct userfaultfd_ctx *VAR_4,
      struct uffd_msg *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0("[userfaultfd]", &VAR_2, VAR_4,
         VAR_0 | (VAR_4->flags & VAR_1));
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5->arg.reserved.reserved1 = 0;
 VAR_5->arg.fork.ufd = VAR_6;
 return 0;
}
