
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msb_data {int card_dead; int disk; int * queue; int tag_set; int q_lock; int io_queue_stopped; } ;
struct memstick_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 struct msb_data* FUNC_5 (struct memstick_dev*) ;
 int FUNC_6 (struct memstick_dev*,int *) ;
 int FUNC_7 (struct msb_data*) ;
 int VAR_0 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct memstick_dev*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_14(struct memstick_dev *VAR_1)
{
 struct msb_data *VAR_2 = FUNC_5(VAR_1);
 unsigned long VAR_3;

 if (!VAR_2->io_queue_stopped)
  FUNC_9(VAR_1);

 FUNC_3("Removing the disk device");


 FUNC_12(&VAR_2->q_lock, VAR_3);
 VAR_2->card_dead = 1;
 FUNC_13(&VAR_2->q_lock, VAR_3);
 FUNC_2(VAR_2->queue);


 FUNC_4(VAR_2->disk);
 FUNC_0(VAR_2->queue);
 FUNC_1(&VAR_2->tag_set);
 VAR_2->queue = ((void*)0);

 FUNC_10(&VAR_0);
 FUNC_7(VAR_2);
 FUNC_11(&VAR_0);

 FUNC_8(VAR_2->disk);
 FUNC_6(VAR_1, ((void*)0));
}
