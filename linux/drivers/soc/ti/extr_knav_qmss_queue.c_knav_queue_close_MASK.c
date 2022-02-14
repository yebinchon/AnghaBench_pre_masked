
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct knav_range_info {TYPE_1__* ops; } ;
struct knav_queue_inst {TYPE_2__* kdev; struct knav_range_info* range; } ;
struct knav_queue {int stats; int list; int notifier_enabled; struct knav_queue_inst* inst; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* close_queue ) (struct knav_range_info*,struct knav_queue_inst*) ;} ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,struct knav_queue*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct knav_queue*) ;
 int FUNC_4 (struct knav_queue_inst*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct knav_range_info*,struct knav_queue_inst*) ;
 int FUNC_9 () ;

void FUNC_10(void *VAR_1)
{
 struct knav_queue *VAR_2 = VAR_1;
 struct knav_queue_inst *VAR_3 = VAR_2->inst;

 while (FUNC_0(&VAR_2->notifier_enabled) > 0)
  FUNC_3(VAR_2);

 FUNC_6(&VAR_0);
 FUNC_5(&VAR_2->list);
 FUNC_7(&VAR_0);
 FUNC_9();
 if (!FUNC_4(VAR_3)) {
  struct knav_range_info *VAR_4 = VAR_3->range;

  if (VAR_4->ops && VAR_4->ops->close_queue)
   VAR_4->ops->close_queue(VAR_4, VAR_3);
 }
 FUNC_2(VAR_2->stats);
 FUNC_1(VAR_3->kdev->dev, VAR_2);
}
