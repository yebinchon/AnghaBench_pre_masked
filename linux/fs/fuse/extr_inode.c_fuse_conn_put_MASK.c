
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fuse_iqueue {TYPE_1__* ops; } ;
struct fuse_conn {int (* release ) (struct fuse_conn*) ;int user_ns; int pid_ns; struct fuse_iqueue iq; int count; } ;
struct TYPE_2__ {int (* release ) (struct fuse_iqueue*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct fuse_iqueue*) ;
 int FUNC_4 (struct fuse_conn*) ;

void FUNC_5(struct fuse_conn *VAR_0)
{
 if (FUNC_2(&VAR_0->count)) {
  struct fuse_iqueue *VAR_1 = &VAR_0->iq;

  if (VAR_1->ops->release)
   VAR_1->ops->release(VAR_1);
  FUNC_0(VAR_0->pid_ns);
  FUNC_1(VAR_0->user_ns);
  VAR_0->release(VAR_0);
 }
}
