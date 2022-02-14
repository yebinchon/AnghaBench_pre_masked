
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mtd_blktrans_dev {int lock; int * mtd; TYPE_1__* tr; scalar_t__ open; TYPE_3__* rq; int queue_lock; int disk; scalar_t__ disk_attributes; } ;
struct TYPE_9__ {int * queuedata; } ;
struct TYPE_8__ {int kobj; } ;
struct TYPE_7__ {int (* release ) (struct mtd_blktrans_dev*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct mtd_blktrans_dev*) ;
 int FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (int ) ;
 int VAR_0 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (struct mtd_blktrans_dev*) ;
 int FUNC_15 (int *,scalar_t__) ;

int FUNC_16(struct mtd_blktrans_dev *VAR_1)
{
 unsigned long VAR_2;

 if (FUNC_10(&VAR_0)) {
  FUNC_11(&VAR_0);
  FUNC_0();
 }

 if (VAR_1->disk_attributes)
  FUNC_15(&FUNC_8(VAR_1->disk)->kobj,
      VAR_1->disk_attributes);


 FUNC_7(VAR_1->disk);


 FUNC_12(&VAR_1->queue_lock, VAR_2);
 VAR_1->rq->queuedata = ((void*)0);
 FUNC_13(&VAR_1->queue_lock, VAR_2);


 FUNC_2(VAR_1->rq);
 FUNC_3(VAR_1->rq);
 FUNC_5(VAR_1->rq);
 FUNC_4(VAR_1->rq);



 FUNC_9(&VAR_1->lock);
 if (VAR_1->open) {
  if (VAR_1->tr->release)
   VAR_1->tr->release(VAR_1);
  FUNC_1(VAR_1->mtd);
 }

 VAR_1->mtd = ((void*)0);

 FUNC_11(&VAR_1->lock);
 FUNC_6(VAR_1);
 return 0;
}
