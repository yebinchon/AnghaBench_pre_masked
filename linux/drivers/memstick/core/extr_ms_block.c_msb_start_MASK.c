
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msb_data {int io_queue_stopped; int need_flush_cache; int io_work; int io_queue; int queue; int q_lock; scalar_t__ card_dead; } ;
struct memstick_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 struct msb_data* FUNC_2 (struct memstick_dev*) ;
 int FUNC_3 (struct msb_data*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct memstick_dev *VAR_0)
{
 struct msb_data *VAR_1 = FUNC_2(VAR_0);
 unsigned long VAR_2;

 FUNC_1("Resuming IO from msblock");

 FUNC_3(VAR_1);

 FUNC_5(&VAR_1->q_lock, VAR_2);
 if (!VAR_1->io_queue_stopped || VAR_1->card_dead) {
  FUNC_6(&VAR_1->q_lock, VAR_2);
  return;
 }
 FUNC_6(&VAR_1->q_lock, VAR_2);


 VAR_1->need_flush_cache = 1;
 VAR_1->io_queue_stopped = 0;

 FUNC_0(VAR_1->queue);

 FUNC_4(VAR_1->io_queue, &VAR_1->io_work);

}
