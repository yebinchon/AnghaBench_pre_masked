
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int running; int pump_messages; int kworker; int queue_lock; int * cur_msg; scalar_t__ busy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct spi_controller *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_1->queue_lock, VAR_2);

 if (VAR_1->running || VAR_1->busy) {
  FUNC_2(&VAR_1->queue_lock, VAR_2);
  return -VAR_0;
 }

 VAR_1->running = 1;
 VAR_1->cur_msg = ((void*)0);
 FUNC_2(&VAR_1->queue_lock, VAR_2);

 FUNC_0(&VAR_1->kworker, &VAR_1->pump_messages);

 return 0;
}
