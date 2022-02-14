
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fuse_req {int intr_entry; int flags; } ;
struct fuse_iqueue {int lock; TYPE_1__* ops; int interrupts; } ;
struct TYPE_2__ {int (* wake_interrupt_and_unlock ) (struct fuse_iqueue*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct fuse_iqueue*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct fuse_iqueue *VAR_3, struct fuse_req *VAR_4)
{
 FUNC_4(&VAR_3->lock);

 if (FUNC_8(!FUNC_7(VAR_2, &VAR_4->flags))) {
  FUNC_5(&VAR_3->lock);
  return -VAR_0;
 }

 if (FUNC_2(&VAR_4->intr_entry)) {
  FUNC_0(&VAR_4->intr_entry, &VAR_3->interrupts);




  FUNC_3();
  if (FUNC_7(VAR_1, &VAR_4->flags)) {
   FUNC_1(&VAR_4->intr_entry);
   FUNC_5(&VAR_3->lock);
   return 0;
  }
  VAR_3->ops->wake_interrupt_and_unlock(VAR_3);
 } else {
  FUNC_5(&VAR_3->lock);
 }
 return 0;
}
