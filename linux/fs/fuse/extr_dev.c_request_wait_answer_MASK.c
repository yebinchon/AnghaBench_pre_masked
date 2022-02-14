
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; } ;
struct TYPE_4__ {TYPE_1__ h; } ;
struct fuse_req {int flags; int waitq; TYPE_2__ out; int list; } ;
struct fuse_iqueue {int lock; } ;
struct fuse_conn {int no_interrupt; struct fuse_iqueue iq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fuse_iqueue*,struct fuse_req*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct fuse_conn *VAR_6, struct fuse_req *VAR_7)
{
 struct fuse_iqueue *VAR_8 = &VAR_6->iq;
 int VAR_9;

 if (!VAR_6->no_interrupt) {

  VAR_9 = FUNC_9(VAR_7->waitq,
     FUNC_7(VAR_1, &VAR_7->flags));
  if (!VAR_9)
   return;

  FUNC_3(VAR_3, &VAR_7->flags);

  FUNC_4();
  if (FUNC_7(VAR_5, &VAR_7->flags))
   FUNC_2(VAR_8, VAR_7);
 }

 if (!FUNC_7(VAR_2, &VAR_7->flags)) {

  VAR_9 = FUNC_10(VAR_7->waitq,
     FUNC_7(VAR_1, &VAR_7->flags));
  if (!VAR_9)
   return;

  FUNC_5(&VAR_8->lock);

  if (FUNC_7(VAR_4, &VAR_7->flags)) {
   FUNC_1(&VAR_7->list);
   FUNC_6(&VAR_8->lock);
   FUNC_0(VAR_7);
   VAR_7->out.h.error = -VAR_0;
   return;
  }
  FUNC_6(&VAR_8->lock);
 }





 FUNC_8(VAR_7->waitq, FUNC_7(VAR_1, &VAR_7->flags));
}
