
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int context; int (* complete ) (int ) ;int * state; } ;
struct spi_controller {int cur_msg_prepared; int (* unprepare_message ) (struct spi_controller*,struct spi_message*) ;int queue_lock; int pump_messages; int kworker; struct spi_message* cur_msg; int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct spi_controller*,struct spi_message*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct spi_controller*,struct spi_message*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct spi_message*) ;

void FUNC_8(struct spi_controller *VAR_0)
{
 struct spi_message *VAR_1;
 unsigned long VAR_2;
 int VAR_3;

 FUNC_3(&VAR_0->queue_lock, VAR_2);
 VAR_1 = VAR_0->cur_msg;
 FUNC_4(&VAR_0->queue_lock, VAR_2);

 FUNC_2(VAR_0, VAR_1);

 if (VAR_0->cur_msg_prepared && VAR_0->unprepare_message) {
  VAR_3 = VAR_0->unprepare_message(VAR_0, VAR_1);
  if (VAR_3) {
   FUNC_0(&VAR_0->dev, "failed to unprepare message: %d\n",
    VAR_3);
  }
 }

 FUNC_3(&VAR_0->queue_lock, VAR_2);
 VAR_0->cur_msg = ((void*)0);
 VAR_0->cur_msg_prepared = 0;
 FUNC_1(&VAR_0->kworker, &VAR_0->pump_messages);
 FUNC_4(&VAR_0->queue_lock, VAR_2);

 FUNC_7(VAR_1);

 VAR_1->state = ((void*)0);
 if (VAR_1->complete)
  VAR_1->complete(VAR_1->context);
}
