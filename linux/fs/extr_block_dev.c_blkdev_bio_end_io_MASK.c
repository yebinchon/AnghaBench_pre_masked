
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct kiocb {int (* ki_complete ) (struct kiocb*,scalar_t__,int ) ;int ki_pos; } ;
struct bio {scalar_t__ bi_status; struct blkdev_dio* bi_private; } ;
struct blkdev_dio {int should_dirty; struct task_struct* waiter; struct bio bio; scalar_t__ multi_bio; struct kiocb* iocb; scalar_t__ size; int is_sync; int ref; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (struct task_struct*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct task_struct*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct kiocb*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_9(struct bio *VAR_0)
{
 struct blkdev_dio *VAR_1 = VAR_0->bi_private;
 bool VAR_2 = VAR_1->should_dirty;

 if (VAR_0->bi_status && !VAR_1->bio.bi_status)
  VAR_1->bio.bi_status = VAR_0->bi_status;

 if (!VAR_1->multi_bio || FUNC_1(&VAR_1->ref)) {
  if (!VAR_1->is_sync) {
   struct kiocb *VAR_3 = VAR_1->iocb;
   ssize_t VAR_4;

   if (FUNC_7(!VAR_1->bio.bi_status)) {
    VAR_4 = VAR_1->size;
    VAR_3->ki_pos += VAR_4;
   } else {
    VAR_4 = FUNC_5(VAR_1->bio.bi_status);
   }

   VAR_1->iocb->ki_complete(VAR_3, VAR_4, 0);
   if (VAR_1->multi_bio)
    FUNC_3(&VAR_1->bio);
  } else {
   struct task_struct *VAR_5 = VAR_1->waiter;

   FUNC_0(VAR_1->waiter, ((void*)0));
   FUNC_6(VAR_5);
  }
 }

 if (VAR_2) {
  FUNC_2(VAR_0);
 } else {
  FUNC_4(VAR_0, 0);
  FUNC_3(VAR_0);
 }
}
