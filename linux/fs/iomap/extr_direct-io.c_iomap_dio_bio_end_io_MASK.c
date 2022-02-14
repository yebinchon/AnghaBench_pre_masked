
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_8__ {int work; } ;
struct TYPE_5__ {struct task_struct* waiter; } ;
struct iomap_dio {int flags; TYPE_4__ aio; TYPE_2__* iocb; TYPE_1__ submit; scalar_t__ wait_for_completion; int ref; } ;
struct inode {TYPE_3__* i_sb; } ;
struct bio {scalar_t__ bi_status; struct iomap_dio* bi_private; } ;
struct TYPE_7__ {int s_dio_done_wq; } ;
struct TYPE_6__ {int ki_filp; } ;


 int FUNC_0 (int *,int (*) (int *)) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct task_struct*,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct task_struct*) ;
 struct inode* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct iomap_dio*,int ) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct bio *VAR_2)
{
 struct iomap_dio *VAR_3 = VAR_2->bi_private;
 bool VAR_4 = (VAR_3->flags & VAR_0);

 if (VAR_2->bi_status)
  FUNC_10(VAR_3, FUNC_6(VAR_2->bi_status));

 if (FUNC_2(&VAR_3->ref)) {
  if (VAR_3->wait_for_completion) {
   struct task_struct *VAR_5 = VAR_3->submit.waiter;
   FUNC_1(VAR_3->submit.waiter, ((void*)0));
   FUNC_7(VAR_5);
  } else if (VAR_3->flags & VAR_1) {
   struct inode *VAR_6 = FUNC_8(VAR_3->iocb->ki_filp);

   FUNC_0(&VAR_3->aio.work, FUNC_9);
   FUNC_11(VAR_6->i_sb->s_dio_done_wq, &VAR_3->aio.work);
  } else {
   FUNC_9(&VAR_3->aio.work);
  }
 }

 if (VAR_4) {
  FUNC_3(VAR_2);
 } else {
  FUNC_5(VAR_2, 0);
  FUNC_4(VAR_2);
 }
}
