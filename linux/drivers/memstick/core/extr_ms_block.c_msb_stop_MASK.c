
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msb_data {int io_queue_stopped; int q_lock; int * req; int io_queue; int cache_flush_timer; int queue; } ;
struct memstick_dev {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 struct msb_data* FUNC_5 (struct memstick_dev*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct memstick_dev *VAR_0)
{
 struct msb_data *VAR_1 = FUNC_5(VAR_0);
 unsigned long VAR_2;

 FUNC_2("Stopping all msblock IO");

 FUNC_1(VAR_1->queue);
 FUNC_6(&VAR_1->q_lock, VAR_2);
 VAR_1->io_queue_stopped = 1;
 FUNC_7(&VAR_1->q_lock, VAR_2);

 FUNC_3(&VAR_1->cache_flush_timer);
 FUNC_4(VAR_1->io_queue);

 FUNC_6(&VAR_1->q_lock, VAR_2);
 if (VAR_1->req) {
  FUNC_0(VAR_1->req, 0);
  VAR_1->req = ((void*)0);
 }
 FUNC_7(&VAR_1->q_lock, VAR_2);
}
